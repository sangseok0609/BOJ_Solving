#include <iostream>
using namespace std;

int n;
int cnt5 = 0, cnt3 = 0;

int main() {
	cin >> n;
	int copy = n;
	//최대한 크게 묶기
	while (copy - 5 >= 0) {
		copy -= 5;
		cnt5++;
	}
	while (copy - 3 >= 0) {
		copy -= 3;
		cnt3++;
	}

	//5짜리를 하나씩 풀면서 3짜리로 다시 묶어줌
	while (cnt5 > 0) {
		if (copy == 0) break;
		cnt5--;
		copy += 5;
		while (copy - 3 >= 0) {
			copy -= 3;
			cnt3++;
		}
	}
	if (copy == 0)
		cout << cnt3 + cnt5;
	else
		cout << -1;
}