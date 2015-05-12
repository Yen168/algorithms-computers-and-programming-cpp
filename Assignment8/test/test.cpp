#include<cstdlib>
#include<string>
#include<iostream>

using namespace std;

int main(){
    
    string k;
    cin>> k;
    
   // int i=0;
//    
//    while(k[i]){
//        cout<<k[i]<<endl;
//        i++;
//        }
//    
//    if(k.size()>=2)cout<<"More Two word."<<endl;
//    
//    if(k.length()==3)cout<<"Three word."<<endl;
     
    while(k.length()>=2||!isalpha(k[0])){
        
        cout << "An invaild choice has been entered.\n"
             << "Please enter your choice again: ";
        cin >> k; 
        
        }
        
        
    
    
    system("pause");
    
    return 0;
    }
