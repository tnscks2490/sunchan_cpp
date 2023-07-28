#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int N;
	cin >> N;
	string s;
	vector <string> v1,v2,v3;
	for (int i = 0; i < N; i++)
	{
		cin >> s;
		v1.push_back(s);
		v2.push_back(s);
		v3.push_back(s);
	}
	sort(v2.begin(), v2.end());
	sort(v3.begin(), v3.end(), greater<string>());
	if (v1 == v2)
	{
		cout << "INCREASING\n";
	}
	else if (v1 == v3)
	{
		cout << "DECREASING\n";
	}
	else if (v1 != v2 and v1 != v3)
	{
		cout << "NEITHER\n";
	}
	return 0;
}