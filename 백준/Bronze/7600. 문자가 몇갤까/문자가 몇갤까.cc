#include <iostream>
#include <string>
using namespace std;

int main() {

	string a;
	
	while (true)
	{
		getline(cin, a);
		if( a == "#")
		{
			break;
		}
		bool arr[26] = { false, };
		int sum = 0;
		for (int i = 0; i < a.length(); i++)
		{
			a[i] = tolower(a[i]);
			if (a[i] >= 97 && a[i] <= 122)
			{
				arr[a[i] - 97] = true;
			}
		}
		
		for (int i = 0; i < 26; i++)
		{
			if (arr[i] == true)
				sum++;
		}

		cout << sum << endl;
	}
	return 0;
}