#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	int a, b, c, num, arr[10] = { 0 };
	cin >> a >> b >> c;
	num = a*b*c;
	while (num != 0) {
		arr[num % 10]++;
		num /= 10;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << '\n';
	}

	return 0;
}