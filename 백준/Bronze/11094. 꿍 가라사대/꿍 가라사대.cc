#include <iostream>
#include <string>

using namespace std;

int main() {

	int N;
	cin >> N;
	string input;
	cin.ignore();
	for (int i = 0; i < N; i++)
	{
		getline(cin, input);
		if (input.find("Simon says") == 0)
		{
			cout << input.substr(10, input.length() - 1) << "\n";
		}
	}
	return 0;
}