#include <iostream>

using namespace std;

int main() {

	int TC;
	cin >> TC;
	int* arr = new int[TC];
	for (int i = 0; i < TC; i++)
	{
		int a, b;
		cin >> a >> b;
		arr[i] = a + b;
	}
	for (int i = 0; i < TC; i++)
	{
		cout << "Case " << i+1 <<": " << arr[i] << endl;
	}
	return 0;
}