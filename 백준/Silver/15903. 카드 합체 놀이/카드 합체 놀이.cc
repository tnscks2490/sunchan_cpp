#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	long long int N, M;
	vector <long long int> v;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		v.push_back(a);
	}
	for (int i = 0; i < M; i++)
	{
		long long int m1, m2;
		sort(v.begin(), v.end());
		m1 = v[0];
		m2 = v[1];
		v[0] = m1 + m2;
		v[1] = m1 + m2;
	}
	long long int sum = 0;
	for (int i = 0; i < v.size(); i++)
	{
		sum += v[i];
	}
	cout << sum << "\n";
	return 0;
}