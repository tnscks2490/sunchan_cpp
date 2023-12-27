#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

	int N, K;
	cin >> N >> K;
	vector <char> v;
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		v.push_back(s[i]);
	}
	int count = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] == 'P')
		{
			if (i >= K and i+K <=v.size()-1)
			{
				for (int j = i - K; j <= i + K; j++)
				{
					if (v[j] == 'H')
					{
						v[j] = 'N';
						count++;
						break;
					}
				}
			}
			else if (i < K)
			{
				for (int j = 0; j <= i + K; j++)
				{
					if (v[j] == 'H')
					{
						v[j] = 'N';
						count++;
						break;
					}
				}
			}
			else if (i + K > v.size() - 1)
			{
				for (int j = i - K; j < v.size(); j++)
				{
					if (v[j] == 'H')
					{
						v[j] = 'N';
						count++;
						break;
					}
				}
			}
		}
	}
	cout << count << endl;
	return 0;
}