#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {


	int N, M;
	cin >> N;
	cin >> M;
	int* light = new int[M];
	for (int i = 0; i < M; i++)
	{
		cin >> light[i];
	}
	vector <int> v;
	if (M > 1)
	{
		for (int i = 0; i < M - 1; i++)
		{
			if ((light[i + 1] - light[i]) % 2 == 0)
			{
				v.push_back((light[i + 1] - light[i])/2);
			}
			else
			{
				v.push_back(((light[i + 1] - light[i]) / 2) + 1);
			}
		}
		v.push_back(light[0]);
		v.push_back(N - light[M - 1]);
	}
	else
	{
		v.push_back(light[0]);
		v.push_back(N - light[0]);
	}
	sort(v.begin(), v.end());
	cout << v[v.size() - 1];

	
	


	return 0;
}