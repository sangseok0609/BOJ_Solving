#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
	string init;
	cin >> init;
	list <char> l;
	for (auto a : init)
		l.push_back(a);
	int n;
	cin >> n;
	auto cursor = l.end();
	string rBuffer;

	//removing buffer
	getline(cin, rBuffer);

	for (int i = 0; i < n; i++) {
		string command;
		//you can input data including charactor ' ' with getline(cin, string) function
		getline(cin, command);
		//string variable can be used as array of char variables
		if (command[0] == 'L') {
			if (cursor != l.begin()) {
				cursor--;
			}
		}
		else if (command[0] == 'D') {
			if (cursor != l.end()) {
				cursor++;
			}
		}
		else if (command[0] == 'B') {
			if (cursor != l.begin()) {
				cursor--;
				//if you don't write "cursor =", there gonna be an error message.
				cursor = l.erase(cursor);
			}
		}
		else {
			l.insert(cursor, command[2]);
		}
	}

	for (auto a : l)
		cout << a;

	return 0;
}