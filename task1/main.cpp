#include "logic.h"

int main() {
	int days;
	int likes_per_day;

	
	cout << "Input amount of days." << endl;
	cin >> days;

	if (days < 0) {
		system("cls");
		cout << "Error: Days cannot be negative!" << endl;
		return 1;
	}

	system("cls");

	cout << "Good!Now input amount of likes per day!" << endl;
	cin >> likes_per_day;

	if (likes_per_day < 0) {
		system("cls");
		cout << "Error: Likes per day cannot be negative!" << endl;
		return 1;
	}

	system("cls");

	int result =  get_likes(days,likes_per_day);

	cout << result << " likes you got in " << days << " days!" << endl;

	system("pause");

	return 0;
}