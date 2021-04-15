#include <iostream>

using namespace std;

struct node
{
    int value;
    struct node *next;
    struct node *prev;
} * start;

class array_list
{
public:
    array_list()
    {
        start = NULL;
    }
    void create_node(int value)
    {
        struct node *temp;
        temp = new (struct node);
        temp->value = value;
        temp->next = NULL;
        temp->prev = NULL;
        if (start == NULL)
        {
            start = temp;
        }
        else
        {
            struct node *q;
            q = start;
            while (q->next != NULL)
            {
                q = q->next;
            }
            temp->prev = q;
            q->next = temp;
        }
    }
    void add(int value)
    {
        struct node *temp;
        temp = start;
        while (temp != NULL)
        {
            if (value < temp->value)
            {
                struct node * q;
                q = new (struct node);
                q->value = value;
                q->next = temp;
                if (temp->prev == NULL) {
                    start = q;
                    q->prev = NULL;
                    temp->prev = q;
                } else {
                    struct node *preNode;
                    preNode = temp->prev;
                    temp->prev = q;
                    preNode->next = q;
                    q->prev = preNode;
                }
                return;
            }
            temp = temp->next;
        }
        create_node(value);
    }
    void display()
    {
        struct node *temp;
        temp = start;
        while (temp != NULL)
        {
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

main()
{
    int n, x;
    array_list mang;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        mang.add(x);
        cout << "Buoc " << i << ": ";
        mang.display();
    }
}