#include <iostream> 
using namespace std; 
int main() {
	int trap = 0;
	int trapno;
	while (trap < 5) {
		cout << "Setting trap number to: " << trap + 1 << " : ", trap++;
		cout << "Enter trap number (1-10 only): " << endl;
		cin >> trapno;
		string result = (trapno > 5) ? "dangerous trap!!" : " safe trap!!";
		cout << result << endl;
		
	}
	return 0;
}