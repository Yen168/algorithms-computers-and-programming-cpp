#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>

using namespace std;


string stringCombine(string,string,string);
int main(){
    
    string a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    
    cout<<stringCombine(a,b,c);
    cout<<endl;
    system("pause");
    return 0;
    }

string stringCombine(string a,string b,string c){

return a+b+c;    

    } 
