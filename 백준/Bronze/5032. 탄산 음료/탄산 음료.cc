#include <iostream>

using namespace std; 

int main() {

	int e, f, c, getcoke=0,totalcoke=0;
	cin >> e >> f >> c;
	getcoke = e + f;
	while (getcoke >=c)
	{
		totalcoke += getcoke / c;
		getcoke = getcoke / c + getcoke % c;
	}
	cout << totalcoke << endl;
	return 0;
}