#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int N;
	cin >> N;
	int* arr = new int[N];
	vector <int> v;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + N);
	for (int i = 0; i < N; i++)
	{
		v.push_back(arr[i] * (N - i));
	}
	sort(v.begin(), v.end());
	cout << v[v.size() - 1] << endl;
	return 0;
}