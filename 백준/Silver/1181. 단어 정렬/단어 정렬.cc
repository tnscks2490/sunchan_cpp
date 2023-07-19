#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N;
	cin >> N;
	string s;
	vector <string> S,C;
	int slength = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> s;
		if (s.length() > slength)
		{
			slength = s.length();
		}
		S.push_back(s);
	}
	sort(S.begin(), S.end());
	S.erase(unique(S.begin(), S.end()), S.end());
	for (int i = 1; i <= slength; i++)
	{
		for (int j = 0; j < S.size(); j++)
		{
			if (S[j].length() == i)
			{
				C.push_back(S[j]);
			}
		}
	}
	for (int i = 0; i < C.size(); i++)
	{
		cout << C[i] << endl;
	}
	return 0;
}