#include<iostream>
#include<malloc.h>
#include<cmath>
using namespace std;
int jumpSearch(int a[],int n,int x)
{
	int start = 0;
	int end = sqrt(n);
	
	while(a[end] <= x && end < n)
	{
		start = end;
		end += sqrt(n);
		if(end > n-1)
			end = n;
	}
	for(int i=0;i<end;i++)
	{
		if(a[i]==x)
			return i;
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
	int y = jumpSearch(a,n,x); 
	cout << y;
	free(a);
	return 0;
}
