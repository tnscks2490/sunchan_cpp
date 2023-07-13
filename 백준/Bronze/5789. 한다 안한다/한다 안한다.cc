#include <iostream>
#include <string>

using namespace std;

int main() {

	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		string a;
		cin >> a;
		int length = a.length()/2;
		if (a[length] == a[length - 1])
		{
			cout << "Do-it" << "\n";
		}
		else
		{
			cout << "Do-it-Not" << "\n";
		}
	}
	return 0;
}