#include <iostream>
using namespace std;

int main()
{
    for(int i=1;i<=8;i++){
        for(int j=1;j<=4;j++)cout<<" ";
        if(i>5){
            cout<<"*";
        }
        else {
        for(int j=i+2;j<=7;j++){
            cout<<"*";
        }
        }
        cout<<"\n";
    }
    for(int i=1;i<=15;i++){
        if(i<=4){
            for(int j=5-i;j>=1;j--)cout<<" ";
            for(int j=1;j<=2*i-1;j++)cout<<"*";
        }
        else if(i>=5&&i<=11){
            for(int j=1;j<=9;j++)cout<<"*";
        }
        else{
            for(int j=1;j<=9;j++){
                if(j>=4&&j<=6)cout<<" ";
               else cout<<"*";
                
            }
        }
    cout<<"\n";
    }
    return 0;
}
