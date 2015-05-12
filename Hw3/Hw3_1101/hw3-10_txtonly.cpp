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
     
     char Copy;
     
     ifstream inFile,checkFile;
     ofstream outFile;
     
     inFile.open(existing.c_str());
     
     if(inFile.fail()){      
        
        cout<<existing<<" does not exist.  Please check it is in the appropriate folder.\n";
        
        return;
     }
     
     checkFile.open(newfile.c_str());

     if(!checkFile.fail()){
        
        cout<<newfile<<" already exists.  Do you wish to overwrite it? (y/n) ";
        
        char c;
        cin>>c;

        if(c!='y'){
        
        cout<<newfile<<" will not be overwritten.\n";
        
        return;
        
        }
     }
     
     outFile.open(newfile.c_str());
     
     while(inFile.get(Copy)){
            
     outFile<<Copy;                                    
     
     }
     return;
     }
