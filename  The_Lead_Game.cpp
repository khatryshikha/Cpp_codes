#include <bits/stdc++.h>
using namespace std;


int main() 
{ 
	int n;
	cin>>n;
	int sum1=0,sum2=0;
	int p1,p2;
    map <int, int> gquiz1;        // empty map container 
  
    // insert elements in random order 
    
    for (int i=0;i<n;i++){
    	cin>>p1>>p2;
    	sum1=sum1+p1;
    	sum2=sum2+p2;
    	int diff = sum1-sum2;
	    gquiz1.insert(pair <int, int> (i+1, diff)); 
    }
    

    int maax =0;
    int player;
    for(auto it = gquiz1.begin(); it != gquiz1.end(); ++it ){
	    if (abs(it ->second) > maax)
	    {
	    	if(it ->second <0)
	    	{
	    		player=2;
	    	}
	    	else
	    	{
	    		player =1;
	    	}
	        maax = abs(it->second);
	    }
	}
	cout<<player<<" "<<maax;
    
 }