#include <iostream>
#include <numeric>
#include <algorithm>
using namespace std;

int main() {

	int array[10] = { 0, };
	int count[10] = { 0, };
	int sum = 0,avr,freq;
	for (int i=0; i<10; i++)
	{
		cin >> array[i];
		sum += array[i];
	}
	for (int j = 0; j < 10; j++)
	{
		for (int k = 0; k < 10; k++)
		{
			if (array[j] == array[k])
			{
				count[j]++;
			}
		}
	}
	avr = sum / 10;
	freq = *max_element(count,count + sizeof(count)/sizeof(count)[0]);
	int *freq_num;
	freq_num = find(count, count + 10, freq);
	cout << avr << endl;
	cout << array[freq_num-count] << endl;
	return 0;
}