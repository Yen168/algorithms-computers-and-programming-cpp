#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>

using namespace std;
void nextday(int,int&,int&,int&);
int main(){
    
    int n,month,day,year;
    cout<<"N day: ";
    cin>>n;
    cout<<"M ,D ,Y: ";
    cin>>month>>day>>year;
    nextday(n,month,day,year);
    
    cout<<month<<","<<day<<","<<year<<endl;
    
    system("pause");
    return 0;
    }

void nextday(int n,int& month,int& day,int& year){
    
    day=(n+day)%30;
    if(day==0) day++;
    
    month+=(n+day)/30;
    year+=month/12;
    month%=12;
    if(month==0)month++;
    
    return;
    }
    
