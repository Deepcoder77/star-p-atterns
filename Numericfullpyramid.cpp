#include<iostream>
using namespace std;
int main(){

     int n;
     cin>>n;
   
    for(int i=0;i<n;i++){
      for(int j=0;j<n-i-1;j++){
         cout<<" ";
      }
      int s=i+1;
      for(int j=0;j<i+1;j++){
         cout<<s;
         s++;
      }
      int d=i;
      for(int j=0;j<i;j++){
cout<<2*d;
d--;
      }

      cout<<endl;
    }
    return 0;
}