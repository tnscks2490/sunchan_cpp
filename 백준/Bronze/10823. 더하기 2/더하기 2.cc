	#include <iostream>
	#include <string>
	using namespace std;

	int main() {
		string s, n;
		int sum = 0;
		while (getline(cin, s))
		{
			n += s;
		}
		n += ",";
		string tmp = "";
		for (int i = 0; i < n.length(); i++)
		{
			if (n[i] != ',')
			{
				tmp += n[i];
			}	
			else
			{
				sum += stoi(tmp);
				tmp = "";
			}
		}
		cout << sum;
		return 0;
	}