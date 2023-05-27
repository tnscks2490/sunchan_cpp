#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	if (N == 1)
	{
		string a;
		cin >> a;
		cout << a << endl;
	}
	else
	{
		string t;
		cin >> t;
		for (int i = 1; i < N; i++)
		{
			string a;
			cin >> a;
			for (int j = 0; j < a.length(); j++)
			{
				if (t[j] != a[j])
				{
					t[j] = '?';
				}
				else
				{
					t[j] == a[j];
				}
			}
		}
		cout << t << endl;
	}
	
	
	return 0;
}