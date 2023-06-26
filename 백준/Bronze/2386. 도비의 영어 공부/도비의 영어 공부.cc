#include <iostream>
#include <string>
using namespace std;

int main() {
	
	char alpha;
	string en;
	int same;
	while (true)
	{
		same = 0;
		cin >> alpha;
		if (alpha == '#')
		{
			break;
		}
		getline(cin, en);
		for (int i = 0; i < en.length(); i++)
		{
			if (en[i] == tolower(alpha) or en[i] == toupper(alpha))
			{
				same++;
			}
		}
		cout << alpha << " " << same << endl;
	}
	return 0;
}

