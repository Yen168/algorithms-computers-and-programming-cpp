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
    
    year+=n/365;
    n%=365;
    month+=n/30;
    day+=n%30;
    
    
    if(day>30){
    day%=30;
    month++;
    }
    
    if(month>12){
        if(month%12==0){
        month=12;
        year++;
        }
        else{
        month%=12;
        year++;
        }    
    }
  
    return;
    }
    
