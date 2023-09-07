#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	int a;
	while (true)
	{
		cin >> a;
		if (a == 0)
		{
			break;
		}
		else
		{
			vector <int> v;
			int t;
			for (int i = 0; i < a; i++)
			{
				cin >> t;
				v.push_back(t);
			}
			v.erase(unique(v.begin(), v.end()), v.end());
			for (int i = 0; i < v.size(); i++)
			{
				cout << v[i] << " ";
			}
			cout << "$\n";
		}
	}
	return 0;
}