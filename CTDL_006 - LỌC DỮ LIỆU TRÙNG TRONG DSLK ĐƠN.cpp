#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct Node {
    ll value;
    Node *next;
};
typedef struct Node *node;
node CreateNode(ll value) {
    node p = new Node;
    p->value = value;
    p->next = NULL;
    return p;
}
node InitFirst() {
    node first;
    first = NULL;
    return first;
}
node AddTail(node first, ll value) {
    node temp = CreateNode(value);
    if (first == NULL) {
        first = temp;
    } else {
        node p = first;
        while (p->next != NULL) p = p->next;
        p->next = temp;
    }
    return first;
}
int main() {    
    ll n;
    cin >> n;
    node first = InitFirst();
    for (ll i = 0; i < n; i++) {
        ll m;
        cin >> m;
        node p = first;
        while (p != NULL) {
            if (p->value == m) break;
            p = p->next;
        }
        if (p == NULL) first = AddTail(first, m);
    }
    for(node p = first; p != NULL; p = p->next)
        cout << p->value << " ";
}