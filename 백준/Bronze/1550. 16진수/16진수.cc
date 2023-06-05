#include <iostream>
#include <string>
using namespace std;
 
int main() {

	string a;
	cin >> a;
	cout << stoi(a, nullptr, 16) << endl;
		
	return 0;
}