#include <iostream>

using namespace std;

int main() {

	int N;
	cin >> N;
	int* B = new int[N];
	int* A = new int[N];
	int asum = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> B[i];
	}
	A[0] = B[0];
	asum += A[0];
	for (int i = 1; i < N; i++)
	{
		A[i] = B[i] * (i + 1) - asum;
		asum += A[i];
	}
	for (int i = 0; i < N; i++)
	{
		cout << A[i] << " ";
	}
	return 0;
}