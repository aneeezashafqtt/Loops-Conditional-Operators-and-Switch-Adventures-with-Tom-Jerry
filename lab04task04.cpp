#include <iostream>
using namespace std;
int main() {
	int a, b;
	int lcm, hcf;
	int x, y;
	cout << "enter two numbers: ";
	cin >> a >> b;
	x = a;
	y = b;
	while (b != 0) {
		int temp = b; 
		b = a % b;
		a = temp;
	}
	hcf = a; 
	lcm = (x * y / hcf);
		cout << "hcf is: "<< hcf << endl; 
		cout << "lcm is: " << lcm << endl; 


	return 0;

}