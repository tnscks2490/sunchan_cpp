#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
   int N,M;
   int t = 0;
   int f = 0;
   int result = 0;
   
   scanf("%d %d", &N, &M);
 

   for (int i = 0;i < N;i++)
   {
      char arr[99];
      scanf("%s", &arr);
      for (int j = 0;j < M;j++)
      {
         if (arr[j] == 'O')
            t++;
         else if (arr[j]=='X')
            f++;
      }
      if (t > f)
         result++;
       t = 0;
       f = 0;
   }
   printf("%d\n", result);
   return 0;
}