#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector <int> v;
	for (int i = 0; i < N; i++)
	{
		v.push_back(i + 1);
	}
	for (int i = 0; i < N-1; i++)
	{
		cout << v[0] << " ";
		v.erase(v.begin());
		v.push_back(v[0]);
		v.erase(v.begin());
	}
	cout << v[0];
	return 0;
}