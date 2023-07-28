#include <iostream>
#include <string>
using namespace std;

int main() {

	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int headnum;
		cin >> headnum;
		string Head;
		cin >> Head;
		for (int j = 0; j < Head.length(); j++)
		{
			if (Head[j] == 'c')
			{
				headnum++;
			}
			else if (Head[j] == 'b')
			{
				headnum--;
			}
		}
		cout << "Data Set " << i + 1 << ":\n";
		cout << headnum << "\n\n";
	}
	return 0;
}