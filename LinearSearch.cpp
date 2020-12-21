#include<iostream>
#include<malloc.h>
using namespace std;
int linearSearch(int a[],int n,int x)
{
	int l=0,r=n-1;
	for(int i=0;i<n/2;i++)
	{
		if(a[l] == x)
			return l;
		else 
			l++;
		if(a[r] == x)
			return r;
		else
			r--;
			
		if(l==r && a[l] != x)
			return -1;
	}
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
	cout <<  linearSearch(a,n,x);
	return 0;
}
