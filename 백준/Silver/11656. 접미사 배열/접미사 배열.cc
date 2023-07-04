#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector <string> v;
	string S;
	cin >> S;
	string tmp;
	for (int i = 0; i < S.length(); i++)
	{
		for (int j = i; j < S.length(); j++)
		{
			tmp = tmp + S[j];
		}
		v.push_back(tmp);
		tmp = "";
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < S.length(); i++)
	{
		cout << v[i] << endl;
	}
	return 0;
}