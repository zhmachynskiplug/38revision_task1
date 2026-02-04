#include "logic.h"

int main() {
	int number;

	cout << "Please , enter your number : " << endl;
	cin >> number;

	system("cls");


	string result = is_power_too(number) == 1 ? "is" : "is not";

	cout << "Your number  " << result << " power of two!" << endl;

	if (is_power_too(number) == 1) {
		cout << "Great Job! \n Programm works correctly!!!!!!!  \n" ;
	}
	system("pause");

	return 0;
}