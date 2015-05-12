#include<cstdlib>
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    
    int n;
    double sum=0,pi=0;

  int i=0, a=1;
    
    while(abs(pi-3.14)>=0.000001){
        
    sum=sum+1.0/(2*i+1)*a;
    a*=-1;
    pi=4*sum;
    
    cout<<"N: "<<i+1<<" Fin: "<<sum<<endl;
    cout<<"N: "<<i+1<<" Pi: "<<pi<<endl;  
        
    i++;    
        }
         
    system("pause");
    
    return 0;
    }
