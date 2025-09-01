#include<iostream>
using namespace std;

    void hollowDiamondSolidSquare(int n){
        if ( n <= 2)return;
        if( n % 2 == 0){
            cout<<"Size must be odd ! ";
            return;
        }
        int mid = n/2;

        for(int i = 0 ; i <= mid ; i++){
            for(int j = 0 ; j < mid - i ; j++) cout<<"*";
            for(int j =0 ; j < 2 * i + 1;j++) cout<<" ";
            for(int j = 0 ; j < mid - i ; j++) cout<<"*";
            cout<<endl;
        }
        for (int i = mid - 1; i >= 0; i--) {
            for(int j = 0 ; j < mid - i ; j++) cout<<"*";
            for(int j =0 ; j < 2 * i + 1;j++) cout<<" ";
            for(int j = 0 ; j < mid - i ; j++) cout<<"*";
            cout<<endl;
    }
        
    }

int main(){
    int n;
    cout<<"Enter the Size of Square i.e greater than 2 : ";
    cin>>n;
    hollowDiamondSolidSquare(n);

    return 0;
}