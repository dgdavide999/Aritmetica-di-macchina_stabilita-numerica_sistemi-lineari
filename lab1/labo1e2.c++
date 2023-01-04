#include<iostream>
#include<math.h>

using namespace std;

double taylor(int N, double x);
double fact(int N);


int main(){
    cout<<"algoritmo 1 o 2? (il secondo fa il test solo per x= -0.5 e -30)\n";
    short int alg;
    cin>>alg;
        int N[]={3,10,50,100,200};
        double x[]={0.5,30.0,-0.5,-30.0};
        double true_ris, false_ris;
    if(alg==1){
        for(int j=0;j<4;j++){
            true_ris=exp(x[j]);
            cout<<" x = "<<x[j]<<" risultato aspettato "<<true_ris<<endl;
            for(int i=0;i<5;i++){
                false_ris =taylor(N[i],x[j]);
                cout<<"N = "<<N[i]<<" risutato ottenuto = "<<false_ris<<endl<<"  err assoluto= "<<false_ris-true_ris<<"    err relativo= "<<(false_ris-true_ris)/true_ris<<endl<<endl;
            }
            cout<<endl;
        }
    }
    else{//alg 2        il secondo metodo è il migliore (x=-0.5 N=3  errore1=0.0694 errore2=0.0024)
        for(int j=0;j<2;j++){
             true_ris=exp(-x[j]);
             cout<<" x = -"<<x[j]<<" risultato aspettato "<<true_ris<<endl;
            for(int i=0;i<5;i++){
                false_ris=1/taylor(N[i],x[j]);//invece di prendere i valori -0.5, -30 e cambiargli il segno utilizzo i valori 0.5 e 30 che ho già
                cout<<"N ="<<N[i]<<" risutato ottenuto = "<<false_ris<<endl<<"  err assoluto= "<<false_ris-true_ris<<"    err relativo= "<<(false_ris-true_ris)/true_ris<<endl<<endl;
            }
             cout<<endl;
        }
    }

}

double taylor(int N, double x){
    if(N==-1)return 0;
    return (pow(x,N)/fact(N))+taylor(N-1,x);
}


double fact(int N){
    if (N==0) return 1;
    return N*fact(N-1);
}    
    

