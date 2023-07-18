#include <iostream>
#include <string>
using namespace std;

int main() {

	int T,N;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> N;
		cout << "Pairs for " << N << ": ";
		string s = "";
		for (int j = 1; j < N/2 +1; j++)
		{
			if (j != N - j)
			{
				s += to_string(j);
				s += " ";
				s += to_string(N - j);
				s +=", ";
				//cout << j << " " << N - j << ", ";
			}
		}
		if (s != "")
		{
			s.erase(s.length()-2, 2);
		}
		//s.erase(s.end());
		cout << s << "\n";
	}
	return 0;
}