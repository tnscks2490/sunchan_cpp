#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int num;
	cin >> num;
	int* array = new int[num];
	for (int i = 0; i < num; i++)
	{
		int b;
		cin >> b;
		array[i] = b;
	}
	sort(array, array + num);
	if (num == 1)
		cout << array[0] * array[0] << endl;
	else
		cout << array[0] * array[num - 1] << endl;
	delete[] array;
	return 0;
}