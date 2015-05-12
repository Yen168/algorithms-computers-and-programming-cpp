// Yen-An Chen
// Math 3300 Programming Assignment 6 - Program 2 square.cpp 
// The program will create a file containing a square consisting of symbols of the user's choice.

#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>

using namespace std;

char charprint(int, int, int, char, char);

int main(){
    
    int n;
    char c1,c2,choice;
    string filename;
    ofstream outFile;
    ifstream checkFile;
    
    do{
    
    do{
        cout<<"Enter a positive integer: ";
        cin>>n;
        
        }while(n<=0);
    
    cout<<"Enter the first character: ";
    cin>>c1;
    cout<<"Enter the second character: ";
    cin>>c2;
    
    for(int column=1;column<=n;column++){
        for(int row=1;row<=n;row++){
                cout<<charprint(n,column,row,c1,c2);
                }
      cout<<endl;  
        }
    
    cout<<"Run the program again? Enter y if yes, anything else if no. :";
    cin>>choice;
    
    }while(choice=='y');
    
    cout << "Enter a filename to be opened for output: ";
    cin >> filename;

    checkFile.open(filename.c_str());

    if(!checkFile.fail())
    {
        cout << filename << " already exists. Do you wish to overwrite it? (y/n) ";
        char c;
        cin >> c;

        if(c!='y')
        {
            cout << filename << " will not be overwritten.\n";
            system("pause");
            return 0;
        }
    }

    outFile.open(filename.c_str());
     
    for(int column=1;column<=n;column++){
        for(int row=1;row<=n;row++){
                outFile<<charprint(n,column,row,c1,c2);
                }
      outFile<<endl;  
        }
  
    system("pause");
    return 0;            
    }

char charprint(int n, int column, int row, char c1, char c2){
    
    int tmp;
    
    if(column%2==0){
      tmp=c1;
      c1=c2;
      c2=tmp;                                
    } 
    
    if(row==1||row==n||column==1||column==n){
               if(row%2!=0) return c1;
               else return c2;
               }
            
    else return ' ';

    }
