#include <iostream>
#include <string>
using namespace std;

int main() {

	string Line;
	while (getline(cin, Line))
	{
		int big = 0;
		int small = 0;
		int num = 0;
		int space = 0;
		for (int j = 0; j < Line.length(); j++)
		{
			if (Line[j] >= 65 and Line[j] <= 90)
			{
				big++;
			}
			else if (Line[j] >= 97 and Line[j] <= 122)
			{
				small++;
			}
			else if (Line[j] >= 48 and Line[j] <= 57)
			{
				num++;
			}
			else if (Line[j] == 32)
			{
				space++;
			}
		}
		cout << small << " " << big << " " << num << " " << space << endl;
	}
	return 0;
}