#include<iostream>
#include<malloc.h>
using namespace std;
int binarySearch(int a[],int n,int x)
{
	int start = 0;
	int end = n-1;
	while(start <= end)
	{
		int mid = start + (end-start)/2;
		if(a[mid] == x)
		return mid;
		if(a[mid]<x)
		start = mid + 1;
		else
		start = mid - 1;
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
	int y = binarySearch(a,n,x); 
	cout << y;
	free(a);
	return 0;
}
