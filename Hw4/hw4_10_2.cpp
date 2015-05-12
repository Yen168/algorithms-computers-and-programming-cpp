#include<iostream>
#include<fstream>
#include<cstdlib>
#include<vector>

using namespace std;

int main(){
    
    vector <double> score;
    
    ifstream inFile;
    inFile.open("scores.txt");    
    
    //int n=0;
    double k;
    while(inFile.good()){
    inFile>>k;
    score.push_back(k);    
    //inFile>>score.at(n);    
   // n++;    
    }
    //cout<<n<<endl;
    cout<<score.size()<<endl;
    
    
      
    system("pause");
    return 0;
    }
