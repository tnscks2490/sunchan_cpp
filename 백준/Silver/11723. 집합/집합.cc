#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int number(string s);
vector<string> arr = { "add","remove","check","toggle","all","empty" };
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int T;
	cin >> T;
	vector <int> v;
	
	for (int i = 0; i < T; i++)
	{
		string s;
		int a;
		cin >> s;
		switch (number(s))
		{
		case 0:
		{
			cin >> a;
			if (find(v.begin(), v.end(), a) == v.end())
			{
				v.push_back(a);
			}
			break;
		}
		case 1:
		{
			cin >> a;
			if (find(v.begin(), v.end(), a) != v.end())
			{
				v.erase(v.begin() + (find(v.begin(), v.end(), a) - v.begin()));
			}
			break;
		}
		case 2:
		{
			cin >> a;
			if (find(v.begin(), v.end(), a) == v.end())
			{
				cout << 0 << "\n";
			}
			else if (find(v.begin(), v.end(), a) != v.end())
			{
				cout << 1 << "\n";
			}
			break;
		}
		case 3:
		{
			cin >> a;
			if (find(v.begin(), v.end(), a) != v.end())
			{
				v.erase(v.begin() + (find(v.begin(), v.end(), a) - v.begin()));
			}
			else if (find(v.begin(), v.end(), a) == v.end())
			{
				v.push_back(a);
			}
			break;
		}
		case 4:
		{
			vector<int> tmp;
			tmp.swap(v);
			for (int i = 1; i <= 20; i++)
			{
				v.push_back(i);
			}
			break;
		}
		case 5:
		{
			vector<int> tmp;
			tmp.swap(v);
			break;
		}
		default:
			break;
		}
	}

	return 0;
}

int number(string s)
{
	return (find(arr.begin(), arr.end(), s) - arr.begin());
}