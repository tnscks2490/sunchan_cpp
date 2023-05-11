#include <iostream>

using namespace std;

int main() {

	int n;
	cin >> n;
	string Before;
	string After;
	cin >> Before;
	cin >> After;
	bool toggle = true;
	for (int i = 0; i < Before.length(); i++)
	{
		if (n % 2 == 0)
		{
			if (Before[i] != After[i])
			{
				toggle = false;
				break;
			}
		}
		else
		{
			if (Before[i] == After[i])
			{
				toggle = false;
				break;
			}
		}
	}
	if (toggle == true)
	{
		cout << "Deletion succeeded" << endl;
	}
	else
	{
		cout << "Deletion failed" << endl;
	}
	return 0;
}