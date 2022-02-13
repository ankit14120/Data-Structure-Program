/* Program of print 2D array*/
#include<stdio.h>
#include<conio.h>
main()
{
	Int i=0,j=0,a[2][3];
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter values is [%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf(An Array is\n);
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
			printf("%d",a[i][j]);
		printf("\n");
	}
}
	