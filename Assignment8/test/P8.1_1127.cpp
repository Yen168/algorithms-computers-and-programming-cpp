#include<string>
#include<fstream>
#include<iostream>
#include<cstdlib>

using namespace std;


int main(){
    
    char Copy;
    ifstream inFile,checkFile;
    ofstream outFile;
    
    string unsortfile,sortedfile;
    
    do{
        cout<<"Enter the name of the file containing the unsorted words: ";
        cin>>unsortfile;
        inFile.clear();
        //cout<<inFile.fail()<<endl;
        inFile.open(unsortfile.c_str());
        
        if(inFile.fail()){
        cout<<unsortfile<<" does not exist.\n";
        }
            
        }while(inFile.fail());
     
     
     do{
     
     cout<<"Enter the name of the file where I should store the sorted words: ";
     cin>>sortedfile; 
     checkFile.clear();
     checkFile.close();
       
     checkFile.open(sortedfile.c_str());
    
     if(!checkFile.fail()){    
        char c;
        cout<<sortedfile<<" already exists.  Do you wish to overwrite it? (Y or N) ";   
        cin>>c; 
            if(c=='Y') break;     
        } 
        
    }while(!checkFile.fail());   
    
     outFile.open(sortedfile.c_str());
     
     
     
    while(inFile.get(Copy)){
        
        outFile<<Copy;
        
        }                                   
    
    
    
    system("pause");
    return 0;
    }

