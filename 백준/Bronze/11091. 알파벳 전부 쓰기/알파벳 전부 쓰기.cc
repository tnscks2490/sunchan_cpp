#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

	int N;
	cin >> N;
	cin.ignore();
	string input;
	
	for (int i = 0; i < N; i++)
	{
		int arr[26] = { 0, };
		getline(cin, input);
		for (int j = 0; j < input.length(); j++)
		{
			input[j] = tolower(input[j]);
			if (input[j] >= 97 and input[j] <= 122)
			{
				arr[input[j] - 97]++;
			}
		}
		int alpha0 = *min_element(arr, arr + 26);
		if (alpha0 > 0)
		{
			cout << "pangram" << endl;
		}
		else if (alpha0 == 0)
		{
			cout << "missing ";
			for (int k = 0; k < 26; k++)
			{
				if (arr[k] == 0)
				{
					cout << char(k + 97);
				}
			}
			cout << "\n";
		}
	}
	return 0;
}