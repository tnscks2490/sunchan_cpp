#include <iostream>
#include <algorithm>
using namespace std;


string young(int N);
string old(int N);
struct StudentB {
	string name="";
	int D=0;
	int M=0;
	int Y=0;
};

int main() {
	int TC;
	cin >> TC;
	StudentB* N = new StudentB[TC];
	int young = 0;
	int youngindex = 0;
	int old = 2011;
	int oldindex = 0;
	for (int i = 0; i < TC; i++)
	{
		cin >> N[i].name >> N[i].D >> N[i].M >> N[i].Y;
		if (young < N[i].Y)
		{
			young = N[i].Y;
			youngindex = i;
		}
		else if (young == N[i].Y)
		{
			if (N[youngindex].M < N[i].M)
			{
				youngindex = i;
			}
			else if (young == N[i].M)
			{
				if (N[youngindex].D < N[i].D)
				{
					youngindex = i;
				}
			}
		}
		if (old > N[i].Y)
		{
			old = N[i].Y;
			oldindex = i;
		}
		else if (old == N[i].Y)
		{
			if (N[oldindex].M > N[i].M)
			{
				oldindex = i;
			}
			else if (old == N[i].M)
			{
				if (N[oldindex].D > N[i].D)
				{
					oldindex = i;
				}
			}
		}
	}
	cout << N[youngindex].name << endl;
	cout << N[oldindex].name << endl;
	return 0;
}

string young(int TC)
{
	StudentB* N = new StudentB[TC];
	int young = 0;
	int youngindex = 0;
	for (int i = 0; i < TC; i++)
	{
		cin >> N[i].name >> N[i].D >> N[i].M >> N[i].Y;
		if (young < N[i].Y)
		{
			young = N[i].Y;
			youngindex = i;
		}
		else if (young == N[i].Y)
		{
			if (N[youngindex].M < N[i].M)
			{
				youngindex = i;
			}
			else if (young == N[i].M)
			{
				if (N[youngindex].D < N[i].D)
				{
					youngindex = i;
				}
			}
		}
	}
	string name;
	name = N[youngindex].name;
	return name;
}
string old(int TC)
{
	StudentB* N = new StudentB[TC];
	int old = 2011;
	int oldindex = 0;
	for (int i = 0; i < TC; i++)
	{
		cin >> N[i].name >> N[i].D >> N[i].M >> N[i].Y;
		if (old > N[i].Y)
		{
			old = N[i].Y;
			oldindex = i;
		}
		else if (old == N[i].Y)
		{
			if (N[oldindex].M > N[i].M)
			{
				oldindex = i;
			}
			else if (old == N[i].M)
			{
				if (N[oldindex].D > N[i].D)
				{
					oldindex = i;
				}
			}
		}
	}
	string name;
	name = N[oldindex].name;
	return name;
}