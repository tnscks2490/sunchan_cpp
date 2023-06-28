#include <iostream>

using namespace std;

int main() {
	
	int V,A=0,B=0;
	cin >> V;
	string input;
	cin >> input;
	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] == 'A')
		{
			A++;
		}
		else if (input[i] == 'B')
		{
			B++;
		}
	}
	if (A > B)
	{
		cout << "A" << endl;
	}
	else if (A < B)
	{
		cout << "B" << endl;
	}
	else
	{
		cout << "Tie" << endl;
	}
	return 0;
} 