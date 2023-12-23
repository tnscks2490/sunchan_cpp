#include <iostream>

using namespace std;

int main() {

	int Citynum;
	cin >> Citynum;
	int* OilCost = new int[Citynum];
	int* distanceCity = new int[Citynum - 1];

	int totaldis = 0;
	int totalcost = 0;
	for (int i = 0; i < Citynum - 1; i++)
	{
		int tmp;
		cin >> tmp;
		distanceCity[i] = tmp;
		totaldis += tmp;
	}
	for (int i = 0; i < Citynum;i++)
	{
		cin >> OilCost[i];
	}
	//totalcost += OilCost[0] * distanceCity[0];
	int nowOilCost=OilCost[0];
	for (int i = 0; i < Citynum - 1; i++)
	{
		if (OilCost[i] < nowOilCost)
		{
			nowOilCost = OilCost[i];
			totalcost += nowOilCost * distanceCity[i];
		}
		else
		{
			totalcost += nowOilCost * distanceCity[i];
		}
		
	}
	cout << totalcost << endl;
	

	return 0;
}