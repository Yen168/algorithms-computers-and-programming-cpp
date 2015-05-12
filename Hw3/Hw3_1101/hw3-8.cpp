#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>

using namespace std;
void openOutput(ofstream&);
int main(){
    
    ofstream xfile;
    openOutput(xfile);
    
    system("pause");
    return 0;
    }

void openOutput(ofstream& opOut){
     
     string filename;
     char answer;
     
     cout<<"Enter a filename to be opened for output: ";
     cin>>filename;
     
     ifstream checkFile;
     checkFile.open(filename.c_str());
     
     if(!checkFile.fail()){
                           
     cout<<filename<<" already exists. Do you wish to overwrite it? (y/n) ";
     
     cin>>answer;
                 if(answer!='y'){
                 cout<<filename<<" will not be overwritten.\n";
                  return;
                  }
     }
     
     opOut.open(filename.c_str());
     
     return;
     }  
