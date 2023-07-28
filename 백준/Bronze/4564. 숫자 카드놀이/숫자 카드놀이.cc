#include <iostream>
#include <string>

using namespace std;

void fuc(string);

int main() {

	string a;
	while (true)
	{
		cin >> a;
		if (a == "0")
		{
			break;
		}
		if (a.length() == 1)
		{
			cout << a << " ";
		}
		else
		{
			cout << a << " ";
			fuc(a);
		}
		cout << "\n";
	}
	return 0;
}

void fuc(string a)
{
	int sum = 1;
	string tmp;
	for (int i = 0; i < a.length(); i++)
	{
		sum *= a[i] - '0';
	}
	cout << sum << " ";
	tmp = to_string(sum);
	if (tmp.length() > 1)
	{
		fuc(tmp);
	}
		
}