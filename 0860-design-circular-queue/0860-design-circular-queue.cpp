//Using LINKED LIST
class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this -> data = data;
        next = NULL;
    }
};

class MyCircularQueue {
public:
    int size = 0;
    int currSize = 0;
    Node* front = NULL;
    Node* rear = NULL;

    MyCircularQueue(int k) {
        size = k;
    }
    
    bool enQueue(int value) {
        if(isFull()){
            return 0;
        }
        Node* newnode = new Node(value);
        if( front == NULL && rear == NULL){
            front = newnode;
            rear = newnode;
        }
        else {
            rear -> next = newnode;
        }
        newnode -> next = front;
        rear = newnode;
        currSize++;
        return 1; 
    }
    
    bool deQueue() {
        if(isEmpty()){
            return 0;
        }
        if(front == rear){
            front = NULL;
            rear = NULL;
        }
        else {
            front = front -> next;
            delete rear -> next;
            rear -> next = front;
        }
        currSize--;
        return 1;
    }
    
    int Front() {
        if(isEmpty()){
            return -1;
        }
        return front -> data;
    }
    
    int Rear() {
        if(isEmpty()){
            return -1;
        }
        return rear -> data;
    }
    
    bool isEmpty() {
        return currSize == 0;
    }
    
    bool isFull() {
        return currSize == size;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */