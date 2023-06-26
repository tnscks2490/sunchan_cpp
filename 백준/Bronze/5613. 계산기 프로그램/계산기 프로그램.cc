#include <iostream>

using namespace std;

int main() {

	int num;
	char pm;
	int sum;
	cin >> sum;
	while (true)
	{
		
		cin >> pm;
		if (pm == '=')
		{
			cout << sum << endl;
			break;
		}
		else if (pm == '+')
		{
			cin >> num;
			sum = sum + num;
		}
		else if (pm == '-')
		{
			cin >> num;
			sum = sum - num;
		}
		else if (pm == '*')
		{
			cin >> num;
			sum = sum * num;
		}
		else if (pm == '/')
		{
			cin >> num;
			sum = sum / num;
		}
	}


	return 0;
}