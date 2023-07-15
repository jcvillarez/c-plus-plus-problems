/*
#-------------------------------------------------------------------------#
# Filename: villarez_triangles.cpp					  #
#									  #
# Description: PROGRAMMING QUIZ						  #
#									  #
# Author: John Carlo R. Villarez					  #
#									  #
# Course and Year : 1 - BS IT						  #
#									  #
# Last Modified: July 22, 2019						  #
#									  #
# Honor Code								  #
: This is my own code. I have worked hard in completing 		  #
this work and I have not copied from any unauthorized # 		  #
resource. I am also well aware of the policies				  #
stipulated in the college student handbook regarding 			  #
academic dishonesty.							  #
#-------------------------------------------------------------------------#
*/
#include<iostream>
using namespace std;
int main() {
	
	int T,k;
	string s;
	int counter = 0;
	cin >> T;
	
	while(T--) {
		cin >> k >> s;
	
	counter++;
	cout << "CASE " << counter << ":" << endl;

	for(int i = 1; i < k+1; i++) {			// This referrence help me solve the pyramid 
		for(int j = 1; j  <= k-i; j++) {	// https://www.programiz.com/cpp-programming/examples/pyramid-pattern
			cout << " ";
	}
	int x = 0;
	while(x != 2*i - 1) {
		cout << s;
		x++;
		}
		cout << endl;
    	    }
	
      	}
	
	return 0;
}
