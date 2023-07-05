#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

	vector<int> V;

	bool GB = true;
	string N;
	string tmp;
	getline(cin, N);
	N += "E";
	for (int i = 0; i < N.length(); i++)
	{
		if (N[i] == ' ' or N[i] == 'E')
		{
			V.push_back(stoi(tmp));
			tmp = "";
		}
		else
		{
			tmp += N[i];
		}
	}
	
	if (V.size() != 1)
	{
		int a = V[0];
		for (int i = 1; i < V.size(); i++)
		{
			if (V[i] < a)
			{
				GB = false;
			}
			a = V[i];
		}
	}
	

	if (GB)
	{
		cout << "Good";
	}
	else
	{
		cout << "Bad";
	}
	return 0;
}