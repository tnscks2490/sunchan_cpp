#include <iostream>

using namespace std;

int main() {

	int Aa, Al, Ba, Bl;
	cin >> Aa >> Al;
	cin >> Ba >> Bl;
	while (true)
	{
		Bl = Bl - Aa;
		Al = Al - Ba;
		if (Bl <= 0 and Al >0)
		{
			cout << "PLAYER A\n";
			break;
		}
		else if (Al <= 0 and Bl > 0)
		{
			cout << "PLAYER B\n";
			break;
		}
		else if (Al <= 0 and Bl <= 0)
		{
			cout << "DRAW\n";
			break;
		}
		

	}
	return 0;
}