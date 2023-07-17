#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int t;
		string a, b, c;
		cin >> a;
		b = a;
		reverse(a.begin(), a.end());
		t = stoi(b) + stoi(a);
		c = to_string(t);
		reverse(c.begin(), c.end());
		if (t == stoi(c))
		{
			cout << "YES" << "\n";
		}
		else
		{
			cout << "NO" << "\n";
		}
	}
	return 0;
}