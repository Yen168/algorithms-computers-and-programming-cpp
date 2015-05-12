#include<iostream>
#include<fstream>
#include<cstdlib>
#include<vector>

using namespace std;

int main(){
    
    vector <double> score;
    
    ifstream inFile;
    inFile.open("scores.txt");    
    
    double k,sum=0;
    
    while(inFile.good()){
    inFile>>k;
    score.push_back(k);
    sum+=k;   
    }
    
    int i=score.size();
    double temp;
 
       while(i>0)
       {
          for(int j=0; j<i-1; j++)
          {        
              if(score.at(j)>score.at(j+1))
              {   
                temp=score.at(j);
                score.at(j)=score.at(j+1);
                score.at(j+1)=temp;
              }
          }
          i--;
      }
    
    cout<<"The average of the doubles is "<<sum/score.size()<<endl;
    cout<<"The maximum double is "<<score.back()<<endl;
    cout<<"The minimum double is "<<score.front()<<endl;
    
      
    system("pause");
    return 0;
    }
