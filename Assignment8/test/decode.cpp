#include<string>
#include<fstream>
#include<iostream>
#include<cstdlib>
#include<cctype>

using namespace std;

void replica(string,string,char,int);


char decode(char,int);

int main(){
    
    char alpha[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'}; 
    string ak;
    char a,key;
    int n_key;
   
    cout<<"ak: ";
    cin>>ak;
    cout<<"key: ";
    cin>>key;
    
    if(isupper(key)) key=tolower(key);
  
  
    
    for(int i=0;i<=25;i++){
        
        if(alpha[i]==key) n_key=i;
        
        }

 for(int i=0;i<ak.length();i++){
    cout<<ak.at(i)<<" ";
    }

cout<<endl;
    for(int i=0;i<ak.length();i++){
    cout<<decode(ak.at(i),n_key)<<" ";
    }
  cout<<endl;      
    system("pause");
    return 0;
        }

char decode(char a, int n_key){
    
    char alpha[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'}; 
    int n_a, cas=0;//cas 0 low ,1 upper
   
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
