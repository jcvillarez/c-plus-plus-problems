/* main.cpp : This is the driver program to test
 *            the implementation of classes Node and 
 *            SinglyLinkedList.
 * 
 * (c) Glenn G. Fabia 2019
 */ 

#include <iostream>
using namespace std;
#include "node.h"
#include "node.cpp"
#include "singlylinkedlist.h"
#include "singlylinkedlist.cpp"

int main(){

    /* Declared below is a Node object 
     * which can contain integer data
     */
    Node <int> n;
    n.set_data(1);
    cout << n.get_data() << endl;

    /* Declared below is a Node object 
     * which can contain strings
     */
    Node <string> s;
    s.set_data("hello");
    cout << s.get_data() << endl;
    
    /* Declared below is the SinglyLinkedList object "grades"
     * which can only contain as element Node objects with 
     * integer data.
     */
    SinglyLinkedList <int> grades;
    grades.push_back(94);
    grades.push_front(81);
    cout << grades.front() << endl;
    cout << grades.back() << endl;
    int x = grades.pop_front();
    cout << x << endl;
    grades.push_front(93);
    grades.push_front(92);   

    Node<int>* grade_ptr = grades.begin();
    while(grade_ptr != grades.end()){
        int value = grade_ptr->get_data();
        cout << value << " ";
        grade_ptr = grade_ptr->get_next();
    }
    cout << endl;

    /* Declared below is the SinglyLinkedList object "phrase"
     * which can only contain as element Node objects with 
     * string data.
     */
    SinglyLinkedList <string> phrase;
    phrase.push_back("all");   
    phrase.push_back("things");   
    phrase.push_back("bright");   
    phrase.push_back("and");
    phrase.push_back("beautiful");

    Node<string>* word_ptr = phrase.begin();
    while(word_ptr != phrase.end()){
        string word = word_ptr->get_data();
        cout << word << " ";
        word_ptr = word_ptr->get_next();
    }
    cout << endl;

    return 0;
}
