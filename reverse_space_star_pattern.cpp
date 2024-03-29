#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i =0;
    while(i<=n){
        int star =n-i;
        while(star){
            cout<<"*";
            star=star-1;
        }
        int j =1;
        while(j<=i){
            cout<<" ";
            j=j+1;
        }
        cout<<endl;
        i = i+1;
    }
}