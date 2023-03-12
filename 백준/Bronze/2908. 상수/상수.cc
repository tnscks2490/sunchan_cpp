#include <iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	int ah, at,ao;
	ah = a / 100;
	at = (a % 100)/10;
	ao = a % 10;
	a = ao *100 + at * 10  + ah;
	
	int bh, bt, bo;
	bh = b / 100;
	bt = (b % 100) /10;
	bo = b % 10;
	b = bo * 100 + bt * 10 + bh;
	
	if (a > b)
	{
		cout << a << endl;
	}
	else
		cout << b << endl;

	return 0;
}