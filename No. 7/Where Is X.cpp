/*--------------------------------------------------------------*
 * Filename        : villarez_le2.cpp                           *
 * Description     : Problem A: Where is X?                     *
 * Author          : John Carlo R. Villarez                     *
 * Course and Year : 1 - BS IT                                  *
 * Last Modified   : August 5, 2019                             *
 * Honor Code      : This is my own code. I have worked hard in *
 *                   completing this work and I have not copied *
 *                   from any unauthorized resource.            *
 *                   I am also well aware of the policies       *
 *                   stipulated in the college student handbook *
 *                   regarding academic dishonesty.             *
 *--------------------------------------------------------------*/
#include<iostream>
using namespace std;
int search(int A[],int x, int i, int n){
	int index = -1; // not found!.
	for(int i = 0; i < n; i++) {
		if(n >= 2) {
			A[i] == x;
			index = i; // found the value of x.
			break;
		}
		else
			cout << "NOT FOUND" << endl;
	}
	return index;
}
int main(){
	int n,x,i,counter,T;
 	counter = 1;
 	cin >> T;
 		while(T--) {
 			for(int i = 0; i < n; i++) {
 				cin>> n; // input of the elements.
 				
 			}
 			int A[n];
 			cout << "CASE " << counter << ": " << search(A,x,i,n) << endl;
 		}
 	return 0;
}
