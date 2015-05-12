#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

string casechange(string);

int main(){
    
    string change;
    
    cout<<"String: ";
    cin>>change;
    
    cout<<casechange(change);
    
   
    system("pause");
    return 0;
    }

string casechange(string a){
       
       for(int i=0;i<a.length();i++){
       
       if(isupper(a.at(i))) a.at(i)=tolower(a.at(i));     
             else a.at(i)=toupper(a.at(i));           
       }
       
       return a;   
       
       }
