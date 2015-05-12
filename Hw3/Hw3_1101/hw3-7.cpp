#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>

using namespace std;
void openInput(ifstream&);
int main(){
    
    ifstream xfile;
    openInput(xfile);
    
    system("pause");
    return 0;
    }

void openInput(ifstream& opIn){
     
     string filename;
     
     cout<<"Enter a filename: ";
     cin>>filename;
     
     opIn.open(filename.c_str());
     if(opIn.fail()){
                     
     cout<<filename<<" does not exist. Please check it is in the appropriate folder.\n";                               
     }
     
     else cout<<filename<<" has opened successfully.\n"; 
     return;
     }  
