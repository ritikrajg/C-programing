#include <iostream>
#include<queue>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *add(Node *root)
{
    cout << "Enter the data: " << endl;
    int d;
    cin >> d;
    root = new Node(d);
    if (root->data == -1)
    {
        return NULL;
    }
    cout << "Enter the data to insert on left of " << root->data << endl;
    root->left = add(root->left);
    cout << "Enter the data to insert on right of " << root->data << endl;
    root->right = add(root->right);
    return root;
}
void Lot(Node *root){
    queue<Node*> a;
    a.push(root);
    while(!a.empty()){
        Node *temp=a.front();
        cout<<temp->data<<" ";
        a.pop();
        if(temp->left){
            a.push(temp->left);
        }
        if(temp->right){
            a.push(temp->right);
        }
    }
}
int main()
{
    Node *root;
    root = add(root);
    Lot(root);
}