#include <iostream>
#include <string>

using namespace std;

int main() {

	string output;
	string a;
	getline(cin, a);
	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] == 'a' or a[i] == 'e' or a[i] == 'i' or a[i] == 'o' or a[i] == 'u')
		{
			output += a[i];
			i += 2;
		}
		else
		{
			output += a[i];
		}
	}
	cout << output << endl;
	return 0;
}