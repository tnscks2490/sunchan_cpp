#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

	int T;
	cin >> T;
	string n, a;
	for (int i = 0; i < T; i++)
	{
		
		cin >> n;
		if (n == "P=NP")
		{
			cout << "skipped" << "\n";
		}
		else
		{
			n += '+';
			int sum = 0;
			for (int j = 0; j < n.length(); j++)
			{
				if (n[j] == '+')
				{
					sum += stoi(a);
					a = "";
					
				}
				else
				{
					a += n[j];
				}
			}
			cout << sum << "\n";
		}
	}
	return 0;
}