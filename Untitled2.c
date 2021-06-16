#include<bits/stdc++.h>

using namespace std;


int main(){

    int n;
     set<int>a;
     int x[n];
    cin>>n;
    for(int i=0; i<n;i++){
        cin>>x[i];
    }
    for(int i=0; i<n;i++){
        if(a.insert(x[i]).second==0){
            cout<<x[i];
            return 0;
        }
    }

    return 0;
}
