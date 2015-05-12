#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>

using namespace std;

int main(){
    
    int n;
    char c1,c2,tmp;
    
    do{
        cout<<"Enter a positive integer: ";
        cin>>n;
        
        }while(n<=0);
    
    cout<<"Enter the first character: ";
    cin>>c1;
    cout<<"Enter the second character: ";
    cin>>c2;
    
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=n;j++){
            
            cout<<c1;
            
            tmp=c1;
            c1=c2;
            c2=tmp;
            
            }
       
           if(i%2) 
          
    
        
        cout<<endl;
        
        }
    
    system("pause");
    return 0;            
    }
