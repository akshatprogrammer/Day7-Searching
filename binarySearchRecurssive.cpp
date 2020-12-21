#include<iostream>
#include<malloc.h>
using namespace std;
int binarySearchRecurssive(int a[],int start,int end,int x)
{
	while(start <= end)
	{
		int mid = start + (end-start)/2;
		if(a[mid] == x)
		return mid;
		if(a[mid]<x)
		return binarySearchRecurssive(a,mid+1,end,x);
		else
		return binarySearchRecurssive(a,start,mid-1,x);
	}
	return -1;
}
int main()
{
	int n;
	cin >> n;
	int *a;
	a = (int *)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++)
		cin >> a[i];
	int x;
	cin >> x;
	int y = binarySearchRecurssive(a,0,n-1,x); 
	cout << y;
	free(a);
	return 0;
}
