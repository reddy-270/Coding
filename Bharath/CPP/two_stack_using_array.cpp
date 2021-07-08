#include<bits/stdc++.h>
using namespace std;
struct stac{
	int a = 1000;
	int arr[1000];
	int top = -1;
};

int push1(int n, int ar[], struct stac &s1, int x)
{
	if(s1.top >= n/2) return -1;
	else
	{
		ar[++s1.top] = x;
	}
	return 1;
}

int push2(int n, int ar[], struct stac &s2, int x)
{
	if(s2.top == n-1) return -1;
	ar[s2.top] = x;
	s2.top++;
	return 1;
}

int pop1(int ar[], struct stac &s1)
{
	if(s1.top==-1) return -1;
	int x = ar[s1.top];
	ar[s1.top--] = -1;
	return x;
}

int pop2(int ar[], struct stac &s2, int n)
{
	if(s2.top==n/2-1) return -1;
	int x = ar[s2.top];
	ar[s2.top--] = -1;
	return x;	
}

int main()
{
	int n,x;
	cin>>n;
	struct stac s1 ;
	struct stac s2 ;
	s1.a = n/2;s1.top = 0;
	s2.a = n/2;s2.top = 0;
	int ar[n];
	for(int i=0;i<n;i++)
	{
		cin>>x;
		cout<<push1(n, ar, s1, x);
	}
}
