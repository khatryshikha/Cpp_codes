#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int>vect{};
    int t,a;
    cin>>t;
    while(t--){    
        cin>>a;
        vect.push_back(a);
    }
    
    sort(vect.begin(), vect.end());
    
    for(int x: vect)
        cout<<x<<endl;
    
    return 0;
}
