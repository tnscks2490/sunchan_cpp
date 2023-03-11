#include <iostream>

using namespace std;

int main() {
	int input,count=0;
	cin >> input;
	int* array = new int[input];

	for (int i = 0; i < input; i++)
	{
		cin >> array[i];
	}
	int num;
	cin >> num;

	for (int j = 0; j < input; j++)
	{
		if (array[j] == num)
			count++;
	}
	cout << count << endl;
	return 0;
}