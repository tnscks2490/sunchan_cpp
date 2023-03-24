#include <iostream>
#include <string>
using namespace std;

int num0(int a, int b);
int main() {
	int TC;
	cin >> TC;
	int N, M;
	int* arr = new int[TC];
	for (int i = 0; i < TC; i++)
	{
		cin >> N >> M;
		arr[i] = num0(N, M);

	}

	for (int j = 0; j < TC; j++)
	{
		cout << arr[j] << endl;
	}
	return 0;
}

int num0(int a, int b)
{
	int count = 0;
	string s;
	for (int i = a; i < b+1; i++)
	{
		s = to_string(i);
		for (int j = 0; j < s.length(); j++)
		{
			if (s[j] == '0')
				count++;
		}
	}
	return count;
}