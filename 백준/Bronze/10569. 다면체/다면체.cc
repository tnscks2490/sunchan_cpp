#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int V, E;
		cin >> V >> E;
		int result = 0;
		result = 2 + E - V;
		cout << result << endl;
	}
	return 0;
}