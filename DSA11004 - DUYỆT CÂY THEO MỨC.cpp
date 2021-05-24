/* code by T.A.N */
#include<bits/stdc++.h>
#define ll long long
#define fi first
#define se second
const long int N=1e6+5;
const long int mod=1e9+7;
using namespace std;
typedef pair <int, int> pp;

int n;
struct Node{
	int data;
	Node *left;
	Node *right;
	Node(int x){
		data = x;
		left = right = NULL;
	}
};
Node *Tree(int n)
{
	map <int,Node *> mp;
    Node *root = NULL;
    while(n--){
        int a,b;
        char c;
        cin >> a >> b >> c;
        Node *cha;
        if(mp.find(a) == mp.end()){
            cha = new Node(a);
            mp[a] = cha;
            if(root == NULL)
                root = cha;
        }
        else cha = mp[a];
        Node *con = new Node(b);
        if(c == 'L') cha -> left = con;
        else if(c == 'R') cha -> right = con;
        mp[b] = con;
    }
    return root;
}
void leverOder(Node *root)
{
	if( root == NULL )	return;
	queue <Node *> q;
	q.push(root);
	while( !q.empty() )
	{
		Node *t = q.front(); q.pop();
		cout<<t->data<<" ";
		if( t->left )	q.push(t->left);
		if( t->right )	q.push(t->right);
	}
}
void solve()
{
	cin>>n;
	Node *root = Tree(n);
	leverOder(root);
	cout<<endl;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
//	ios_base::sync_with_stdio(0);cin.tie(0);
	return 0;
}

/* T.A.N */