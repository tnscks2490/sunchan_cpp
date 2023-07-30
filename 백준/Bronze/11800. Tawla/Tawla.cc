#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <string> v;
	v.push_back("Yakk");
	v.push_back("Doh");
	v.push_back("Seh");
	v.push_back("Ghar");
	v.push_back("Bang");
	v.push_back("Sheesh");
	vector <string> s;
	s.push_back("Habb Yakk");
	s.push_back("Dobara");
	s.push_back("Dousa");
	s.push_back("Dorgy");
	s.push_back("Dabash");
	s.push_back("Dosh");
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		
		int a, b;
		cin >> a >> b;
		cout << "Case " << i + 1 << ": ";
		if (a == b)
		{
			cout << s[a -1]<<"\n";
		}
		else
		{
			if ((a == 5 and b == 6) or (a == 6 and b == 5))
			{
				cout << "Sheesh Beesh\n";
			}
			else
			{
				cout << v[max(a, b)-1] << " " << v[min(a, b)-1] << "\n";
			}
		}

	}

	return 0;
}