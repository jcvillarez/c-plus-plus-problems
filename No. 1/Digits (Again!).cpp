/*--------------------------------------------------------------*
 * Filename        : villarez_le1.cpp                           *
 * Description     : Problem A: Digits (Again!)                 *
 * Author          : John Carlo R. Villarez                     *
 * Course and Year : 1 - BS IT                                  *
 * Last Modified   : August 2, 2019                             *
 * Honor Code      : This is my own code. I have worked hard in *
 *                   completing this work and I have not copied *
 *                   from any unauthorized resource.            *
 *                   I am also well aware of the policies       *
 *                   stipulated in the college student handbook *
 *                   regarding academic dishonesty.             *
 *--------------------------------------------------------------*/
 #include<iostream>
 using namespace std;
 int split_and_sum(int n) {
 	int sum = 0;
 
 	while(n != 0) {
 		sum += (n % 10); // get the remainder and split the two digit number.
 		n /= 10; // divide the two-digit number.
 	}
  		return sum; // print the value of sum.
 		
}
int main() {
	
	int T,n;
	int counter = 1;				// Setting the number of cases for every answer.
	cin >> T; 						// Printing the number of test cases.
	while(T > 0) { 					// Condition for setting a test case/s.
		cin >> n;					// Inputting the values in  to be added.
		cout << "CASE " << counter << ": " << split_and_sum(n) << endl;
		counter++;		
	T--;							//Decrementing the value of T.
	}
	
	return 0;
}
