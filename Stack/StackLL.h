#include <iostream>
using namespace std;

template<typename T>
class StackLL;

template <typename T>
class Node{
    public:
    T data;
    Node<T> *next;

    Node(T d){
        data = d;
        next = NULL;
    }
};

template<typename T>
class StackLL{
    Node<T> * head;
    public:
    StackLL(){
        head=NULL;
    }

    //To push the element in the stack
    void push(T data){
            Node<T> *p = new Node<T>(data);
            if(head==NULL)head = p;
            else{
                p->next = head;
                head = p;
            }
             
    }

    //To get the top element of the stack
    T top(){
        return head->data;
    }

    //To see if stack is full
    bool empty(){
        return head==NULL;
    }

    //To pop the top element
    void pop(){
        if(head == NULL)cout<<"Stack is empty"<<endl;
        else{
             Node<T> *p;
             p = head;
             head = head->next;
             delete (p);
        } 
    }

};
