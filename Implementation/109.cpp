#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int seven=0,four=0,count=0,temp = n;
    if(n%7 == 0) seven=n/7;
    else{
        if(n%4 == 0) four=n/4;        
        while(n>0){  
            n-=7;
            count++;
            if(n%4==0 && n>0){
                four = n/4;
                seven = count;
            }
        }
        }
    if(seven*7+four*4!=temp) cout<<-1;
    else{
        for(int i=0;i<four;i++) cout<<4;
        for(int i=0;i<seven;i++) cout<<7;
    }
}