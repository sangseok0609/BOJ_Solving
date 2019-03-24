#include <iostream>
using namespace std;

int main() {
	int num, arr[10] = { 0 };
	cin >> num;
	//considering case num == 0
	do{
		arr[num % 10]++;
		num /= 10;
	} while (num != 0);
	int max = -1, num69 = 0;
	for (int i = 0; i < 10; i++) {
		if (i == 6 || i == 9) {
			num69 += arr[i];
		}
		else {
			if (arr[i] > max)
				max = arr[i];
		}
	}
	if ((num69 + 1) / 2 > max)
		cout << (num69 + 1) / 2;
	else
		cout << max;
	return 0;
}