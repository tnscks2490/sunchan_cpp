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
		for (int j = 0; j < a.size(); j++)
		{
			a[j] = tolower(a[j]);
		}
		cout << a << endl;
	}
	return 0;
}