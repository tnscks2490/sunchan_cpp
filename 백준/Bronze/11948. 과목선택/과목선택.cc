#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int M, H, S, G, Y, J;
	cin >> M >> H >> S >> G >> Y >> J;
	int sum = 0;
	int arr[4] = { 0, };
	arr[0] = M;
	arr[1] = H;
	arr[2] = S;
	arr[3] = G;
	int mini = *min_element(arr, arr + 4);
	sum = M + H + S + G - mini + max(Y, J);
	cout << sum << "\n";
	return 0;
}