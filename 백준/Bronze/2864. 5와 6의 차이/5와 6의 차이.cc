#include <iostream>
#include <string>
using namespace std;

int main() {

	string a, b,la,lb,ba,bb;
	cin >> a >> b;

	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] == '5')
		{
			ba += "6";
			la += a[i];
		}
		else if(a[i] == '6')
		{
			la += "5";
			ba += a[i];
		}
		else
		{
			ba += a[i];
			la += a[i];
		}
	}
	for (int i = 0; i < b.length(); i++)
	{
		if (b[i] == '5')
		{
			bb += "6";
			lb += b[i];
		}
		else if (b[i] == '6')
		{
			lb += "5";
			bb += b[i];
		}
		else
		{
			bb += b[i];
			lb += b[i];
		}
	}
	cout << stoi(lb)+stoi(la) << " " << stoi(ba)+stoi(bb) << "\n";
	return 0;
}