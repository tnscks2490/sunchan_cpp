#include <iostream> //전처리 지시자
#include <climits>
using namespace std;

int main() {
	int input;
	cin >> input;
	int* array = new int[input];
	for (int i = 0; i < input; i++)
	{
		int a, b,end;
		cin >> a >> b;
		end = 1;
		for (int j = 0; j < b; j++)
		{
			end = end * a;
			end = end % 10;
		}
		if (end == 0)
			end = 10;
		array[i] = end;
	}
	for (int n = 0; n < input; n++)
	{
		cout << array[n] << endl;
	}
	delete[] array;
	return 0;
}
