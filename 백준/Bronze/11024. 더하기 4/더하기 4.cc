#include <iostream>
#include <string>
using namespace std;

int main() {

	int N;
	cin >> N;
	cin.ignore(4096, '\n');
	for (int i = 0; i < N; i++)
	{
		string input;
		getline(cin,input);
		int sum = 0;
		string tmp;
		input += "E";
		for (int i = 0; i < input.length(); i++)
		{
			if (input[i] == 'E' or input[i] == ' ')
			{
				sum += stoi(tmp);
				tmp = "";
			}
			else
			{
				tmp += input[i];
			}
		}
		cout << sum << endl;
		
	}
	return 0;
}