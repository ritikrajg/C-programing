#include <iostream>
using namespace std;
class Node
{
public:
    Node *child[26];
    bool endword;
    Node()
    {
        endword = false;
        for (int i = 0; i < 26; i++)
        {
            child[i] = NULL;
        }
    }
};
class trie
{
public:
    Node *root;
    trie()
    {
        root = new Node();
    }
    void insert(string s)
    {
        Node *node = root;
        for (auto a : s)
        {
            int index = a - 'a';
            if (!node->child[index])
            {
                node->child[index] = new Node();
                node = node->child[index];
            }
            else
            {
                node = node->child[index];
            }
        }
        node->endword = true;
    }
    bool search(string s)
    {
        Node *node = root;
        for (auto a : s)
        {
            int index = a - 'a';
            if (!node->child[index])
            {
                return false;
            }
            node = node->child[index];
        }
        return node->endword;
    }
    bool isempty(Node *root)
    {
        for (int i = 0; i < 26; i++)
        {
            if (root->child[i] != NULL)
            {
                return false;
            }
        }
        return true;
    }
    bool remove(Node *root, string s, int depth)
    {
        if (s.size() == depth)
        {
            if (!root->endword)
            {
                return false;
            }
            root->endword = false;
            return isempty(root);
        }
        int index = s[depth] - 'a';
        if (!root->child[index])
        {
            return false;
        }
        bool deletenode = remove(root->child[index], s, depth + 1);
        if (deletenode)
        {
            delete (root->child[index]);
            root->child[index] = NULL;
            return !root->endword && isempty(root);
        }
        return false;
    }
    void deletenode(string word)
    {
        remove(root, word, 0);
    }
};
int main(){
    trie *t=new trie();
    t->insert("apple");
    t->insert("boll");
    t->insert("duck");
    cout<<t->search("duck")<<endl;
    t->deletenode("duck");
    cout<<t->search("duck")<<endl;
    return 0;
}