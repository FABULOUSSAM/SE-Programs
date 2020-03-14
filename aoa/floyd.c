#include<stdio.h>
#define max 99999
int a[100][100],V;
void FloydWarshall()
{
int dis[100][100],i,j,k;
for(i=1;i<=V;i++)
{
	for(j=1;j<=V;j++)
	{
		dis[i][j]=a[i][j];
	}
}
for(k=1;k<=V;k++)
{
	for(i=1;i<=V;i++)
	{
		for(j=1;j<=V;j++)
		{
			if(i==k || j==k)
				continue;
			if(i==j)
				a[i][j]=0;
			else
			if(a[i][j]>a[i][k]+a[k][j])
				a[i][j]=a[i][k]+a[k][j];
		}
	}
}

}
void main()
{
int i,j,k;
printf("Enter the number of vertices :");
scanf("%d",&V);
for(i=1;i<=V;i++)
{
	for(j=1;j<=V;j++)
	{
		printf("Enter the adjoint matrix for %d rpw and %d coloumn: ",i,j);
		scanf("%d",&a[i][j]);
		if(i!=j && a[i][j]==0)
			a[i][j]=max;
	}
}
FloydWarshall();
printf("After appplying algo: \n");
for(i=1;i<=V;i++)
{
	for(k=1;k<=V;k++)
	{
	for(j=1;j<=V;j++)
	{
		printf("%d ",a[i][j]);
	}
	printf("\n");
	}
	

}
}
