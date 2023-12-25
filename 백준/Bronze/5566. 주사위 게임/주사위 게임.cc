#include <iostream>

using namespace std;

int main() {

	int N, M;
	cin >> N >> M;
	int* board = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> board[i];
	}
	int player = 0;
	for (int j = 0; j < M; j++)
	{
		int a;
		cin >> a;
		player += a;
		player += board[player];
		if (player >= N - 1)
		{
			cout << j+1 << endl;
			break;
		}
	}
	return 0;
}