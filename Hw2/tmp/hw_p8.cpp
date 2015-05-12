#include<cstdlib>
#include<iostream>

using namespace std;

int main(){
    
    int n;
    double sum=0;
    cout<<"Please enter a positive integer for n [>0]: ";
    cin>>n;
  
    for(int i=0, a=1;i<n;i++){
    
    sum=sum+1.0/(2*i+1)*a;
    a*=-1;
    
    cout<<"n="<<i+1<<" Sum="<<sum<<endl;
    cout<<"n="<<i+1<<" Pi="<<4*sum<<endl;    
        
        }
   
    system("pause");
    
    return 0;
    }
