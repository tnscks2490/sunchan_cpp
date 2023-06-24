#include <iostream>
#include <algorithm>
using namespace std;
// 상근 A,B,C...
// 창영 B,A,B,C.....
// 현진 C,C,A,A,B,B....
int main() {

	int N;
	cin >> N;
	string A;
	cin >> A;
	int Adrian=0;
	string AA = "ABC";
	int Bruno=0;
	string BA = "BABC";
	int Goran = 0;
	string GA = "CCAABB";

	for (int i = 0; i < A.length(); i++)
	{
		if (A[i] == AA[i % 3])
		{
			Adrian++;
		}
	}
	for (int i = 0; i < A.length(); i++)
	{
		if (A[i] == BA[i % 4])
		{
			Bruno++;
		}
	}
	for (int i = 0; i < A.length(); i++)
	{
		if (A[i] == GA[i % 6])
		{
			Goran++;
		}
	}
	int numarr[3] = { Adrian, Bruno,Goran };
	string arr[3] = { "Adrian","Bruno","Goran" };
	int max = *max_element(numarr, numarr + 3);
	cout << max << endl;
	for (int i = 0; i < 3; i++)
	{
		if (numarr[i] == max)
		{
			cout << arr[i] << endl;
		}
	}


	return 0;
}