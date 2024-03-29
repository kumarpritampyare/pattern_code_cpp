#include<iostream>
using namespace std;
int main(){
    int n; 
    cin>>n;
    int i = 1;
    while(i<=n){
        //print karo space for 1st triangle ke liye
        int space = n-i;
        while(space){
            cout<<"  ";
            space = space-1;
        }

        int j =1;
        while(j<=i){
            //print karo second triangle
            cout<<j << " ";
            j =j+1;
        }
        int k=i-1;
        while(k){
            cout<<k << " ";
            k=k-1;
        }
        cout<<endl;
        i = i+1;
    }
}