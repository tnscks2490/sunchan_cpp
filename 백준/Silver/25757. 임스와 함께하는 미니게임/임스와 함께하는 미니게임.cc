#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int N;
	char G;
	cin >> N >> G;
	vector<string> v;
	string a;
	for (int i = 0; i < N; i++)
	{
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	v.erase(unique(v.begin(), v.end()), v.end());

	

	if (G == 'Y')
	{
		cout << v.size()<< endl;
	}
	else if (G == 'F')
	{
		cout << v.size() / 2 << endl;
	}
	else if (G == 'O')
	{
		cout << v.size() / 3 << endl;
	}
	return 0;
}