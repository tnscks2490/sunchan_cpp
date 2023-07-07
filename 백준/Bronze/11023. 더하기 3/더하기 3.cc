#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

	vector<int> V;

	string N;
	string tmp;
	getline(cin, N);
	int sum = 0;
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
	for (int i = 0; i < V.size(); i++)
	{
		sum += V[i];
	}
	cout << sum << endl;
	return 0;
}