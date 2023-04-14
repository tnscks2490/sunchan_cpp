#include <iostream>

using namespace std;

int main() {

	int TC;
	cin >> TC;
	for (int i = 0; i < TC; i++)
	{
		int c, v;
		cin >> c >> v;
		cout << "You get " << c / v << " piece(s) and your dad gets " << c % v << " piece(s)." << endl;
	}
	return 0;
}