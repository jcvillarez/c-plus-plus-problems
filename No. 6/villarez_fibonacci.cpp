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
int fib(int n,int f,int s,int t,int a) {
	f = 0;
	s = 1;
	
	cin >> n;
	
	for(int a = 0; a < n; a++) {
		if(a == 1) 
		  t = a;
	else {	
		t = f + s;
		f = s;
		s = t;
	}
    }
	cout << s << endl;
	return 0;
}
int main() {
	
	int T,n,a,f,s,t;
	int counter = 1;

	cin >> T;
	
	while(T--) {
		cout << "CASE " << counter << ": ";
		counter++;
		fib(n,f,s,t,a);
	}
	
	return 0;
}

