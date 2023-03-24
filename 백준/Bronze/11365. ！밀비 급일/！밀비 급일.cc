#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string code;
	int count = 0;
	while (true)
	{
		getline(cin, code);
		if (code == "END")
		{
			break;
		}
		else
		{
			reverse(code.begin(), code.end());
			cout << code;
			count++;
		}
		cout << endl;
	}
	return 0;
}