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
# Last Modified: July 23, 2019						  #
#									  #
# Honor Code								  #
#This is my own code. I have worked hard in completing	 		  #
#this work and I have not copied from any unauthorized # 		  #
#resource. I am also well aware of the policies				  #
#stipulated in the college student handbook regarding 			  #
#academic dishonesty.							  #
#-------------------------------------------------------------------------#
*/
#include<iostream>
using namespace std;
int split_and_sum(int n) {
	int sum = 0;
	
	while(n != 0) {
	    	sum += (n % 10);
		n /= 10;
	}
	return sum;
}
int main() {
	
	int T,n;
	
	int counter = 1;
	
	cin >> T;
	
	while(T--) {
		
		cin >> n;

		cout << "CASE " << counter << ": " << split_and_sum(n) << endl;
		counter++;
	
	}
	return 0;
}
