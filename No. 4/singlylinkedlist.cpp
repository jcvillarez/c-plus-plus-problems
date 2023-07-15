#include "singlylinkedlist.h"


template<typename Object>
SinglyLinkedList<Object>::SinglyLinkedList() : head(nullptr), tail(nullptr), count (0) {}

template <typename Object>
int SinglyLinkedList<Object>::size() const {
            return count;
        }
template <typename Object>
bool SinglyLinkedList<Object>::empty() const {
            return size() == 0;
        }
template <typename Object>
Object SinglyLinkedList<Object>::front() const {
            return head->get_data();
        }
template <typename Object>
Object SinglyLinkedList<Object>::back() const {
            return tail->get_data();
        }
template <typename Object>
Node<Object>* SinglyLinkedList<Object>::begin() const {
            return head;
        }
template <typename Object>
Node<Object>* SinglyLinkedList<Object>::end() const {
            return nullptr;
        }
template <typename Object>
void SinglyLinkedList<Object>::push_front( const Object & x ){
            Node <Object>* ptr = new Node<Object> (x);
            if (size() == 0){
                head = tail = ptr;
            } else {
                ptr->set_next(head);
                head = ptr;
            }
            count++;
        }
template <typename Object>
void SinglyLinkedList<Object>::push_back( const Object & x){
            Node <Object>* ptr = new Node<Object> (x);
            if (size() == 0){
                head = tail = ptr;
            } else {
                tail->set_next(ptr);
                tail = ptr;
            }
            count++;
        }
template <typename Object>
Object SinglyLinkedList<Object>::pop_front() {
            if (empty())
                throw underflow_error("Error: Can't delete from an empty list!");

            Node <Object>* ptr = head;
            head = head->get_next();
            return ptr->get_data();
            count--;
        }
        
template <typename Object>
Object SinglyLinkedList<Object>::pop_back(){
            if (empty())
                throw underflow_error("Error: Can't delete from an empty list!");

            Node<Object> *pointer = head;
            while(pointer->get_next() != tail)
            {
                pointer = pointer->get_next();
            }
            
            delete tail;
            tail = pointer;
            pointer -> set_next(NULL);
  
        }
