#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	int N;
	cin >> N;
	int* arr = new int[N];
	vector <string> v;
	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s >> arr[i];
		v.push_back(s);
	}
	int mini = min_element(arr, arr + N)-arr;
	cout << v[mini];
	return 0;
}