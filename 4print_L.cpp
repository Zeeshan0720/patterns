#include<iostream>

using namespace std;
int main(){

    int n;
    cout<<("Enter a number : ");
    cin>>(n);
    for(int i=0;i<n;i++){
        cout<<("*\n");
        if(i==n-1){
            for(int j=0;j<n;j++){
                cout<<("* ");}
        }
    }
     
    return 0;
}