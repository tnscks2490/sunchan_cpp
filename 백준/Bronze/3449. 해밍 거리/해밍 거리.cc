#include <iostream>

using namespace std;

int main() {

	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		string a, b;
		cin >> a;
		cin >> b;
		int count = 0;
		for (int j = 0; j < a.length(); j++)
		{
			if (a[j] != b[j])
			{
				count++;
			}
		}
		cout <<"Hamming distance is " << count << ".\n";
	}
	return 0;
}