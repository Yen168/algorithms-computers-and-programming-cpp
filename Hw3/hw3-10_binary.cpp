#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

void replica(string,string);

int main(){
    string newfile, existing;
    
    
    cout<<"E: ";
    cin>>existing;
    cout<<"N: ";
    cin>>newfile;
    replica(existing,newfile);
    
   
    system("pause");
    return 0;
    }
    
void replica(string existing,string newfile){
     
     ifstream inFile;
     ofstream outFile;
     
     inFile.open(existing.c_str(),ios::binary);
     outFile.open(newfile.c_str(),ios::binary);
     char Copy;
     while(inFile.get(Copy)){
    
     outFile<<Copy;
     cout<<Copy;
     //getline(inFile,CopyStr);
     //outFile<<CopyStr<<endl;                                           
     
     }
     
     return;
     }
