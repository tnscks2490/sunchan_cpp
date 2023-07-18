#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	string A, B,C;
	vector <string> c;
	cin >> A >> B;

	int d = 0;
	if (A.length() > B.length())
	{
		d = A.length() - B.length();
		for (int i = 0; i < d; i++)
		{
			B = '0' + B;
		}
		for (int i = A.length()-1; i >= 0; i--)
		{
			c.push_back(to_string((A[i]-'0') + (B[i]-'0')));
			
		}
		reverse(c.begin(), c.end());
		for (int i = 0; i < c.size(); i++)
		{
			cout << c[i];
		}
	}
	else if (A.length() == B.length())
	{
		for (int i = A.length() - 1; i >= 0; i--)
		{
			c.push_back(to_string((A[i] - '0') + (B[i] - '0')));

		}
		reverse(c.begin(), c.end());
		for (int i = 0; i < c.size(); i++)
		{
			cout << c[i];
		}
	}
	else if (A.length() < B.length())
	{
		d = B.length()- A.length();
		for (int i = 0; i < d; i++)
		{
			A = '0' + A;
		}
		for (int i = B.length() - 1; i >= 0; i--)
		{
			c.push_back(to_string((B[i] - '0') + (A[i] - '0')));

		}
		reverse(c.begin(), c.end());
		for (int i = 0; i < c.size(); i++)
		{
			cout << c[i];
		}
	}
	
	
	
	return 0;
}