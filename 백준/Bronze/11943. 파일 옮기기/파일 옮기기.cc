#include <iostream>

using namespace std;

int main() {

	int A, B, C, D;
	cin >> A >> B >> C >> D;
	cout << min((A + D), (B + C));
	return 0;
}