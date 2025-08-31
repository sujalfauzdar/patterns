#include<iostream>

using namespace std;

    void hollowSquare(int n){
        if(n == 0) return ;
        if(n == 1){ 
            cout<<"*";
            return;
        }

        for(int i = 1 ; i <= n ; i++) cout<<"*";
        cout<<endl;
        for(int i =1 ; i <= n-2;i++){
            cout<<"*";
            for(int j = 1 ; j <= n-2 ;j++) cout<<" ";
            cout<<"*";
            cout<<endl;
        }
        for(int i = 1; i <=n ;i++) cout<<"*";

    }

int main(){
    int n;
    cout<<"Enter the Dimensions of Square : "<<endl;
    cin>>n;

    hollowSquare(n);
    return 0;
}