#include <iostream>

using namespace std;

int main() {
	int arr[5] = { 0, };
	int count = 0;
	for (int i = 0; i < 5; i++)
	{
		string person;
		cin >> person;
		int startindex = person.find("FBI");
		if( startindex >= 0 and startindex < sizeof(person) )
		{
			arr[i] = i+1;
			count++;
		}
	}
	if (count == 0)
	{
		cout << "HE GOT AWAY!" << endl;
	}
	else
	{
		for (int i = 0; i < 5; i++)
		{
			if (arr[i] != 0)
			{
				cout << arr[i] << " ";
			}
			
		}
	}
	return 0;
}