// C++ program to demonstrate isalpha()
#include <cctype>
#include <iostream>
using namespace std;

// Driver Code
int main() {
	
	// initializing character array
	char ch[5] = "g1";

	// checking for isalpha() function
	for (int i = 0; i < 2; i++) {
		
		if (isalpha(ch[i])) {
			cout << ch[i] << " is alphabet" << endl;
		} else {
			cout << ch[i] << " is not alphabet" << endl;
		}
	
	}
	return 0;

} // End driver
