#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int N;
	cin >> N;
	cin.ignore(4096, '\n');
	for (int i = 0; i < N; i++)
	{
		vector <string> s;
		string tmp,t;
		getline(cin, tmp);
		tmp += " ";
		for (int j = 0; j < tmp.length(); j++)
		{
			if (tmp[j] != ' ')
			{
				t += tmp[j];
			}
			else
			{
				s.push_back(t);
				t = "";
			}
		}
		for (int k = 0; k < s.size(); k++)
		{
			reverse(s[k].begin(), s[k].end());
			cout << s[k] << " ";
		}
		cout << "\n";
	}
	return 0;
}