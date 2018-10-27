#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


int partition(int arr[],int l,int h)
{
	int i = l-1;
	int pivot=arr[h];
	for(int j=l;j<h;j++)
	{
		if(arr[j]<=pivot)
		{
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[h]);
	return (i+1);
}




void quicksortiterative(int arr[],int l, int h)
{
	int stack[h-l+1];
	int top = -1;
	stack[++top]=l;
	stack[++top]=h;
	while(top>=0)
	{
		h= stack[top--];
		l=stack[top--];

		int p = partition(arr,l,h);

		if(p-1>l)
		{
			stack[++top]=l;
			stack[++top]=p-1;
		}

		if(p+1<h)
		{
			stack[++top]=p+1;
			stack[++top]=h;
		}
	}
}




int main(){
	int t;
	cin>>t;
	int arr[t];
	for(int i=0;i<t;i++)
	{
		cin>>arr[i];
	}
	int n= sizeof(arr)/sizeof(*arr);
	quicksortiterative(arr,0,n-1);
	
	for(int i = 0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}