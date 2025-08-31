#include<iostream>

using namespace std;

    void hollowTriangle(int n){
        if(n== 0) return;
        if(n == 1){
            cout<<"*";
            return;
        }
        for(int i = 1; i <= n ; i++){
            cout<<"*";
            for(int j = 1 ; j < i-1 ; j++) cout<<" ";
            i > 1 ? cout<<"*" : cout<<"";
            cout<<endl;
        }
        for(int i =1; i <= n ; i++) cout<<"*";
    }

int main(){
    int n;
    cout<<"Enter the Size of Trinagle : "<<endl;
    cin>>n;
    hollowTriangle(n);
}