// Yen-An Chen
// Math 3300 Programming Assignment 4 - Program 1 sort4.cpp 
// This program will sort 4 numbers from smallest to largest.


#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
   
    int n1,n2,n3,n4,tmp;
   
    cout<<"Enter 4 integers: ";
    cin>>n1>>n2>>n3>>n4;
   
    if(n1>n2){
              tmp = n1;
              n1 = n2;
              n2 = tmp;          
              }
// n1<=n2
  
    if(n2>n3){
              tmp = n2;
              n2 = n3;
              n3 = tmp;  
                     
              if(n1>n2){
                        tmp = n1;
                        n1 = n2;
                        n2 = tmp;                      
                        }
              }
// n1<=n2<=n3   
   
   if(n3>n4){
             tmp = n3;
             n3 = n4;
             n4 = tmp;
            
             if(n2>n3){
                        tmp = n2;
                        n2 = n3;
                        n3 = tmp;  
                     
                        if(n1>n2){
                                  tmp = n1;
                                  n1 = n2;
                                  n2 = tmp;                      
                                  }
                        }
             
             }
  
 //n1<=n2<=n3<=n4
   
    cout<<"The sorted integers are: "<<n1<<" "<<n2<<" "<<n3<<" "<<n4<<endl;
   
    system("pause");
   
    return 0;
   
    }
