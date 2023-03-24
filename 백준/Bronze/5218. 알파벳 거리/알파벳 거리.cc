#include <iostream>
#include <string>
using namespace std;

int main() {
	int TC;
	cin >> TC;
	enum Alphabet{x,A,B,C,D,E,F,G,H,I,J,K,L,N,M,O,P,Q,R,S,T,U,V,W,X,Y,Z};
	string a, b;
	
	for (int i = 0; i < TC; i++)
	{
		cin >> a >> b;
		int* arr = new int[a.length()];
		for (int j = 0; j < a.length(); j++)
		{
			if (b[j] - a[j] < 0)
				arr[j] = b[j] - a[j] + 26;
			else
				arr[j] = b[j] - a[j];
		}
		cout << "Distances: ";
		for (int k = 0; k < a.length(); k++)
		{
			cout << arr[k] << " ";
		}
		cout << endl;
	}

	return 0;
}