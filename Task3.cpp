#include<iostream>
using namespace std;
int main() {

	//task3
	int number1;
	cout << "Enter number : " << endl;
	cin >> number1;
	if (number1 > 0) {
		cout << "Positive Number" << endl;
	}
	else if (number1 < 0) {
		cout << "Negative Number" << endl;
	}
	else {
		cout << "Zero" << endl;
	}
}