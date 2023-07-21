#include <iostream>
#include <string>
using namespace std;

int main() {

	int N;
	cin >> N;
	string s;
	for (int i = 1; i <= N; i++)
	{
		cin >> s;
		cout << "String #" << i << "\n";
		for (int j = 0; j < s.length(); j++)
		{
			if (s[j] + 1 == 91)
			{
				cout << "A";
			}
			else {
				cout << char(s[j] + 1);
			}
			
		}
		cout << "\n\n";
	}
	return 0;
}