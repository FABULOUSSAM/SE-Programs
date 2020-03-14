#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int matrix[100][100],len1,len2;;
char first[100],sec[100];
void lcs(char first[100],char sec[100])
{
int i,j;
char x,y;
for(i=0;i<=len1;i++)
{
for(j=0;j<=len2;j++)
	{
	if(i==0 || j==0)
		matrix[i][j]=0;
	else if(first[i-1]==sec[j-1])
		matrix[i][j]=matrix[i-1][j-1]+1;	
	else	
			{
			x=matrix[i-1][j];
			y=matrix[i][j-1];
			matrix[i][j]=(x>y)?x:y;
			}
		
	}
	
}
}
void matrix_code()
{
int i,j;
for(i=0;i<=len1;i++)
	{
		for(j=0;j<=len2;j++)
		{
		printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
}
void get_lcs()
{
int value=matrix[len1][len2],i,j;
char new[100],counter=0;
for(i=len1;i>=0;i--)
{
	if(value==0)
		break;
	for(j=0;j<=len2;j++)
	{
	if(value==matrix[i][j])
		{
		new[counter]=sec[j-1];
		value--;
		counter++;
		break;
		}	
	}
}
new[counter+1]='\0';
for(i=counter;i>=0;i--)
{
printf("%c",new[i]);
}
}
void main()
{
printf("Enter the first String :");
gets(first);
len1=strlen(first);
printf("Enter the Second String :");
gets(sec);
len2=strlen(sec);
lcs(first,sec);
matrix_code();
get_lcs();
}
