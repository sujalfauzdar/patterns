#include<iostream>

using namespace std;

    void solidPyramid(int n){
        if( n == 0) return;

        if( n== 1) {
            cout<<"*";
            return;
        }

        for(int i = 1 ; i <= n ; i++){
            for(int j = 0 ; j< n - i;j++ ) cout<<" ";
            for(int j = 1; j <= 2 * i - 1 ; j++) cout<<"*";
            cout<<endl;
        }
    }

    void hollowPyramid(int n){
        if(n== 0) return;
        if(n==1) {
            cout<<"*";
            return;
        }
        for(int i = 0; i < n - 1;i++){
            for(int j = 0; j < n - i-1 ; j++) cout<<" ";
            cout<<"*";
         if (i > 0) {
            for (int j = 0; j < 2 * i - 1; j++) cout << " ";
            cout << "*";
        }
            cout<<endl;
        }
        for(int i = 0 ; i < 2 * n - 1 ;i++) cout<<"*";
        cout<<endl;
    }

int main(){
    int n;
    cout<<"Enter the size of pyramid : "<<endl;
    cin>> n;
    solidPyramid(n);
    cout<<endl;
    hollowPyramid(n);
    return 0;
}