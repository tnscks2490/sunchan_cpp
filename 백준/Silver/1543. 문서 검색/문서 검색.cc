#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {

	string s,fs;
	getline(cin, s);
	getline(cin, fs);
	int sum = 0;
	int index = 0;

	while (true)
	{
		if (s.find(fs, index) != string::npos)
		{
			sum++;
			//s.erase(s.find(fs), fs.length());
			index = s.find(fs, index) + fs.length();
		}
		else
		{
			break;
		}
	}
	cout << sum << endl;
	return 0;
}