#include <iostream>
#include <string>

using namespace std;

int main() {
	int T_case;
	cin >> T_case;

	int* num = new int[T_case];
	string* array = new string[T_case];

	for (int i = 0; i < T_case; i++)
	{
		int a;
		string b;
		cin >> a >> b;
		num[i] = a;
		array[i] = b.erase(a-1,1);
	}

	for (int j = 0; j < T_case; j++)
	{
		cout << array[j] << endl;
	}
	return 0;
}