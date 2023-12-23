#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int num = 0;
		cin >> num;
		int sum = 0;
		vector <int> v;
		for (int j = 0; j < 20; j++)
		{
			int high;
			cin >> high;
			v.push_back(high);
		}
		for (int k = 0; k < 20; k++)
		{
			int min = min_element(v.begin()+k, v.end()) - v.begin();
			int tmp = v[min];
			v.erase(v.begin() + min);
			v.insert(v.begin()+k, tmp);
			sum += min - k;

		}
		cout << num << " " << sum << "\n";	
	}


	return 0;
}