/*--------------------------------------------------------------*
 * Filename        :villarez_le5.cpp                            *
 * Description     : write a simple command-line calculator that* 
 *                   accepts a mathematical expression in infix *
 *                   notation, evaluates the latter and displays*
 *                   the result.                                *
 * Author          : John Carlo R. Villarez                     *
 * Course and Year : 1- BS IT                                   *
 * Last Modified   : October 23, 2019                           *
 * Honor Code      : This is my own code. I have worked hard in *
 *                   completing this work and I have not copied *
 *                   from any unauthorized resource.            *
 *                   I am also well aware of the policies       *
 *                   stipulated in the college student handbook *
 *                   regarding academic dishonesty.             *
 *--------------------------------------------------------------*/
#include<iostream>
#include <stack>
#include <cctype>

using namespace std;

int evaluate_postfix(string line){
    stack<int> s;
    
    for(auto c : line){
        if(isspace(c))
            continue;
        else if(isdigit(c))
            s.push(c - 0x30);
        else {
            int b = s.top();
            s.pop();
            int a = s.top();
            s.pop();
            
            int t;

            switch(c){
                case '+' :
                    t = a + b;
                    break;
                case '-' :
                    t = a - b;
                    break;
                case '*' :
                    t = a * b;
                    break;
                case '/' :
                    t = a / b;
                    break;
            }
            s.push(t);
            
        }
    }
    return s.top();
}
int precedence(char operation) {
    if(operation == '^')
        return 3;
    else if(operation == '*' || operation == '/')
        return 2;
    else if(operation == '+' || operation  == '-')
        return 1;
    else
        return -1;
}
string infix2postfix(string line){
    stack<char> S;
    string a;

    S.push('#');

    for(auto c : line){
        if(isspace(c))
            continue;
        else if(isdigit(c))
            a += + c;
        else if(c == '('){
            S.push(c);
        }
        else if(c == ')'){
            while(S.top() != '('){
                a += S.top();
                S.pop();
            }
            
            S.pop();
        }
        else{
            if(S.top() == '('){
                S.push(c);
            }
            else if(precedence(S.top()) > precedence(c)){
                while(precedence(S.top()) > precedence(c) && S.top() != '#'){
                    a += S.top();
                    S.pop();
                    S.push(c);
                }
            }
            else{
                S.push(c);
            }
        }
    }

    while(S.top() != '#'){
            a +=  S.top();
            S.pop();
    }
    
    return a;
}
int evaluate_infix(string line){
    string a = infix2postfix(line);
    return evaluate_postfix(a);
}
int main(){
    
    string a;

    while(getline(cin,a)){
        cout << "Infix of this is: " << evaluate_infix(a) << endl;
    }

    return 0;
}
