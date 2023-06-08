#include <iostream>

using namespace std;

int main() {

	int Aa,Ab,Ac;
	cin >> Aa >> Ab >> Ac;
	int sum = Aa + Ab + Ac;


	if (sum == 180)
	{
		if (Aa == Ab and Ab == Ac)
		{
			cout << "Equilateral" << endl;
		}
		else if ((Aa == Ab and Ab != Ac)or (Ab == Ac and Ab != Aa) or (Aa == Ac and Ab != Ac))
		{
			cout << "Isosceles" << endl;
		}
		else if (Aa != Ab and Ab != Ac and Aa != Ac)
		{
			cout << "Scalene" << endl;
		}
	}
	else {
		cout << "Error" << endl;
	}
	return 0;
}