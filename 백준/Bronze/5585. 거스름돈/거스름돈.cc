#include <iostream>

using namespace std;

int main() {

	int N;
	cin >> N;
	int chage = 1000 - N;
	int count = 0;
	int chagenum[6] = { 500,100,50,10,5,1 };
	int index = 0;
	while (true)
	{
		if (chage == 0)
		{
			break;
		}
		if (chage / chagenum[index] >= 1)
		{
			count = count + chage / chagenum[index];
			chage = chage % chagenum[index];
		}
		else
		{
			index++;
		}

		
	}
	cout << count << "\n";
	return 0;
}