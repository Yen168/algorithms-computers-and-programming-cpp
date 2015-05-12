#include<string>
#include<fstream>
#include<iostream>
#include<cstdlib>
#include<vector>

using namespace std;

void sort(char a[],int n);

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
     
     char aa[n1];
     int n=0;
    while(inFile.good()){
     if(n==n1)break;      
     inFile>>aa[n];
     n++;       
     cout<<"2: "<<aa[n-1]<<endl;  
            }
     
     
     //int n=0;
//     char a[1],atest;
//     char* p=&a[0];
//     
//     
//     while(inFile.good()){
//        
//        inFile>>*(p+n); 
//        n++;
//        cout<<"1: "<<n-1<<" "<<*(p+n-1)<<endl;
//        }   
                                           

    system("pause");
    return 0;
    }

void sort(char a[], int n){
    
    int i=n,j;
    int tmp;
    
    while(i>0){
        
        for(int j=0; j<i-1;j++){
            
            if (a[j]>a[j+1]){
                
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
                
                }
            
            i--;
            }
        
        
        }
    
    
    
    }
