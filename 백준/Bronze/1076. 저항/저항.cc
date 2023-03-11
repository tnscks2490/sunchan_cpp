#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {

	string OM[10] = { "black","brown","red","orange","yellow",
		            "green","blue","violet","grey","white"};

	string a,b,c;
	long long  result = 0;

	cin >> a;
	auto ainput = find(begin(OM), end(OM), a);
	int aindex = distance(OM, ainput);
	result = aindex * 10;

	cin >> b;
	auto binput = find(begin(OM), end(OM), b);
	int bindex = distance(OM, binput);
	result = result + bindex;

	cin >> c;
	auto cinput = find(begin(OM), end(OM), c);
	int cindex = distance(OM, cinput);
	result = result * pow(10, cindex);

	cout << result << endl;
	return 0;
}