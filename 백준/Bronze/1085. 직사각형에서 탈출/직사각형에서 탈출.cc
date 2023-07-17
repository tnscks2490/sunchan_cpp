#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int x, y, w, h;
	cin >> x >> y >> w >> h;
	int arr[4] = { 0, };
	arr[0] = x;
	arr[1] = w - x;
	arr[2] = y;
	arr[3] = h - y;
	int mini = *min_element(arr, arr + 4);
	cout << mini << endl;
	return 0;
}