/*
AIM:Write a program to implement any two CPU scheduling algorithms like FCFS, SJF,
Round Robin etc.
*/

#include<stdio.h>
void main()
{
int n,bt[100],wt[100],at[100],i,sum,tat[100];
printf("Enter the number of process :");
scanf("%d",&n);
printf("BURST TIME \n");
for(i=1;i<=n;i++)
{
printf("Enter the burst time for %dst process\n",i);
scanf("%d",&bt[i]);
}
printf("ARRIVAL TIME \n");
for(i=1;i<=n;i++)
{
printf("Enter the arrival time for %dst process\n",i);
scanf("%d",&at[i]);
}
sum=0;
for(i=1;i<=n;i++)
{
sum=sum+bt[i];
tat[i]=sum-at[i];
}
printf("PROCESS\t|TAT \n");
for(i=1;i<=n;i++)
{
printf("P%d\t|%d\n",i,tat[i]);
}
for(i=1;i<=n;i++)
{
wt[i]=tat[i]-bt[i];
}
printf("PROCESS\t|WT \n");
for(i=1;i<=n;i++)
{
printf("P%d\t|%d\n",i,wt[i]);
}
float sumwt=0;
for(i=1;i<=n;i++)
{
sumwt=sumwt+wt[i];
}
printf("Average waiting time :%0.2f",sumwt/n);
float sumtat=0;
for(i=1;i<=n;i++)
{
sumtat=sumtat+tat[i];
}
printf("\nAverage Turn around time :%0.2f",sumtat/n);

}
/*
OUTPUT:
Enter the number of process :5
BURST TIME 
Enter the burst time for 1st process
8
Enter the burst time for 2st process
1
Enter the burst time for 3st process
3
Enter the burst time for 4st process
2
Enter the burst time for 5st process
6
ARRIVAL TIME 
Enter the arrival time for 1st process
0
Enter the arrival time for 2st process
1
Enter the arrival time for 3st process
2
Enter the arrival time for 4st process
3
Enter the arrival time for 5st process
4
PROCESS	|TAT 
P1	|8
P2	|8
P3	|10
P4	|11
P5	|16
PROCESS	|WT 
P1	|0
P2	|7
P3	|7
P4	|9
P5	|10
Average waiting time :6.60
Average Turn around time :10.60

*/
