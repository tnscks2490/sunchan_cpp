#include <iostream>
#include <algorithm>

using namespace std;
int main() {
	
	string input;
	cin >> input;
	string X = "CAMBRIDGE";
	for (int i = 0; i < input.length(); i++)
	{
		for (int j = 0; j < X.length(); j++)
		{
			if (input[i] == X[j])
			{
				input.erase(find(input.begin(), input.end(), X[j]));
				i--;
			}
		}
	}
	cout << input << endl;
	return 0;
}