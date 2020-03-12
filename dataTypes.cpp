#include <iostream>

using namespace std;

int main() {
	int i = 4;
	double d = 4.0;
	string s = "HackerRank ";

	//Declare second integer, double, and string variables.
	int j;
	double b;
	string n;

	//Read and save an integer, double, and string to your variables.
	string tmp;
	
	getline(cin, tmp);
	j = stoi(tmp);

	getline(cin, tmp);
	b = stod(tmp);

	getline(cin, n);

	//Note: if you have trouble reading the entire string, please go back and review the tutorial closely.
	//print the sum of both integer variables on a new line.
	printf("%i\n", i + j);

	//print the sum of the double variables on a new line.
	printf("%.1f\n", d + b);

	//concatenate and print the string variables on a new line
	cout << s + n << endl;

	//the 's' variable above should be printed first.
	
	return 0;	
}
