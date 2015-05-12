#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>

using namespace std;

int main(){
    
    int n;
    char c1,c2,tmp;
    
    do{
        cout<<"Enter a positive integer: ";
        cin>>n;
        
        }while(n<=0);
    
    cout<<"Enter the first character: ";
    cin>>c1;
    cout<<"Enter the second character: ";
    cin>>c2;
    
    cout<<endl;
    
    for(int column=1;column<=n;column++){
        
        for(int row=1;row<=n;row++){
           
           cout<<"("<<column<<","<<row<<")"<<" ";
           
        }
cout<<endl;
}
    
    
    system("pause");
    return 0;            
    }
