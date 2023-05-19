#include <iostream>
#include <string>
using namespace std;

int main() {

	int TC;
	cin >> TC;
	for (int i = 0; i < TC; i++)
	{
		int array[10] = { 0,};
		int a;
		cin >> a;
		string b;
		b = to_string(a);
		for (int j = 0; j < b.length(); j++)
		{
			int t = b[j]-'0';
			array[t]++;
		}
		int count = 0;
		for (int k = 0; k < 10; k++)
		{
			if (array[k] == 0)
			{
				count++;
			}
		}
		cout << 10 - count << endl;
	}
	return 0;
}