#include <iostream>
#include <string>
using namespace std;

int main() {
	string tmp,num;
	int sum = 0;
	getline(cin, tmp);
	tmp += 'E';
	for (int i = 0; i < tmp.length(); i++)
	{
		if (tmp[i] == ',' or tmp[i] == 'E')
		{
			sum += stoi(num);
			num = "";
		}
		else
		{
			num += tmp[i];
		}
	}
	cout << sum << endl;
	return 0;
}