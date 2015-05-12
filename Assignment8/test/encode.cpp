#include<string>
#include<fstream>
#include<iostream>
#include<cstdlib>
#include<cctype>

using namespace std;

void replica(string,string,char,int);

char encode(char,int);
char decode(char,char);

int main(){
    
    char alpha[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'}; 
    
    char a,key;
    int n_key;
   
    cout<<"a: ";
    cin>>a;
    cout<<"key: ";
    cin>>key;
    
    if(isupper(key)) key=tolower(key);
  
  
    
    for(int i=0;i<=25;i++){
        
        if(alpha[i]==key) n_key=i;
        
        }

    cout<<encode(a,n_key)<<endl;
        
    system("pause");
    return 0;
        }

char encode(char a, int n_key){
    
    char alpha[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'}; 
    int n_a, cas=0;//cas 0 low ,1 upper
   
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
