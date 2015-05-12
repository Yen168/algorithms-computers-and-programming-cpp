#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>

using namespace std;

int findMax(int[],int);
int findMin(int[],int);

int main(){
    
    int n,i=0;
    cin>>n;
    cout<<endl;
    
    int a[n];
    
   do{  cout<<"["<<i<<"]: ";
        cin>>a[i];
        i++;
              
        }while(i<n);
   
   cout<<findMax(a,n)<<endl; 
   cout<<findMin(a,n)<<endl; 
    
    system("pause");
    return 0;
    }

    
int findMax(int a[],int n){
    
    int Max=0;
    
    for(int i=0;i<n;i++){
        
        if(a[i]>=Max) Max=a[i];
        
        }
    
    return Max;
    
    }
    
int findMin(int a[],int n){
    
    int Min=0;
    
    for(int i=0;i<n;i++){
        
        if(a[i]<=Min) Min=a[i];
        
        }
    
    return Min;
    
    }
