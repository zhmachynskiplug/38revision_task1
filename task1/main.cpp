#include "logic.h"

int main() {
	int days;
	int likes_per_day;

	
	cout << "Input amount of days." << endl;
	cin >> days;

	system("cls");

	cout << "Good!Now input amount of likes per day!" << endl;
	cin >> likes_per_day;

	system("cls");

	int result = get_likes(days, likes_per_day);

	cout << result << " likes you got in " << days << " days!" << endl;

	return 0;
}