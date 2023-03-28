#include <iostream>
#include <string>
using namespace std;


struct player
{
	int price;
	string name;
};
int main() {

	int TC;
	cin >> TC;
	for (int i = 0; i < TC; i++)
	{
		int p;
		cin >> p;
		player* N = new player[p];
		int index = 0;
		int max = 0;
		for (int j = 0; j < p; j++)
		{
			cin >> N[j].price >> N[j].name;
			if (N[j].price > max)
			{
				max = N[j].price;
				index = j;
			}
			
		}
		cout << N[index].name<<endl;
	}

	return 0;
}