/*
Name : Shubham Ashok Mohape
Roll No : 18CE7007
Batch : C-2
Aim : Implementation of Merge Sort
*/
#include<stdlib.h> 
#include<stdio.h> 
void merge(int a[], int l, int m, int r) 
{ 
	int i, j, k; 
	int n1 = m - l + 1; 
	int n2 = r - m; 
	int L[n1], R[n2]; 
	for (i = 0; i < n1; i++) 
		L[i] = a[l + i]; 
	for (j = 0; j < n2; j++) 
		R[j] = a[m + 1+ j]; 
	i = 0; 
	j = 0; 
	k = l; 
	while (i < n1 && j < n2) 
	{ 
		if (L[i] <= R[j]) 
		{ 
			a[k] = L[i]; 
			i++; 
		} 
		else
		{ 
			a[k] = R[j]; 
			j++; 
		} 
		k++; 
	} 
	while (i < n1) 
	{ 
		a[k] = L[i]; 
		i++; 
		k++; 
	} 
	while (j < n2) 
	{ 
		a[k] = R[j]; 
		j++; 
		k++; 
	} 
} 
void mergeSort(int a[], int l, int r) 
{ 
	if (l < r) 
	{ 
		int m = l+(r-l)/2; 
		mergeSort(a, l, m); 
		mergeSort(a, m+1, r); 
		merge(a, l, m, r); 
	} 
} 
void printArray(int a[], int size) 
{ 
	int i; 
	for (i=0; i < size; i++) 
		printf("%d ", a[i]); 
	printf("\n"); 
} 
int main() 
{ 
	int size,a[100];
    	printf("\nEnter the number of elements in the array\n");
    	scanf("%d",&size);
    	printf("\nEnter the elements in the array\n");
    	for(int i=0;i<size;i++)
        	scanf("%d",&a[i]);
	mergeSort(a,0,size- 1); 
	printf("\nSorted array is \n"); 
	printArray(a,size); 
	return 0; 
} 
/*Output
Enter the number of elements in the array
5

Enter the elements in the array
23
45
67
78
12

Sorted array is 
12 23 45 67 78 

*/
