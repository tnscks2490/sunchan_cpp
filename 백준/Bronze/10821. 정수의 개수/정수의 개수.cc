#include <iostream>
#include <string>
using namespace std;

int main() {

	string S;
	cin >> S;
	int num = 0;
	int count = 0;
	for(int i=0; i<S.length();i++)
	{
		if (S[i] == ',')
		{
			num++;
		}
	}
	num++;
	cout << num << endl;
	return 0;
}