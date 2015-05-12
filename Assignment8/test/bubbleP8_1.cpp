#include<string>
#include<fstream>
#include<iostream>
#include<cstdlib>
#include<cctype>

using namespace std;

void bubblesort(char[],int);

int main(){
    
    char sort[14]={'f','*','0','B','F','%','A','c','2','b','7','5','a','C'};
    char sort2[14]={'f','g','G','B','F','k','A','c','J','b','i','j','a','C'};
    int num=0,cha=0,spe=0;
    
    bubblesort(sort2,14);
    
    
    int n=0;
    while(n<=13){
    cout<<sort2[n]<<" ";
    n++;
    }
    system("pause");
    return 0;
    }

void bubblesort(char a[],int b){
     
     int i =b;
     int j;
     int temp;
 
       while(i > 0)
       {
          for(j = 0; j < i - 1; j++)
          {     
              if(islower(a[j])){
                
                if(a[j] <= a[j + 1]){   
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
              }                
                                
                                
              }
              else{  
              if(a[j] > a[j + 1])
              {   temp = a[j];
                  a[j] = a[j + 1];
              a[j + 1] = temp;
              }}
          }
          i--;
      }
     
     
     
     }

//void bubblesort(char a[],int b){
//     
//     int i =b;
//     int j;
//     int temp;
// 
//       while(i > 0)
//       {
//          for(j = 0; j < i - 1; j++)
//          {     
//                
//              if(a[j] > a[j + 1])
//              {   temp = a[j];
//                  a[j] = a[j + 1];
//              a[j + 1] = temp;
//              }
//          }
//          i--;
//      }
//     
//     
//     
//     }
