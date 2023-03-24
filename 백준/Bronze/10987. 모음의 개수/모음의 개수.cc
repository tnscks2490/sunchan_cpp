#include <iostream>
#include <string>
using namespace std;

int main() {

	char arr[5] = { 'a','e','i','o','u' };
	string s;
	cin >> s;
	int count = 0;
	for (int i = 0; i < s.length(); i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (s[i] == arr[j])
				count++;
		}
	}
	cout << count << endl;
	return 0;
}