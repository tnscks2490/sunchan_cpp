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
		arr[int(S[i]) - 65]++;
	}
	
	for (int i = 0; i < 26; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}