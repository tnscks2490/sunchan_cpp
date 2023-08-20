#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string s,c;
	cin >> s;
	int N;
	int sum = 0;
	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		cin >> c;
		c += c;
		if (c.find(s) != string::npos)
		{
			sum++;
		}
	}
	cout << sum << endl;
	return 0;
}