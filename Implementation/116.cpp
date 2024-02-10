#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b,max=-1,current=0;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>a;
        cin>>b;
        if(a>b) current -= a-b;
        else if(a<b) current += b-a;
        if(current>max) max = current; 
    }
    cout<<max;
}