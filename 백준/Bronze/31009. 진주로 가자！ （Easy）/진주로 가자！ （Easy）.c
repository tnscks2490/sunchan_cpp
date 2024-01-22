#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
int main()
{
	int N = 0;
	char area[16];
    int arr[1000];
	int price = 0;
	int count = 0;

	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%s %d", area,&arr[i]);
		if (strcmp(area,"jinju") == 0)
			price = arr[i];
	}
      
	for (int i = 0; i < N; i++)
	{
		if (arr[i] > price)
			count++;
	}

	printf("%d\n%d", price, count);
    return 0;
}