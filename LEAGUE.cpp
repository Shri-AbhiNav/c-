#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<((n-1)*3)-3*((n-1)/2)<<endl;
    }
    
    return 0;
}