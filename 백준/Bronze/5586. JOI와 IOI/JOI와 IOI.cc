#include <iostream>
#include <string>

using namespace std;

int main() {

	string N;
	int Jnum=0;
	int Inum = 0;
	cin >> N;
	for (int i = 0; i < N.length()-2; i++)
	{
		if (N[i] == 'J' and N[i+1] == 'O' and N[i+2] == 'I')
		{
			Jnum++;
		}
		else if (N[i] == 'I' and N[i + 1] == 'O' and N[i + 2] == 'I')
		{
			Inum++;
		}
	}
	cout << Jnum << endl;
	cout << Inum << endl;
	return 0;
}