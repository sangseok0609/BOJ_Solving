#include <iostream>
using namespace std;

int n;
int cnt5 = 0, cnt3 = 0;

int main() {
	cin >> n;
	int copy = n;
	//�ִ��� ũ�� ����
	while (copy - 5 >= 0) {
		copy -= 5;
		cnt5++;
	}
	while (copy - 3 >= 0) {
		copy -= 3;
		cnt3++;
	}

	//5¥���� �ϳ��� Ǯ�鼭 3¥���� �ٽ� ������
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