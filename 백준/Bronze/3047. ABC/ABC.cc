#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	vector<int> arr;
	int A, B, C;
	for (int i = 0; i < 3; i++)
	{
		int a;
		cin >> a;
		arr.push_back(a);
	}
	C = *max_element(arr.begin(), arr.end());
	int Ci = max_element(arr.begin(), arr.end()) - arr.begin();
	arr.erase(arr.begin() + Ci);
	B = *max_element(arr.begin(), arr.end());
	Ci = max_element(arr.begin(), arr.end()) - arr.begin();
	arr.erase(arr.begin() + Ci);
	A = *max_element(arr.begin(), arr.end());
	string t;
	cin >> t;
	for (int i = 0; i < 3; i++)
	{
		if (t[i] == 'A')
		{
			cout << A << " ";
		}
		else if (t[i] == 'B')
		{
			cout << B << " ";
		}
		else if (t[i] == 'C')
		{
			cout << C << " ";
		}
	}
	return 0; 
}