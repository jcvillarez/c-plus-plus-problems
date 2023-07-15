/*--------------------------------------------------------------*
 * Filename        : villarez_karatsuba.cpp                     *
 * Description     : Karatsuba's Bit Vector Multiplication      *
 * Author          : John Carlo R. Villarez                     *
 * Course and Year : 1 - BS IT                                  *
 * Last Modified   : September 4, 2019                          *
 * Honor Code      : This is my own code. I have worked hard in *
 *                   completing this work and I have not copied *
 *                   from any unauthorized resource.            *
 *                   I am also well aware of the policies       *
 *                   stipulated in the college student handbook *
 *                   regarding academic dishonesty.             *
 *--------------------------------------------------------------*/
#include<iostream>
#include<vector>
using namespace std;
long multiply (vector<int> x, vector<int> y);
int main() {
	vector<int> x;
	vector<int> y;	
	int T; // number of test cases
	int counter = 1; // counter to output the number of cases has been inputted.
	int xs,ys; // the size of x and y.
	int in; // value of the vector.
	
	
	cin >> T;
	
	while(T--) {
		cin>>xs;
	
	int modulo = 1;
	for(int i = 1; i < xs; i++)
		modulo *= 10;
	
		cin >> in;
	while(xs--) {
		int number = in / modulo;
		in %= modulo;
		modulo /= 10;
		x.push_back(number);
		
	}
	cin >> ys;
	modulo = 1;
	for(int i = 1; i < ys; i++)
		modulo *= 10;
		
		cin >> in;
	while(ys--) {
		int number = in / modulo;
		in %= modulo;
		modulo /= 10;
		y.push_back(number);
		
	}
	cout << "CASE " << counter << ": " << multiply(x,y) << endl;
	counter++;
	x.clear();
	y.clear();
	
	}
	
	return 0;
}
long multiply (vector<int> x, vector<int> y){
	int n = x.size();
	int o = y.size();
	
	int p = max(n,o);
	
	if(p == 1) {
		return x[0] * y[0];
	}
	
	vector<int> a;
	vector<int> b;
	vector<int> c;
	vector<int> d;
	
	
	if(p % 2 == 1) {
		p++;
	}
	
	int m = p / 2;
	int q = 0;
	int r = 0;
	for(; q < p - x.size(); q++) 
		a.push_back(0);	
	
	for(; r < p - y.size(); r++) 
		c.push_back(0);
		
	int j = 0;
	int k = 0;
	
	for(; j < m - q; j++)
		a.push_back(x[j]);	
	for(; k < m - r; k++) 
		c.push_back(y[k]);
	for(; j < x.size(); j++)
		b.push_back(x[j]);
	for(; k < y.size(); k++)
		d.push_back(y[k]);
	//conquer
	long ac = multiply(a,c);
	long bd = multiply(b,d); 
	return (ac << p) + ((multiply(a,d) + multiply(b,c)) << (p/2)) + bd;
}
// Credits to the owner.
