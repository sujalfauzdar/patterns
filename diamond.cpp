#include<iostream>

using namespace std;

    void diamondPattern(int n ){
        for(int i = 0 ; i <= n ; i++){
            for(int j = 0 ; j <= n-i; j++ )
                cout<<" ";
            for(int j = 0;j < 2*i + 1; j++)
                cout<<"*";
            cout<<endl;
        }
        
        for(int i = n-1 ; i >= 0 ; i--){
            for(int j = 0 ; j <= n-i; j++ )
                cout<<" ";
            for(int j = 0;j < 2*i + 1; j++)
                cout<<"*";
            cout<<endl;
        }
    }

int main(){
    diamondPattern(4);
    return 0;
}