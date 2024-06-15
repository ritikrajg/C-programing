#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
    int data;
    Node *right;
    Node *left;
    Node(int d)
    {
        this->data = d;
        right = NULL;
        left = NULL;
    }
};
Node *buildTree(Node *root)
{
    int d;
    cout << "Enter the number of nodes in the tree : " << endl;
    cin >> d;
    root = new Node(d);
    if (root->data == -1)
    {
        return NULL;
    }
    cout << "Enter the data of the left child of " << root->data << endl;
    root->left = buildTree(root->left);
    cout << "Enter the data of the right child of " << root->data << ":" << endl;
    root->right = buildTree(root->right);
    return root;
}
void printlevelorder(Node *node)
{
    queue<Node *> a;
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
/*void printinorder(Node *node){
    if(node==NULL){
        return;
    }
    printinorder(node->left);
    cout<<node->data<<" ";
    printinorder(node->right);
}
void printpreorder(Node* node) {
    if(node==NULL){
        return ;
    }
    cout<<node->data<<" ";
    printpreorder(node->left);
    printpreorder(node->right);
}
void printpostorder(Node *node){
    if(node == NULL)return ;
    printpostorder(node->left);
    printpostorder(node->right);
    cout<<node->data<<" ";
}*/
void printinorder(Node *node){
    Node *curr=node;
    stack<Node*> a;
    a.push(curr);
    
}
int main()
{
    Node *root = NULL;
    root = buildTree(root);
    printlevelorder(root);
    cout<<endl;
    printinorder(root);
    cout<<endl;
    printpostorder(root);
    return 0;
}
