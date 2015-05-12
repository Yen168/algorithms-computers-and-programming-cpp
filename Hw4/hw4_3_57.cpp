#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
#include<cctype>
#include<vector>

using namespace std;


int main(){
    
 vector <char> list(1);
 list[0]='1';
 list.push_back('2');
 list.push_back('3');
 list.push_back('4');
 list.push_back('5');
 list.push_back('6');
 list.push_back('7');
 list.push_back('8');
 list.push_back('9');
 list.push_back('a');
 list.push_back('b');
 list.push_back('c');

 list.erase(list.begin()+2,list.begin()+7);
  cout<<"size: "<<list.size()<<endl; 
 for(int i=0;i<list.size();i++){
 
  cout<<list.at(i)<<endl;       
         
         
         
 }
 

    system("pause");
    return 0;
    }

