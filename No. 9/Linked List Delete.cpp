/*--------------------------------------------------------------*
 * Filename        : villarez_listdelete.cpp                    *
 * Description     : Extend your linked-list implementation of  *
                     the integer list to support deletion of the*
                     first, last and kth element in the list.   *
 * Author          :  John Carlo R. Villarez                    *
 * Course and Year :  BSIT - 1                                  *
 * Last Modified   :  October 9,2019                            *
 * Honor Code      : This is my own code. I have worked hard in *
 *                   completing this work and I have not copied *
 *                   from any unauthorized resource.            *
 *                   I am also well aware of the policies       *
 *                   stipulated in the college student handbook *
 *                   regarding academic dishonesty.             *
 *--------------------------------------------------------------*/
#include<iostream>
using namespace std;
    string operation;

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
    LinkedList() : head(nullptr) , tail(nullptr) {}
    	int size = 0;
    void insert_to_head(int x) {
    if(head == nullptr) {
        Node* newNodePtr = new Node(x);
	    tail = newNodePtr;
        head = newNodePtr;
    } else {
        Node* newNodePtr = new Node(x);
        newNodePtr -> set_next(head);
        head = newNodePtr;
    }
    size++;
}
    void insert_to_tail(int x) {
        if(head == nullptr) {
        Node* newNodePtr = new Node(x);
	    head = newNodePtr;
        tail = newNodePtr;
    } else {
        Node* newNodePtr = new Node(x);
        tail -> set_next(newNodePtr);
	    tail = newNodePtr;
    }
    size++;
}
    int get_size(){
        return size;
    }
bool insertkth(int position, int value){
    Node* newNodePtr = new Node(value);
	if (position < 0) 
   		cout << "OUT OF BOUNDS" << endl; 
  	else { 
       	if (position == 0){
			insert_to_head(value);
			return true;
		}else if(position == get_size()- 1){
      		insert_to_tail(value);
  		    return true;
  		    }
    else if(position >= 1 && position < get_size() - 1){
        Node* tmpPtr = head;
	    int counter = 1;
	    while(counter < position){
	        tmpPtr = tmpPtr->get_next();
	        counter++;
	        }
       	    newNodePtr->set_next(tmpPtr->get_next());
       	    tmpPtr->set_next(newNodePtr);
		    return true;
		}
       	else{
       	    return false;
	    }
    }
}
void delete_from_head(){
    if(get_size() == 1){
        Node* newNodePtrH = head;
        head = NULL;
        delete newNodePtrH;
    }
    else{
        Node* newNodePtrH = head;
        head = head->get_next();
        delete newNodePtrH;
    }
}
void delete_from_tail(){
   if(get_size() == 1){
        Node* newNodePtrH = head;
        head = NULL;
        delete newNodePtrH;
    }else{
        Node* newNodePtrH = head;
        Node* newNodePtrT = tail;
        
        for(int i = 1; i < get_size()- 1; i++){
            newNodePtrH = newNodePtrH->get_next();
        }
        newNodePtrH -> set_next(NULL);
        tail = newNodePtrH;
        delete newNodePtrT;
    }
}

void print_list() {
    Node* tmpPtr = head;
    
    if(tmpPtr == nullptr)
        cout << "EMPTY";
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
        string position;
        int value;
        
        cin >> operation;
        
        if(operation == "END")
            break;
        else if(operation == "INSERT") {
            cin >> position;
        if(position == "HEAD") {
            cin >> value;
            A.insert_to_head(value);
        }
        else if(position == "TAIL"){
            cin >> value;
            A.insert_to_tail(value);
        }
        else if(isdigit(position[0])){
			cin >> value;
			int a = stoi(position);
			A.insertkth(a, value);
        }else if(position[0] == '.'){
            cout << "OUT OF BOUNDS" << endl;
        }
        else{
            cout << "INVALID" << endl;
        }
    }
        else if(operation == "DELETE"){
            cin >> position;
            if(position == "HEAD"){
                A.delete_from_head();
            }
            else if(position == "TAIL"){
                A.delete_from_tail();
            } else{
                cout << "INVALID" << endl;
            }
        }
        else if(operation == "PRINT")
            A.print_list();
        else
            cout << "INVALID" << endl;
     }
    return 0;
}
