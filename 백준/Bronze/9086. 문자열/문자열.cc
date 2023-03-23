#include <iostream>
#include <string>
using namespace std;

int main() {
	int TC;
	cin >> TC;
	string a;
	char* arr = new char[TC * 2];
	for (int i = 0; i < TC; i++)
	{
		cin >> a;
		arr[2 * i] = char(a[0]);
		arr[2*i-1] = char(a[a.length() - 1]);
	}
	for (int j = 0; j < TC; j++)
	{
		cout << arr[2*j] << arr[2*j-1] <<endl;
	}
	return 0;
}