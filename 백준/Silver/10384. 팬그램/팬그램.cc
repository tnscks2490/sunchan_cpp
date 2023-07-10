#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

	string input;
	int N;
	cin >> N;
	cin.ignore();
	for (int i = 0; i < N; i++)
	{
		int alpha[26] = { 0, };
		getline(cin, input,'\n');
		for (int j = 0; j < input.length(); j++)
		{
			input[j] = tolower(input[j]);
			if (input[j] >= 97 and input[j] <= 122)
			{
				alpha[input[j] - 97]++;
			}
		}
		int minnum = *min_element(alpha, alpha + 26);

		switch (minnum)
		{
		case 0:
			cout << "Case " << i + 1 << ": Not a pangram" << endl;
			break;
		case 1:
			cout << "Case " << i + 1 << ": Pangram!" << endl;
			break;
		case 2:
			cout << "Case " << i + 1 << ": Double pangram!!" << endl;
			break;
		case 3:
			cout << "Case " << i + 1 << ": Triple pangram!!!" << endl;
			break;
		default:
			break;
		}
	}
	return 0;
}