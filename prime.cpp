#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i;

    for(int i=2; i<n; i++){
        if(n%i==0){
            cout<<"non prime no"<<endl;
            break;
        }
    
    if(i==n){
        cout<<"prime No"<<endl;
    }
    }
    return 0;

}