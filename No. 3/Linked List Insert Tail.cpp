
/*--------------------------------------------------------------*
 * Filename        : villarez_le3.cpp                           *
 * Description     : Extend your linked-list implementation of  *
                     the integer list to support insertion at   *
                     the end of the list.                       *
 * Author          :  John Carlo R. Villarez                    *
 * Course and Year :  BSIT - 1                                  *
 * Last Modified   :  September 27,2019                         *
 * Honor Code      : This is my own code. I have worked hard in *
 *                   completing this work and I have not copied *
 *                   from any unauthorized resource.            *
 *                   I am also well aware of the policies       *
 *                   stipulated in the college student handbook *
 *                   regarding academic dishonesty.             *
 *--------------------------------------------------------------*/
#include<iostream>
using namespace std;

class Node {

    private:
        int data;
        Node* next;
     public:
        Node(int x = 0) {
        data = x;
        next = NULL;
        }

    int get_data() {
        return data;
    }
    Node* get_next(){
        return next;
    }
    void set_data(int x) {
        data = x;
    }
    void set_next(Node* ptr) {
        next = ptr;
    }
};
class LinkedList {
    private:
        Node* head;
        Node* tail;
    public:
    LinkedList() : head(nullptr) , tail(nullptr){}
    
    void insert_to_head(int x) {
    if(head == nullptr) {
        Node* newNodePtr = new Node(x);
        head = newNodePtr;
    } else {
        Node* newNodePtr = new Node(x);
        newNodePtr -> set_next(head);
        head = newNodePtr;
    }
}
    void insert_to_tail(int x) {
        if(head == nullptr) {
        Node* newNodePtr = new Node(x);
        tail = newNodePtr;
    } else {
        Node* newNodePtr = new Node(x);
        newNodePtr -> set_next(tail);
        tail = newNodePtr;
    }
}
    void print_list() {
        Node* tmpPtr = head;
        if(tmpPtr == nullptr)
            cout << "EMPTY" << endl;
        while(tmpPtr != nullptr) {
            cout << tmpPtr -> get_data() << " ";
            tmpPtr = tmpPtr -> get_next();
        }
        cout << endl;
    }
};

int main() {
    LinkedList A;
    
    while(true) {
        string operation,position;
        int value;
        
        cin >> operation;
        
        if(operation == "END")
            break;
        else if(operation == "INSERT")
            cin >> position;
        if(position == "HEAD") {
            cin >> value;
            A.insert_to_head(value);
        }
        else if(position == "TAIL"){
            cin >> value;
            A.insert_to_tail(value);
        }
        else if(operation == "PRINT") 
            A.print_list();
        else
            cout << "INVALID" << endl;
    }
    return 0;
}
