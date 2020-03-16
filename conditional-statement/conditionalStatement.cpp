#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	cin >> N;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	if(N % 2 == 0) {
		if (N >= 2 && N <= 5) {
			/** if N is even and in the inclusive range of 2 to 5 print `not weird` */
			cout << "Not Weird";
		} else if (N >= 6 && N <= 20) {
			/** if N is even and in the inclusive range of 6 to 20 print `weird` */
			cout << "Weird";
		} else {
			/** if N is even and greater than 20 print `not weird` */
			cout << "Not Weird";
		}
	} else {
		/** if N is odd print `weird` */
		cout << "Weird";
	}

	return 0;
}
