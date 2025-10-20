#include <iostream>
using namespace std;
int main()
{
	int n; 
	cout << "How many terms : ";
	cin >> n;
		int a = 0;
		int b = 1, next;
		for (int i=1;
			i<=n;
			i++) {
			cout << a << "";
			next = a + b;
			a = b;
			b = next;
		}
		return 0;

}