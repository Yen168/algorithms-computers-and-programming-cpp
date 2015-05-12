#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>

using namespace std;

int main(){
    
    int n,sq;
    
    cout<<"Enter an integer: ";
    cin>>n;
    
    sq=n;
    
    if(n<0)sq*=-1;  
    sq=sqrt(sq);
    
    for(int i=sq*-1;i>=sq*-1&&i<=sq;i++){
     
    if(i==0){i=i+1; cout<<"k"<<endl;}
                
    if(n%i==0) cout<<i<<" and "<<n/i<<endl;    
        
        }
 

 
    system("pause");
    return 0;            
    }
