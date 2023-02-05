#include<iostream>
using namespace std;
int main(){

     int n;
     cin>>n;
   
    for(int i=0; i<n; i=i+1) {
     
    
     for(int j=0;j<n-i-1;j++){
        cout<<" ";
     }
     if(i==0){
         cout<<"*";
      }
      else{
   cout<<"*";
     for(int k=0;k<2*i-1;k++){
      cout<<" ";
     }
     cout<< "*";
      }
     cout<<endl;
     
     }
    for(int i=0; i<n; i=i+1) {
     
    
     for(int j=0;j<i;j++){
        cout<<" ";
     }
     if(i==n-1){
         cout<<"*";
      }
      else{
   cout<<"*";
     for(int k=0;k<(n-2*i)+1;k++){
      cout<<" ";
     }
     cout<<"*";
      }
     cout<<endl;
    }
    return 0;
}