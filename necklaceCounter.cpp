#include <cstring>
#include <iostream>
#include <stdexcept>
using namespace std;



string Move2Back(string a) { // moves first char to end of string
	int size = a.size();
	char c = a[0];
	for (int i = 0; i < size; i++) {
		a[i] = a[i + 1];
	}
	a[size - 1] = c;
	return a;
}

bool isSame(string a, string b) { // checks is strings are equal by calling isSame recursively
	bool same;
	int alength = a.size();
	int blength = b.size();
	if (alength != blength) {
		return same = false;
	}
	else {
		for (int i = 0; i < alength; i++) {
			if (a != b) {
				b = Move2Back(b);
			}
			else {
				return same = true;
			}
			same = false;
		}
	}

}


int main() {  // main function for testing
	string a = "anthony";
	string b = "thonyan";
	bool same = isSame(a, b);
	cout << boolalpha << same; //returns 1 if true 0 if false WITHOUT boolalpha, returns True or False WITH boolalpha
}