#include<fstream>
#include<string>
#include<cmath>
#include<iomanip>
#include<cstdlib>
#include<iostream>

using namespace std;

int main(){

int a=0, i=2;
while(i<10){
            
            while(a<=0){
                        
                        a=i-a;
                        
                        }
            
            a=-a;
            i=abs(a);
             cout<<i<<endl;
            }


   
 
    system("pause");
    return 0;
    
    }
