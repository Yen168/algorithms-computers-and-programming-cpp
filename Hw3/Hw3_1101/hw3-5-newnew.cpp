#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>

using namespace std;
void nextday(int,int&,int&,int&);
int main(){
    char a;
    int n,month,day,year;
    do{
    
    
    cout<<"N day: ";
    cin>>n;
    cout<<"M ,D ,Y: ";
    cin>>month>>day>>year;
    
    nextday(n,month,day,year);
    
    cout<<month<<","<<day<<","<<year<<endl;
    cout<<"y/n:";
    cin>>a;
    
    }while(a!='n');
    
    cout<<month<<","<<day<<","<<year<<endl;
    system("pause");
    return 0;
    }

void nextday(int n,int& month,int& day,int& year){
    
    day+=n; 
    
    if(day%365!=0){
    year+=day/365;
    day%=365;
    }
    else{
        
        
    
    
    
    }
    
    if(day%30!=0){
    month+=day/30;
    day%=30;    
    }    

    
    return;
    }
    
