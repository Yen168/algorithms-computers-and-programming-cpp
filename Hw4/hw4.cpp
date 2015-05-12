#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

bool checkpass(string);

int main(){
    
    while(1){
    string pw;
    cin>>pw;
    
    if(checkpass(pw))cout<<"Good\n";
    else cout<<"No Good\n";
}
    system("pause");
    return 0;
    }

bool checkpass(string pw){
     
     if(pw.length()<7||pw.length()>17) return false;
     
     int num=0, lower=0, upper=0, spe=0; 
     
     for(int i=0;i<pw.length();i++){
           
     if(isdigit(pw.at(i))) num++;
     else if(isalpha(pw.at(i))){
          
          if(isupper(pw.at(i)))upper++;
          else lower++;
          
          }  
     else spe++;      
           
     }
     
     if(spe!=0||lower==0||upper==0||num==0) return false;
     else return true;
     
     } 
    
