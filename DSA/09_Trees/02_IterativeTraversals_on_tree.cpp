#include <iostream>
#include <stack>
using namespace std;

 
class Node{
public:
    Node* lchild;
    int data;
    Node* rchild;
};
 
class Queue{
private:
    int size;
    int front;
    int rear;
    Node** Q;  // [Node*]*: Pointer to [Pointer to Node]
public:
    Queue(int size);
    ~Queue();
    bool isFull();
    bool isEmpty();
    void enqueue(Node* x);
    Node* dequeue();
};
 
Queue::Queue(int size) {
    this->size = size;
    front = -1;
    rear = -1;
    Q = new Node* [size];
}
 
Queue::~Queue() {
    delete [] Q;
}
 
bool Queue::isEmpty() {
    if (front == rear){
        return true;
    }
    return false;
}
 
bool Queue::isFull() {
    if (rear == size-1){
        return true;
    }
    return false;
}
 
void Queue::enqueue(Node* x) {
    if (isFull()){
        cout << "Queue Overflow" << endl;
    } else {
        rear++;
        Q[rear] = x;
    }
}
 
Node* Queue::dequeue() {
    Node* x = nullptr;
    if (isEmpty()){
        cout << "Queue Underflow" << endl;
    } else {
        front++;
        x = Q[front];
    }
    return x;
}
 
class Tree{
private:
    Node* root;
public:
    Tree() { root = nullptr; }
    void CreateTree();
    void Preorder(){ I_Preorder(root); }  // Passing Private Parameter in Constructor
    void I_Preorder(Node* p);
    void I_Postorder(){ I_Postorder(root); }  // Passing Private Parameter in Constructor
    void I_Postorder(Node* p);
    void I_Inorder(){ I_Inorder(root); }
    void I_Inorder(Node* p);
    void LevelOrder(){ LevelOrder(root); }
    void LevelOrder(Node* p);
    Node* getRoot(){ return root; }
};
 
void Tree::CreateTree() {
    Node* p;
    Node* t;
    int x;
 
    Queue q(25);
    root = new Node;
    cout << "Enter root value: " << flush;
    cin >> x;
    root->data = x;
    root->lchild = nullptr;
    root->rchild = nullptr;
    q.enqueue(root);
 
    while (! q.isEmpty()){
        p = q.dequeue();
 
        cout << "Enter left child value of " << p->data << ": " << flush;
        cin >> x;
        if (x != -1){
            t = new Node;
            t->data = x;
            t->lchild = nullptr;
            t->rchild = nullptr;
            p->lchild = t;
            q.enqueue(t);
        }
 
        cout << "Enter left child value of " << p->data << ": " << flush;
        cin >> x;
        if (x != -1){
            t = new Node;
            t->data = x;
            t->lchild = nullptr;
            t->rchild = nullptr;
            p->rchild = t;
            q.enqueue(t);
        }
    }
}
 
void Tree::I_Preorder(Node *p) {
    stack<Node*> stk;
    while (p != nullptr || ! stk.empty())
    {
        if (p != nullptr){
            cout << p->data << ", " << flush;
            stk.emplace(p);
            p = p->lchild;
        } else {
            p = stk.top();
            stk.pop();
            p = p->rchild;
        }
    }
}
 
void Tree::I_Inorder(Node *p) {
    stack<Node*> stk;
    while (p != nullptr || ! stk.empty())
    {
        if (p != nullptr){
            stk.emplace(p);
            p = p->lchild;
        } else {
            p = stk.top();
            stk.pop();
            cout << p->data << ", " << flush;
            p = p->rchild;
        }
    }
}
 
/*
void Tree::I_Postorder(Node *p) {
     stack<long int> stk;
    long int temp;
    while (p != nullptr || ! stk.empty()){
        if (p != nullptr){
            stk.emplace((long int)p);
            p = p->lchild;
        } else {
            temp = stk.top();
            stk.pop();
            if (temp > 0){
                stk.emplace(-temp);
                p = ((Node*)temp)->rchild;
            } else {
                cout << ((Node*)(-1 * temp))->data << ", " << flush;
                p = nullptr;
            }
        }
    }
}
*/

void Tree:: LevelOrder(Node *p)
{
    Queue q(20);
    q.enqueue(p);
    cout << p->data << ", " <<flush;

    while(!q.isEmpty()) 
    {
        p=q.dequeue();
        if(p->lchild){
            q.enqueue(p->lchild);
            cout << p->lchild->data << ", " << flush;
        }
        if(p->rchild){
            q.enqueue(p->rchild);
            cout << p->rchild->data << ", " << flush;
        }
    }


}


 
int main(){
 
    Tree t;
 
    t.CreateTree();
 
    cout << "I_Preorder: " << flush;
    t.I_Preorder(t.getRoot());
    cout << endl;
 
    cout << "I_Inorder: " << flush;
    t.I_Inorder(t.getRoot());
    cout << endl;
 
    /*
    cout << "I_Postorder: " << flush;
    t.I_Postorder(t.getRoot());
    cout << endl;
    */
    
    cout << "LevelOrder: " << flush;
    t.LevelOrder(t.getRoot());
    cout << endl;

    return 0;
 
}