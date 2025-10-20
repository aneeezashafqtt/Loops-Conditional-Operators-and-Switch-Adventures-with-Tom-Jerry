#include <iostream>
using namespace std;

int main() {
	int typeoftrap;
	char bt;
	int szn= 1;

	while (szn <= 3) {
		cout << "Scenario #" << szn << endl;

		
		cout << "Enter trap type (1-3 only): ";
		cin >> typeoftrap;
		cout << "Enter bait type (C for Cheese, P for Peanut, W for Watermelon): ";
		cin >> bt;

		
		switch (typeoftrap) {
		case 1: 
			cout << "Tom is setting up a standard trap." << endl;
			break;

		case 2: 
			cout << "Tom is preparing a hidden trap." << endl;
			
			switch (bt) {
			case 'C':
				cout << "Tom is hiding a trap under delicious cheese! Jerry won't see it coming." << endl;
				break;
			case 'P':
				cout << "Tom is hiding a trap under a rare peanut! A very specificbait." << endl;
				break;
			default:
				cout << "The hidden trap is a mystery." << endl;
				break;
			}
			break;

		case 3: 
			cout << "Tom is preparing an advanced trap." << endl;
			
			switch (bt) {
			case 'C':
				cout << "Tom is using a spring-loaded trap with cheese. The trap's ready!" << endl;
				break;
			case 'P':
				cout << "Tom is using a sticky trap with a peanut. Jerry's movements will be slowed!" << endl;
				break;
			case 'W':
				cout << "Tom is using a water trap with a slice of watermelon. This trap needs a lot of water!" << endl;
				break;
			default:
				cout << "Tom's advanced trap is a complete surprise." << endl;
				break;
			}
			break;

		default: 
			cout << "Tom's plan failed! Trap type is invalid." << endl;
			break;
		}

		cout << "---------------------------" << endl;
		szn++;
	}

	cout << "All scenarios completed. Tom hopes to catch Jerry!" << endl;

	return 0;
}