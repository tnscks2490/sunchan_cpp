#include <iostream>
#include <string>
using namespace std;

int main() {

	int TC;
	cin >> TC;
	for (int i = 0; i < TC; i++)
	{
		int arr[26] = { 0, };
		string s;
		cin >> s;
		int sum = 0;
		for (int j = 0; j < s.length(); j++)
		{
			arr[s[j]-65]++;
		}
		for (int k = 0; k < 26; k++)
		{
			if (arr[k] == 0)
			{
				sum += k + 65;
			}
		}
		cout << sum <<endl;
	}
	return 0;
}