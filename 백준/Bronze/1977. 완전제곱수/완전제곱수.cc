#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	int M, N;
	cin >> M;
	cin >> N;
	int MUP = ceil(sqrt(M));
	int NUP = floor(sqrt(N));
	int tmp = NUP - MUP;
	int* arr = new int[100];
	int sum = 0;
	int index = 0;
	for (int i = MUP; i <= NUP; i++)
	{
		arr[index] = pow(i, 2);
		sum = sum + pow(i, 2);
		index++;
	}
	int mini = *min_element(arr, arr + tmp + 1);
	if (tmp >= 0)
	{
		cout << sum << endl;
		cout << mini << endl;
	}
	else
	{
		cout << -1 << endl;
	}
	return 0;
}