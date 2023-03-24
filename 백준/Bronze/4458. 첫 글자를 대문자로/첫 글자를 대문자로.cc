#include <iostream>
#include <string>
using namespace std;

int main() {
	string TC;
	getline(cin, TC);
	string s;
	for (int i = 0; i < stoi(TC); i++)
	{
		getline(cin, s);
		s[0] = toupper(s[0]);
		cout << s << endl;
		
	}
	return 0;
}