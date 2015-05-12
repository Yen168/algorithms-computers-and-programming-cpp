#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>

using namespace std;

int main(){
    
    string filename;
    ifstream inFile;
    
    cout<<"Enter the name of the file containing your data points: ";
    cin>>filename;
    
    inFile.open(filename.c_str());
    
//    if(!inFile){
    if(inFile.fail()){
    cout << filename << " does not exist.\n";
  //  system("PAUSE");
  //  return 1;
    }
    
    string a="rqer"; int i=0,k,j;
    
while(!inFile.eof()){
       getline(inFile,a);
     
        cout<<"a= "<<a<<endl;
        k=a.length();
        cout<<"k= "<<k<<endl;
        if(a=="\n") cout<<"\n";
        
       i++;         
        }
    
    cout<<"Count= "<<i<<endl;
    
    system("pause");
    return 0;            
    }
