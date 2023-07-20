#include <iostream>

using namespace std;

int main() {

	int sh, sm, ss, eh, em, es;
	int h, m, s;
	for (int i = 0; i < 3; i++)
	{
		cin >> sh >> sm >> ss >> eh >> em >> es;
		if (es - ss < 0)
		{
			s = 60 - ss + es;
			em--;
		}
		else
		{
			s = es - ss;
		}

		if (em - sm < 0)
		{
			m = 60 - sm + em;
			eh--;
		}
		else
		{
			m = em - sm;
		}
		h = eh - sh;
		cout << h << " " << m << " " << s << "\n";
	}
	return 0;
}