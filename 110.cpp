#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long n,lucky=0;
    cin>>n;
    while(n!=0){
        unsigned long long rem = n%10;
        if(rem == 4 || rem == 7) lucky++;
        n = n/10;
    }
    if(lucky == 0){
        cout<<"NO";
        return 0;
    }
    while(lucky!=0){
        unsigned long long rem = lucky%10;
        if(rem != 4 && rem!= 7) {
            cout<<"NO";
            return 0;
        }
        lucky = lucky/10;
    }
    cout<<"YES";
}