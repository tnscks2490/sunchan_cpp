#include <iostream>
#include <cmath>
using namespace std;

int main() {

	string N;

	while (true)
	{
		cin >> N;
		if (N == "#")
		{
			break;
		}
		int sum = 0;
		for (int i = 0; i < N.length(); i++)
		{
			switch (N[i]) {
			case '-':
			{
				sum += 0 * pow(8, (N.length() - (i + 1)));
				break;
			}
			case 92:
			{
				sum += 1 * pow(8, N.length() - (i + 1));
				break;
			}
			case '(':
			{
				sum += 2 * pow(8, N.length() - (i + 1));
				break;
			}
			case '@':
			{
				sum += 3 * pow(8, N.length() - (i + 1));
				break;
			}
			case '?':
			{
				sum += 4 * pow(8, N.length() - (i + 1));
				break;
			}
			case '>':
			{
				sum += 5 * pow(8, N.length() - (i + 1));
				break;
			}
			case '&':
			{
				sum += 6 * pow(8, N.length() - (i + 1));
				break;
			}
			case '%':
			{
				sum += 7 * pow(8, N.length() - (i + 1));
				break;
			}
			case '/':
			{
				sum += -1 * pow(8, N.length() - (i + 1));
				break;
			}
			default:
				break;
			}
		}
		cout << sum << endl;
	}

	return 0;
}