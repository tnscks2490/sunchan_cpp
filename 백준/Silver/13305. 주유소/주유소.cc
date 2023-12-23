#include <iostream>

using namespace std;

int main() {


	int Citynum;
	cin >> Citynum;
	long long int* OilCost = new long long int[Citynum];
	long long int* distanceCity = new long long  int[Citynum - 1];

	for (int i = 0; i < Citynum - 1; i++)
	{
		cin >> distanceCity[i];
	}
	for (int i = 0; i < Citynum;i++)
	{
		cin >> OilCost[i];
	}

	long long int totalcost = 0;
	long long int nowOilCost = OilCost[0];

	for (int i = 0; i < Citynum - 1; i++)
	{
		if (OilCost[i] < nowOilCost)
		{
			nowOilCost = OilCost[i];
			
		}
		totalcost += nowOilCost * distanceCity[i];
		
	}
	cout << totalcost << endl;
	

	return 0;
}