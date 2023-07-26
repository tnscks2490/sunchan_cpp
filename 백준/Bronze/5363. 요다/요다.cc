#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	cin.ignore();
	string s;
	for (int i = 0; i < n; i++)
	{
		vector <string> v;
		getline(cin, s);
		s += " ";
		string tmp;
		for (int j = 0; j < s.length(); j++)
		{
			if (s[j] == ' ')
			{
				v.push_back(tmp);
				tmp = "";
			}
			else
			{
				tmp += s[j];
			}
		}
		for (int k = 2; k < v.size(); k++)
		{
			cout << v[k] << " ";
		}
		cout << v[0] << " " << v[1] << "\n";
	}
	
	return 0;
}