#include <iostream>
#include <string>
#include <vector>

using namespace std;



int main()
{
	string arr[10] = {"i","pa","te","ni","niti","a","ali","nego","no","ili"};
	vector <string> str ;
	string a;
	string result="";
	getline(cin, a);
	a += " ";

	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] == ' ')
		{
			str.push_back(result);
			result = "";
		}
		else
			result += a[i];
	}
	result = "";
	bool check = true;
	for (int i = 0; i < str.size(); i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (str[i] == arr[j])
			{
				if (i == 0)
					break;
				check = false;
				break;
			}
		}
		if (check)
		{
			result += toupper(str[i][0]);
		}
		check = true;
	}
	cout << result << "\n";
	return 0;
}