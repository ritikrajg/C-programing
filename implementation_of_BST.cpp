#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int d){
        this->data=d;
        left=NULL;
        right=NULL;
    }
};
Node *insert(Node *root,int key){
    if(root==NULL){
        root=new Node(key);
        return root;
    }
    if(key>root->data){
        root->right=insert(root->right,key);
    }
    else{
        root->left=insert(root->left,key);
    }
    return root;
}

void takeInput(Node *&root){
    int data;
    cin>>data;
    while(data!=-1){
        root=insert(root,data);
        cin>>data;
    }
}
void printlevelorder(Node *node)
{
    queue<Node*> a;
    a.push(node);
    while (!a.empty())
    {
        Node *temp = a.front();
        cout << temp->data << " ";
        a.pop();
        if (temp->left)
        {
            a.push(temp->left);
        }
        if (temp->right)
        {
            a.push(temp->right);
        }
    }
}
void printPreorder(Node *root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}
void maxval(Node *root){
    if(root==NULL){
        return;
    }
    maxval(root->right);
    if(root->right==NULL){
    cout<<root->data;
    }
}
void minvalue(Node *root){
    if(root==NULL){
        return;
    }
    minvalue(root->left);
    if(root->left==NULL){
    cout<<root->data;
    }
}
void predecessor(Node *root,int val){
    if(root==NULL){
        return;
    }
    if(){
        cout<<root->data;
        return;
    }
    else if(val>root->data){
        predecessor(root->right,val);
    }
    else if(val<root->data){
        predecessor(root->left,val);
    }
}
void successor(Node *root,int val){
    if(root==NULL){
        return;
    }
    if(root->left->data==val || root->right->data==val){
        cout<<root->data;
        return;
    }
    else if(val>root->data){
        successor(root->right,val);
    }
    else if(val<root->data){
        successor(root->left,val);
    }
}
int main(){
    Node *root=NULL;
    takeInput(root);
    printPreorder(root);
    cout<<endl;
    printlevelorder(root);
    cout<<endl;
    maxval(root);
    cout<<endl;
    minvalue(root);
    cout<<endl;
    predecessor(root,5);
    cout<<endl;
    successor(root,5);
    return 0;
}