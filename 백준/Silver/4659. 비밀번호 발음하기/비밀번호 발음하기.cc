#include <iostream>
#include <string>
using namespace std;

bool aeiou(string s);
bool check2(string s);
bool checkJAMO(string s);
bool JAorMo(char a);
char test[5] = { 'a','e','i','o','u' };


int main() {

	while (true)
	{
		string s;
		cin >> s;
		if (s == "end")
		{
			break;
		}	
		
		if (aeiou(s) and check2(s) and checkJAMO(s))
		{
			cout << "<" << s << ">" << " is acceptable.\n";
		}
		else
		{
			cout << "<" << s << ">" << " is not acceptable.\n";
		}

	}
	return 0;
}

bool aeiou(string s)
{
	bool check = false;
	for (int i = 0; i < s.length(); i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (s[i] == test[j])
			{
				check = true;
				return check;
			}
		}
	}
	return check;
}

bool check2(string s)
{
	bool check = false;
	if (s.size() < 2)
	{
		return true;
	}
	else
	{
		for (int i = 0; i < s.length() - 1; i++)
		{
			if (s[i] == s[i + 1])
			{
				if (s[i] == 'e' or s[i] == 'o')
				{
					check = true;
				}
				else
				{
					check = false;
					return check;
				}	
			}
			else
			{
				check = true;
			}
		}
	}
	return check;
}
bool checkJAMO(string s)
{
	bool check = false;
	if (s.length() < 3)
	{
		check = true;
		return check;
	}
	else
	{
		bool* arr = new bool[s.length()] {false, };
		for (int i = 0; i < s.length(); i++)
		{
			arr[i] = JAorMo(s[i]);
		}

		for (int i = 0; i < s.length()-2; i++)
		{
			if ((arr[i] == arr[i + 1]) and  (arr[i + 1] == arr[i + 2]))
			{
				check = false;
				return check;
			}
			else
			{
				check = true;
			}
		}
	}
	return check;
	
}

bool JAorMo(char a)
{
	bool check = false;
	for (int j = 0; j < 5; j++)
	{
		if (a == test[j])
		{
			check = true;
			break;
		}
	}
	return check;
}