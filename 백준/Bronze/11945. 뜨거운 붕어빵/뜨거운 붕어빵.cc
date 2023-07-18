#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;
		reverse(s.begin(),s.end());
		cout << s << "\n";
	}
	return 0;
}