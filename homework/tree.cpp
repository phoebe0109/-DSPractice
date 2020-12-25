#include <iostream>

using namespace std;
struct node
{
    char data;
    struct node* left;
    struct node* right;
}
void breadthFirst(node*);
void preorder(node*);
void inorder(node*);
void postorder(node*);
int main(void){
 
  node *root,*p1,*p2,*p3,*p4,*p5,*p6,*p7;
  p1=new node;
  p1->data='1';
  root=p1;
  p2=new node;
  p2->data='2';  
  p3=new node;
  p3->data='3';
  p4=new node;
  p4->data='4';
  p5=new node;
  p5->data='5';
  p6=new node;
  p6->data='6';
  p7=new node;
  p7->data='7';
  p1->left=p2;
  p1->right=p3;
  p2->left=p4;
  p2->right=p5;
  p3->left=p6;
  p3->right=p7;
  p4->left=NULL;
  p4->right=NULL;
  p5->left=NULL;
  p5->right=NULL;
  p6->left=NULL;
  p6->right=NULL;
  p7->left=NULL;
  p7->right=NULL;
  preorder(root);
  cout << endl;
  inorder(root);
  cout << endl;
  postorder(root);
  cout << endl;
}
void
void preorder(node *p){
  if(p) {
    cout << p->data << " ";
    preorder(p->left);
    preorder(p->right);
  }
}
void inorder(node *p){
  if(p) {
    inorder(p->left);
    cout << p->data << " ";
    inorder(p->right);
  }
}
void postorder(node *p){
  if(p) {
    postorder(p->left);
    postorder(p->right);
    cout << p->data << " ";
  }
}
/*v0.1
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
