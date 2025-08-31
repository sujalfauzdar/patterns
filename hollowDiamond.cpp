#include<iostream>

using namespace std;

    void hollowDiamond(int n ){
        if(n == 0) return ;
        if( n== 1){
            cout<<"*";
            return;
        }
        for(int i =0 ; i < n ;i++){
            for(int j = 0; j < n-i-1 ;j++)cout<<" ";
            cout<<"*";
            if(i > 0){
                for(int j =0 ; j < 2 * i -1 ;j++)cout<<" ";
                cout<<"*";
            }
            cout<<endl;
        }


        for(int i = 1; i < n ;i++){
            for(int j = 0 ; j < i ;j++) cout<<" ";
            cout<<"*";
            if(i < n-1){
            for(int j =0 ; j < 2*(n-i) - 3 ;j++)cout<<" ";
            cout<<"*";
            cout<<endl;
        }
        }
    }

int main(){
    int n ;
    cout<<"Enter the size of Diamond : "<<endl;
    cin>>n;
    hollowDiamond(n);
    return 0;
}