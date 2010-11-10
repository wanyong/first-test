/*
	Add header
*/

#include <math.h>
#include <stdio.h>

main()
{
	int m,k,i,n=0;
	
	for(m = 101;m <= 200; m+=2)
	{
		k = sqrt(m);
		for(i = 2;i <= k;i++)
			if(m % i == 0) break;
		if(i == k+1)
		{
			printf("%d ",m);
			n++;
			if(n % 10 == 0)
				printf("\n");
		}
	}

	printf("\n");
}
