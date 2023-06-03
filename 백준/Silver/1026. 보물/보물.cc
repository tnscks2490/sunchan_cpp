#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {

	int N;
	cin >> N;
	vector<int> a;
	vector<int> b;
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		int input;
		cin >> input;
		a.push_back(input);
	}
	for (int i = 0; i < N; i++)
	{
		int input;
		cin >> input;
		b.push_back(input);
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < N; i++)
	{
		int max = *max_element(b.begin(), b.end());
		int mindex = max_element(b.begin(), b.end()) - b.begin();
		sum += a[i] * max;
		b.erase(b.begin() + mindex);
	}
	cout << sum << endl;
	return 0;
}