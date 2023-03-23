#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string S;
	cin >> S;
	int arr[26] = { 0, };
	for (int i = 0; i < S.length(); i++)
	{
		S[i] = toupper(S[i]);
		arr[int(S[i])-65]++;
	}
	int maxt = *max_element(arr, arr + 26);
	int count = 0;
	int index = 0;
	for (int i = 0; i < 26; i++)
	{
		if (arr[i] == maxt)
		{
			count++;
			index = i;
		}
	}
	if (count > 1)
	{
		cout << "?" << endl;
	}
	else
	{
		cout << char(index + 65) << endl;
	}
	return 0;
}