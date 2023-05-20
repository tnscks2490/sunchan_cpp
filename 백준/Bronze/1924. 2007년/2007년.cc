#include <iostream>

using namespace std;

int daycount(int a, int b);

int main() {
	string day[7] = { "SUN","MON","TUE","WED","THU","FRI","SAT"};
	int a, b;
	cin >> a >> b;
	cout << day[daycount(a, b)] << endl;
	return 0;
}

int daycount(int a, int b)
{
	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int sum = 0;
	for (int i = 0; i < a-1; i++)
	{
		sum += month[i];
	}
	sum += b;
	return (sum % 7);
}