#include <iostream>
#include <queue>
using namespace std;

struct node
{
    struct node *left;
    int data;
    struct node *right;
};

void printLevelOrder(node *root)
{

    if (root == NULL)
        return;

    queue<node *> q;

    q.push(root);

    while (q.empty() == false)
    {

        int nodeCount = q.size();

        while (nodeCount > 0)
        {
            node *node = q.front();
            cout << node->data << " ";
            q.pop();
            if (node->left != NULL)
                q.push(node->left);
            if (node->right != NULL)
                q.push(node->right);
            nodeCount--;
        }
        cout << endl;
    }
}

node *newNode(int data)
{
    node *temp = new node;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

node *search(node *root, int data)
{
    if (root)
    {
        if (root->data == data)
            return root;

        else
        {
            node *left = search(root->left, data);
            node *right = search(root->right, data);
            if (left)
                return left;
            else
                return right;
        }
    }
    else
    {
        return NULL;
    }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        node *root;
        while (n--)
        {
            int u, v;
            char x;
            cin >> u >> v >> x;
            node *temp = search(root, u);
            if (temp == NULL)
            {
                root->data = u;
                temp = root;
            }
            node *s;
            s->data = v;
            if (x == 'L')
            {
                temp->left = s;
            }
            else
            {
                temp->right = s;
            }
        }

        printLevelOrder(root);
    }

    return 0;
}
