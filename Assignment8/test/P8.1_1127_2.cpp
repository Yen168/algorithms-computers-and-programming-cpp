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
     
  //  vector <char> a(1);
    
    //for(char *p=a[]; *p < a(1)+size; *p++){
        
    //}
     int i=0;
     char k;
     while(inFile.good()){
        inFile>>k;
        //inFile>>a[i];
        i++;
       // a.push_back(1);
        cout<<"1: "<<i<<k<<endl;
        }                                      
   inFile.close();
    inFile.open(unsortfile.c_str());
   while(inFile.good()){
        inFile>>k;
        //inFile>>a[i];
        i++;
       // a.push_back(1);
        cout<<"2: "<<i<<k<<endl;
        }                            

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
