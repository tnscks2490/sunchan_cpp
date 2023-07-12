#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	cin >> N;
	string name;
	int arr[26] = { 0, };
	for (int i = 0; i < N; i++)
	{
		cin >> name;
		arr[tolower(name[0]) - 97]++;
	}
	int over5 = *max_element(arr, arr + 26);
	if (over5 > 4)
	{
		for (int i = 0; i < 26; i++)
		{
			if (arr[i] > 4)
			{
				cout << char(i + 97);
			}
		}
	}
	else
	{
		cout << "PREDAJA" << endl;
	}
}