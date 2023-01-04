#include<iostream>
#include<limits.h>
#include<cmath>

using namespace std;

int main(){
    int d=1;
    cout<<"singola o doppia precisione? [s/d]\n";
    char scelta;
    cin>>scelta;
    if(scelta=='s'){
        float flag=0;
        while(flag!=1){
            d++;
            flag=1+pow(2,-d);
        }
        cout<<"trovato: 2^-"<<d<<endl;
    }
    
    else if(scelta=='d'){
        double flag=0;
        while(flag!=1){
            d++;
            flag=1+pow(2,-d);
        }
        cout<<"esp trovato: 2^-"<<d-1<<endl;
    }
}
