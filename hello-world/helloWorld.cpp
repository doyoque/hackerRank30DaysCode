#include <cmath>
#include <cstdio>
#include <iostream>

using namespace std;

int main() {
	// declare a variable named 'input_string' to hold our input
	string input_string;
	
	// read a full line of input from stdin (cin) and save it to our variable, input_string
	getline(cin, input_string);
	cin >> input_string;

	// print a string literal saying "hello, World." to stdout using cout.
	cout << "Hello, World." << endl;
	
	// TODO: write a line of code here that prints the contents of input_string to stdout.
	cout << input_string;

	return 0;
}
