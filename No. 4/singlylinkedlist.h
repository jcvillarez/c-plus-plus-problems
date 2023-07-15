/* node.h : This header file contains the definition
 *          of the class SinglyLinkedList.
 * 
 *          Your task is refactor this source code
 *          by separating the implementation from the
 *          class interface.
 *            
 * (c) Glenn G. Fabia 2019
 */ 

#include <stdexcept>
using std::underflow_error;
#include "node.h"

#ifndef SINGLYLINKEDLIST_H
#define SINGLYLINKEDLIST_H

template <typename Object>
class SinglyLinkedList {
    private:
        Node <Object>* head; 
        Node <Object>* tail;
        int count;
    public:
        /* SinglyLinkedList() is the class constructor.
         * It initializes the value of the private data
         * members when an object is created.
         */
        SinglyLinkedList();
        
        /* size() returns the total number of elements
         * currently contained in the list
         */
        int size() const;

        /* empty() returns true if the list is empty
         * (ie, size == 0), or false otherwise.
         */
        bool empty() const;

        /* front() returns the data value of the first element
         * of the list 
         */
        Object front() const;

        /* front() returns the data value of the last element
         * of the list 
         */
        Object back() const;

        /* begin() returns a reference to the first 
         * element of the list
         */
        Node<Object>* begin() const;

        /* end() returns a null pointer which marks the end 
         * of the list
         */
        Node<Object>* end() const;

        /* push_front() inserts the element x in front of the list
         */
        void push_front(const Object &);

        /* push_front() inserts the element x at the
         * back of the list
         */
        void push_back( const Object &);

        /* pop_front() removes the first element of the list
         * and returns its data value 
         */
        Object pop_front();

        /* pop_back() removes the last element of the list
         * and returns its data value.
         * +-------+
         * | Note! | You have to implement this on your own!
         * +-------+ 
         */
        Object pop_back(); 
};

#endif