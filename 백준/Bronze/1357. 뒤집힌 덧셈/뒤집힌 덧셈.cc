#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int reverse_num(int);

int main() {
	int a,b,result;
	cin >> a >> b;
	
	result = reverse_num(reverse_num(a) + reverse_num(b));
	cout << result << endl;
	return 0;
}

int reverse_num(int a)
{
	string num = to_string(a);
	reverse(num.begin(), num.end());
	int output = stoi(num);
	return output;
}