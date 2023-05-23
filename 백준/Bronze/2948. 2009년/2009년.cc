#include <iostream>

using namespace std;

int daycount(int a, int b);

int main() {
	string day[7] = { "Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday" };
	int a, b;
	cin >> a >> b;
	cout << day[daycount(a, b)] << endl;
	return 0;
}

int daycount(int a, int b)
{
	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int sum = 0;
	for (int i = 0; i < b - 1; i++)
	{
		sum += month[i];
	}
	sum += a;
	return (sum % 7);
}