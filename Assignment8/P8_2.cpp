// Yen-An Chen
// Math 3300 Programming Assignment 8 - Program 2 P8_2.cpp
// The program will encode or decode a file by Caesar cipher.

#include<string>
#include<fstream>
#include<iostream>
#include<cstdlib>

using namespace std;

void replica(string,string,char);

char encode(char,int);
char decode(char,int);

int main(){
    
    string choice_str;
    string source,result;
    char choice;
    
         
    cout << "Enter the letter corresponding to your choice: \n"
         << "A. Encode a file.\n"
         << "B. Decode a file.\n"
         << "C. Quit the program.\n";

    cin >> choice_str;   
     
    while(choice_str!="A"&&choice_str!="a"&&choice_str!="B"&&choice_str!="b"&&choice_str!="C"&&choice_str!="c"){
        
        cout << "An invaild choice has been entered.\n"
             << "Please enter your choice again: ";
        cin >> choice_str; 
        
        }
   
    choice=tolower(choice_str[0]); 
    
    switch(choice){
        
        case 'a':
            
            cout << "Enter the filename to be encoded: ";
            cin >> source;      
            cout << "The file " << source << " will be encoded and written to a new file.\n"
                 << "What would you like to call this file? ";
            cin >> result;
            
            replica(source,result,choice);
            
            break;
        
        case 'b':
            
            cout << "Enter the filename to be decoded: ";
            cin >> source;      
            cout << "The file " << source << " will be decoded and written to a new file.\n"
                 << "What would you like to call this file? ";
            cin >> result;
            replica(source,result,choice);
            
            break;
            
        default:
            
            cout << "You have chosen to quit the program. Bye Bye.\n";
            
            break;  
        }
    
    system("pause");
    return 0;
    }

void replica(string existing,string newfile,char choice){
    
     char alpha[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'}; 
     string key_str;
     char key;
     int n_key;
     
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
     
     if(choice=='a') cout << "What key letter would you like to encode with? ";
     else if(choice=='b') cout << "What key letter would you like to decode with? ";
     
     cin >>  key_str;
     
     while(key_str.length()>=2||!isalpha(key_str[0])){
        
        cout << "An invaild key has been entered.\n"
             << "Please enter a valid letter: ";
        cin >> key_str; 
        
        }
    key=tolower(key_str[0]);

    if(isupper(key)) key=tolower(key);

    for(int i=0;i<=25;i++){
        
        if(alpha[i]==key) n_key=i;
                
        }
  
     if(choice=='a'){
     
        while(inFile.get(Copy)){
            
        outFile<<encode(Copy,n_key);                                    
     
        }
     }
     
     else if(choice=='b'){
            
            while(inFile.get(Copy)){
            
            outFile<<decode(Copy,n_key);                                    
     
        }
            
            }
     
     return;
     }

char decode(char a, int n_key){
    
    char alpha[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'}; 
    int n_a, cas=0;//cas 0 low ,1 upper
   
    if(!isalpha(a)) return a;
    else{
   
    if(isupper(a)){
       
        a=tolower(a);
        cas=1;
       
        }
    
    for(int i=0;i<=25;i++){
        
        if(alpha[i]==a) n_a=i;
        
        }
   
   if(n_a-n_key<0) {
                   
                    if(cas==1) return toupper(alpha[(n_a-n_key+26)%26]);
                    else return alpha[(n_a-n_key+26)%26];                                   
   }
   
   else{ 
        if(cas==1) return toupper(alpha[(n_a-n_key)%26]);
    else return alpha[(n_a-n_key)%26];
}
    }
    }

char encode(char a, int n_key){
    
    char alpha[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'}; 
    int n_a, cas=0;//cas 0 low ,1 upper
    
    if(!isalpha(a)) return a;
    else{
        
    if(isupper(a)){
       
        a=tolower(a);
        cas=1;
       
        }
    
    for(int i=0;i<=25;i++){
        
        if(alpha[i]==a) n_a=i;
        
        }
   
        if(cas==1) return toupper(alpha[(n_a+n_key)%26]);
        else return alpha[(n_a+n_key)%26];
    
    }
    
    }
