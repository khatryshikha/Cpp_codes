/* Aakash has been given three array of different sizes . Let the arrays be A, B, C. Aakash aim to find the calculate the minimum absolute difference between the maximum and minimum number from the triplet a, b, c such that a, b, c belongs to A, B, C i.e minimize |max(a,b,c) - min(a,b,c)|*/


/* Start with the largest elements in each of the arrays A, B & C. Maintain a variable to update the answer during each of the steps to be followed.
In every step, the only possible way to decrease the difference is to decrease the maximum element out of the three elements.
So traverse to the next largest element in the array containing the maximum element for this step and update the answer variable.
Repeat this step until the array containing the maximum element ends.*/

#include<bits/stdc++.h>
using namespace std;


int mini(int A[],int B[],int C[], int r,int s,int t)
{
	
	int diff_min = abs(max(A[r],max(B[s],C[t]))-min(A[r],min(B[s],C[t])));
	
	while(r>=0 && s>=0 && t>=0)
	{
		int pre_diff = abs(max(A[r],max(B[s],C[t]))-min(A[r],min(B[s],C[t])));

		if(pre_diff<diff_min)
		{
			diff_min = pre_diff;
		}

		int max_value = max(A[r],max(B[s],C[t]));

		if(A[r]==max_value)
			r = r-1;
		else if (B[s] == max_value)
			s = s-1;
		else
			t = t-1;
	}
	return diff_min;
}

int main()
{
	int i,j,k;
	cin>>i>>j>>k;
	int A[i],B[j],C[k];
	for(int r=0;r<i;r++)
		cin>>A[r];
	for(int s=0;s<j;s++)
		cin>>B[s];
	for(int t=0;t<k;t++)
		cin>>C[t];

	sort(A,A+i);
	sort(B,B+j);
	sort(C,C+k);
	int min = mini(A,B,C,i-1,j-1,k-1);
	cout<<min<<endl;
}