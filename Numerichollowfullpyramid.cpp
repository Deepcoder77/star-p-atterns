#include<iostream>
using namespace std;
int main(){

     int n;
     cin>>n;
   
    for(int i=0;i<n;i++){
      //har row ke liye pahle spaces print karo
      for(int j=0;j<n-i-1;j++){
         cout<<" ";
      }
      //then first and last row ke liye alag se condition lagao
      if(i==0){
cout<<1;
      }
      else if(i==n-1){
         int s=1;
         for(int i=0;i<n;i++){
cout<<s<<" ";
s++;
         }
        
      }
      else{
         //then har bachi huee row ke liye pahle 1 print karna hai then odd number of
         //spaces print karne hai then row+1 print karna hai
         cout<<1;
         for(int j=0;j<2*i-1;j++){
            cout<<" ";
         }
         cout<<i+1;
      }
      cout<<endl;
    }
    
    return 0;
}