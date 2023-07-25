#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector <int> v;
	int N, M;
	cin >> N >> M;
	int num = 1;
	while (true)
	{
		if (v.size() >= M)
		{
			break;
		}
		for (int i = 0; i < num; i++)
		{
			v.push_back(num);
			
		}
		num++;
	}
	int sum = 0;
	for (int i = N-1; i < M; i++)
	{
		sum += v[i];
	}
	cout << sum << "\n";
}