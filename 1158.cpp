#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, m, pos = 0;
	vector<int> vec;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		vec.push_back(i + 1);
	cout << '<';
	while(!vec.empty()){
		pos = (pos + m - 1) % vec.size();
		if (vec.size() > 1)
			cout << vec[pos] << ", ";
		else
			cout << vec[pos] << '>';
		vec.erase(vec.begin() + pos);
	}
	
	return 0;
}