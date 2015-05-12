// Yen-An Chen
// Math 3300 Programming Assignment 8 - Program 1 p8_1.cpp
// The program will sort a list of words alphabetically.

#include<string>
#include<fstream>
#include<iostream>
#include<cstdlib>

using namespace std;

void asort(char[],int);

int main(){
    
    char Copy;
    ifstream inFile,checkFile;
    ofstream outFile;
    
    string unsortfile,sortedfile;
    
    do{
        cout<<"Enter the name of the file containing the unsorted words: ";
        cin>>unsortfile;
        
        inFile.clear();
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
     
     int n1=0;
     char test;
     while(inFile.good()){
            
     inFile>>test;
     n1++;       
            }
     n1--; 
    
    inFile.close(); 
    inFile.open(unsortfile.c_str());
     
     char a[n1];
     int n=0;
     
     while(inFile.good()){
     if(n==n1)break;      
     inFile>>a[n];
     n++;      
     }
     
    asort(a,n);
    
    for(int i=0;i<n;i++){
    outFile<<a[i]<<endl;;   
    }                                       

    return 0;
    }

void asort(char a[],int b){
     
     int i=b;
     char temp;
 
       while(i>0)
       {
          for(int j=0; j<i-1; j++)
          {        
              if(toupper(a[j])>toupper(a[j+1]))
              {   
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
              }
          }
          i--;
      }
}
