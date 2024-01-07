#include <iostream>
#include <string>

using namespace std;

int main()
{

	int N;
	cin >> N;
	cin.ignore();
	for (int i = 0; i < N; i++)
	{
		int g = 0;
		int b = 0;
		string HeroName;
		getline(cin, HeroName);
		for (int j = 0; j < HeroName.length(); j++)
		{
			if (HeroName[j] == 'g' or HeroName[j] == 'G')
				g++;
			else if (HeroName[j] == 'b' or HeroName[j] == 'B')
				b++;
		}
		if (g > b)
			cout << HeroName << " is GOOD\n";

		else if(g < b)
			cout << HeroName << " is A BADDY\n";
		else if(g == b)
			cout << HeroName << " is NEUTRAL\n";
	}
	return 0;
}