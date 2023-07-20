#include <iostream>

using namespace std;

int main() {

	int N, M;
	cin >> N >> M;
	int* arr = new int[N] {0, };
	int A, B;
	for (int i = 0; i < M; i++)
	{
		cin >> A >> B;
		arr[A-1]++;
		arr[B-1]++;
		
	}
	for (int j = 0; j < N; j++)
	{
		cout << arr[j] << "\n";
	}
	
	return 0;
}