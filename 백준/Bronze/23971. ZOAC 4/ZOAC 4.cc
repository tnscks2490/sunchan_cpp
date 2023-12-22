#include <iostream>

using namespace std;

int main() {

	int H, W, N, M;
	cin >> H >> W >> N >> M;

	int Sero = 0,Garo = 0;
	if (H % (N+1) == 0)
	{
		Sero = H / (N+1);
	}
	else
	{
		Sero = (H / (N+1)) + 1;
	}

	if (W % (M+1) == 0)
	{
		Garo = W / (M + 1);
	}
	else
	{
		Garo = (W / (M + 1)) + 1;
	}
	cout << Sero * Garo << endl;
	return 0;
}