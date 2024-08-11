#include <bits/stdc++.h>

using namespace std;
#define ASCII_SIZE 256
#define MAX_INT 2000000
#define ll long long
#define MOD 1000000007
#define vi vector<int>
#define vd vector<double>
#define vs vector<string>
#define vvi vector<int<vector<int>>>
#define REP(i, a, b) for (int i = a; i < b; i++)

// unordered_map<int, node *> mp{{-1,-1}};

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{

    int data;
    cout << "Enter the Data:" << endl;
    cin >> data;
    
    if (data == -1)
    {
        return NULL;
    }
    root = new node(data);
    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

void inOrder(node *root){
    if(root == NULL ) return;

    inOrder(root->left);
    cout<<(root->data)<<" ";

    inOrder(root->right);

}

void preOrder(node *root){
    if(root == NULL) return;

    cout<<(root->data)<<" ";
    preOrder(root->left);
    preOrder(root->right);
}           

void postOrder(node *root){
    if(root == NULL) return ;

    postOrder(root->left);
    postOrder(root->right);
    cout<<(root->data)<<" ";
}















int height(node *root)
{
    if (root == NULL)
        return 0;

    return max(height(root->left), height(root->right)) + 1;
}

int sizeofBT(node *root)
{
    if (root == NULL)
        return 0;

    return sizeofBT(root->left) + sizeofBT(root->right) + 1;
}

int maximum(node *root)
{
    if (root == NULL)
        return INT_MIN;

    int leftMax = maximum(root->left);
    int rightMax = maximum(root->right);

    return max(max(leftMax, rightMax), root->data);
}
int minimum(node *root)
{
    if (root == NULL)
        return INT_MAX;

    int leftMax = minimum(root->left);
    int rightMax = minimum(root->right);

    return min(min(leftMax, rightMax), root->data);
}

void printEachLevel(node *root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
    {
        cout << root->data << " ";
    }
    else if (level > 1)
    {
        printEachLevel(root->left, level - 1);
        printEachLevel(root->right, level - 1);
    }
}

void levelOTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *curr = q.front();
        q.pop();

        if (curr == NULL)
        {
            if (q.empty())
            {
                return;
            }

            q.push(NULL);
            cout << endl;
            continue;
        }
        cout << curr->data << " ";

        if (curr->left != NULL)
        {
            q.push(curr->left);
        }
        if (curr->right != NULL)
        {
            q.push(curr->right);
        }
    }
}
unordered_map<int,node*> mp;

void leftView(node *root,int level){
    if(root==NULL) return ;
    if(mp[level]==NULL){
        mp[level] = root;
    }
    leftView(root->left,level+1);
    leftView(root->right,level+1);
            
}

void rightView(node *root,int level){
    if(root==NULL) return ;

   
        mp[level] = root;
    

    rightView(root->left,level+1);

    rightView(root->right,level+1);
            
}

// void ancestors(node *root,vector<int>& v,int val){
//     if(root == NULL) return;
//     if(root -> data == val){
//         return;
//     }
//     v.push_back(root->data);
//     ancestors(root->left,v,4);
//     v.pop_back();
//     ancestors(root->right,v,4);

// }

node* LCA(node *root,int n1,int n2){
    if(root == NULL) return NULL;
    if(root->data == n1 || root->data == n2) return root;
    node* left = LCA(root->left,n1,n2);
    node *right = LCA(root->right,n1,n2);
    if(left == NULL ) return right;
    if(right == NULL) return left;
    return root;

    
}

int diameter_of_BST(node* root){
    if(root == NULL) return 0;
    //TLE O(n^2)
    int l = diameter_of_BST(root->left);
    int r = diameter_of_BST(root->right);
    int lh = height(root->left);
    int rh = height(root->right);
    int d = lh+rh+1;
    return max(d,max(l,r));
}
 
 int ans = 0;
 int diameter(node* root){
     if(root == NULL) return 0;
     int l = diameter(root->left);
     int r = diameter(root->right);
     ans = max(ans,l+r+1);
     return ans;
 }

int main()
{
//         ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);

// #endif

    node *root = NULL;

    // creating a tree
    root = buildTree(root);

    // 5 2 4 -1 1 7 -1 -1 6 -1 -1 -1 3 -1 -1
    inOrder(root);
    // int k = height(root);
    // int n = sizeofBT(root);
    // int mx = maximum(root);
    // int mn = minimum(root);
    // cout << "Height of this tree is " << k << endl;
    // cout << "Size of this tree is " << n << endl;
    // cout << "Max element in the BST :" << maximum(root) << endl;
    // cout << "Min element in the BST :" << minimum(root) << endl;
    // for(int i=1;i<=k;i++){
    //    printEachLevel(root,i);
    // }

    // levelOTraversal(root);
    // rightView(root,0);
    // for(auto it:mp){
    //     cout<<it.first<<"->"<<it.second -> data<<endl;
    // }
    // cout<<diameter(root)<<endl;
    vector<int> v;

    // ancestors(root,v,4);
    // for(auto x:v)cout<<"ancestor: "<<x<<" ";

    node * lca = LCA(root,3,4);

    

    return 0;
}
