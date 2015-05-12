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
    
    sq=sqrt(n);
    
    for(sq*=-1;sq<0;sq++){
                
    if(n%sq==0) cout<<sq<<" and "<<n/sq<<endl;    
        
        }
        
        sq=sqrt(n);
   for(;sq>0;sq--){
                
    if(n%sq==0) cout<<n/sq<<" and "<<sq<<endl;    
        
        }
   
   
   /* 
        
    while(sq<0){
             
    if(n%sq==0) cout<<sq<<" and "<<n/sq<<endl;          
    sq++;
      
        }
    while(sq<0){
             
    if(n%sq==0) cout<<sq<<" and "<<n/sq<<endl;          
    sq++;
      
        }    
        
     */   
 
    system("pause");
    return 0;            
    }
