#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	vector <int>v;

	for (int i = 1; i <= 20; i++)
	{
		v.push_back(i);
	}
	int s, e;
	for (int i = 0; i < 10; i++)
	{
		cin >> s >> e;
		reverse(v.begin() + s-1, v.begin() + e);
	}
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	return 0;
}