#include <iostream>

using namespace std;
struct node
{
    char data;
    struct node* left;
    struct node* right;
};

void preorder(node* c)
{
    if (c)
    {
        cout << c->data << " ";
        preorder(c->left);
        preorder(c->right);
    }
}

void ROOT()
{
    node* root, * c1, * c2, * c4, * c5;
    c1 = new node;
    c1->data = 'A';
    root = c1;
    c2 = new node;
    c2->data = 'B';
    c4 = new node;
    c4->data = 'C';
    c5 = new node;
    c5->data = 'D';

    c1->left = c2;
    c1->right = NULL;
    c2->left = c4;
    c2->right = c5;
    c4->left = NULL;
    c4->right = NULL;
    c5->left = NULL;
    c5->right = NULL;

    cout << " ---TREE--- "<<endl;
    preorder(root);
    cout << endl;
    cout << "\n-----------------"<<endl;
    cout << "傳回TREE的根\n";
    cout << c1->data << endl;
}

void addChild()
{
    node* root, * c1, * c2, * c3, *c4, * c5;
    c1 = new node;
    c1->data = 'A';
    root = c1;
    c2 = new node;
    c2->data = 'B';
    c3 = new node;
    c3->data = 'n';
    c4 = new node;
    c4->data = 'C';
    c5 = new node;
    c5->data = 'D';

    c1->left = c2;
    c1->right = c3;
    c2->left = c4;
    c2->right = c5;
    c3->left = NULL;
    c3->right = NULL;
    c4->left = NULL;
    c4->right = NULL;
    c5->left = NULL;
    c5->right = NULL;
    cout << "\n將n插入，作為A的節點\n";
    preorder(root);
    cout << endl;
}

void cut()
{
    node* root, * c1, * c2, * c3;
    c1 = new node;
    c1->data = 'B';
    root = c1;
    c2 = new node;
    c2->data = 'C';
    c3 = new node;
    c3->data = 'D';

    c1->left = c2;
    c1->right = c3;
    c2->left = NULL;
    c2->right = NULL;
    c3->left = NULL;
    c3->right = NULL;

    cout << "\n參考原本的樹，建立以B為根的樹\n";
    preorder(root);
    cout << endl;
}

void paste()
{
    node* root, * c1, * c3, * c7, * c14, * c15;
    c1 = new node;
    c1->data = 'A';
    root = c1;
    c3 = new node;
    c3->data = 'n';
    c7 = new node;
    c7->data = 'B';
    c14 = new node;
    c14->data = 'C';
    c15 = new node;
    c15->data = 'D';

    c1->left = NULL;
    c1->right = c3;
    c3->left = NULL;
    c3->right = c7;
    c7->left = c14;
    c7->right = c15;
    c14->left = NULL;
    c14->right = NULL;
    c15->left = NULL;
    c15->right = NULL;

    cout << "\n 將B接到n下 \n";
    preorder(root);
    cout << endl;
}

int main()
{
    ROOT();
    cout << endl;

    addChild();
    cout << endl;

    cut();
    cout << endl;

    paste();
    return 0;
}
