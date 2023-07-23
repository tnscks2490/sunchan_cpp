#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	vector <string> v;
	string s,tmp;
	cin >> s;
	s += '.';
	int* arr = new int[50]{ 0, };
	int index = 0;
	bool trigger = true;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != '.')
		{
			tmp += s[i];
		}
		else
		{
			if (tmp.length() % 2 == 1)
			{
				trigger = false;
				break;
			}

			if (tmp.length() > 0)
			{
				v.push_back(tmp);
				tmp = "";
			}
			tmp += s[i];
			v.push_back(tmp);
			tmp = "";
			
		}
		
	}
	
	if (trigger)
	{
		for (int i = 0; i < v.size(); i++)
		{
			string test = "";
			if (v[i].size() % 4 == 0 and v[i] !=".")
			{
				for (int j = 0; j < v[i].size() / 4; j++)
				{
					test += "AAAA";
				}
				v[i] = test;
			}
			else if( v[i].size() %4 != 0 and v[i] !=".")
			{
				for (int j = 0; j < v[i].size() / 4; j++)
				{
					test += "AAAA";
				}
				v[i] = test;
				v[i] += "BB";
			}
		}
		v[v.size() - 1].pop_back();
		for (int i = 0; i < v.size(); i++)
		{
			cout << v[i];
		}
	}
	else
	{
		cout << -1 << endl;
	}
	
	return 0;
}