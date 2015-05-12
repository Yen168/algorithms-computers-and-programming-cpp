#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>

using namespace std;


int main(){
    
int n;
cout<<"How";
cin>>n;
int num;
int product=1;

for(int i=1;i<=n;i++)
{
    cout<<"Enter: ";
    cin>>num;
    
    product*=num;
    
    
    }

cout <<"the proder is"<<product<<endl;
    system("pause");
    return 0;            
    
    }


  
