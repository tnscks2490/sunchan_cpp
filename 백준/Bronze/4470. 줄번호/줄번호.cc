#include <iostream>
#include <string>
using namespace std;

int main() {

	int N;
	cin >> N;
	for (int i = 0; i <= N; i++)
	{
		string a;
		getline(cin,a,'\n');
		if(i >0)
			cout << i << ". " << a << endl;
	}
	return 0;
}