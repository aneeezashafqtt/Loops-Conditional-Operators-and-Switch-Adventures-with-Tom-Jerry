#include <iostream>
using namespace std;
int main() {
	int num, start, end; 
	cout << "Enter num:";
		cin >> num;
		cout << "Enter start: ";
		cin >> start;
		cout << "Enter end: ";
		cin >> end;
		int a = start;
		while (a <= end) {
			cout << num << "*" << a << "=" << num * a << endl;
			a++;
		}




	return 0;
}