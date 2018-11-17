#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long a1,b1;
		float a2,b2;
		long c1;
		long double c2;
		cin>>a1>>a2>>b1>>b2>>c1>>c2;
		float b=b1+b2;
		vector<int> rem;
		// A: Strip its decimal (i.e., truncate it) and print its hexadecimal representation (including the  prefix) in lower case letters.
		while(a1)
		{
			rem.push_back(a1%16);
			a1 = a1/16;

		}
		cout<<"0x";
		for(vector<int>::reverse_iterator it = rem.rbegin(); it != rem.rend(); ++it)
		{
			cout<<*it;
		}
		cout<<endl;
		// B: Print it to a scale of  decimal places, preceded by a  or  sign (indicating if it's positive or negative), right justified, and left-padded with underscores so that the printed result is exactly  characters wide.
		cout<<b<<endl;
		int len = std::to_string(b1).length()+3;
		cout<<len;
		
		while(len--)
		{
			string z;
			z = std::to_string(b);
			cout<<z;
			break;
		}
	}
}