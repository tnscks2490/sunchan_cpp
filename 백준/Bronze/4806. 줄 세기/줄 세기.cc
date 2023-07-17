#include <iostream>
#include <string>

using namespace std;

int main() {
	string n;
	int count = 0;
	while (getline(cin, n))
	{
		count++;
	}
	cout << count;
	return 0;
}