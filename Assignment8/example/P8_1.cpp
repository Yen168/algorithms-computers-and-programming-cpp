#include<string>
#include<fstream>
#include<iostream>
#include<cstdlib>

using namespace std;

int openInput(ifstream&,string);
int openOutput(ofstream&,string);

int main(){
    
    char Copy;
   
    ifstream inFile;
    ofstream outFile;
    
    string unsortfile,sortedfile;
    
    int k;
    do{
    cout<<"Enter the name of the file containing the unsorted words: ";
    cin>>unsortfile;
    
    k=openInput(inFile,unsortfile);
    
    if(k==0) inFile.close();
    
    }while(k==0);
        
  
     do{
     cout<<"Enter the name of the file where I should store the sorted words: ";
     cin>>sortedfile;
      
     }while(openOutput(outFile,sortedfile)==0);
    
     
    while(inFile.get(Copy)){
        
        outFile<<Copy;
        
        }                                   
    
    
    
    system("pause");
    return 0;
    }


int openInput(ifstream& opIn,string unsortfile){
     
     
     opIn.open(unsortfile.c_str());
     
     if(opIn.fail()){
                     
     cout<<unsortfile<<" does not exist.\n";                               
     opIn.close();
     return 0;
    
     }
     
     else return 1;
     }

int openOutput(ofstream& opOut,string sortedfile){
     
   
     char answer;
     
     ifstream checkFile;
     checkFile.open(sortedfile.c_str());
     
     if(!checkFile.fail()){
                           
     cout<<sortedfile<<" already exists.  Do you wish to overwrite it? (Y or N) ";
     
     cin>>answer;
                 
     if(answer!='Y')return 0;
     
     }
     
     opOut.open(sortedfile.c_str());
     
     return 1;
     }

