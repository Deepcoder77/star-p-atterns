#include<iostream>
using namespace std;
int main(){

     int n;
     cin>>n;
     for(int i=0; i<n; i=i+1) {
      //first row or last row -> print n *
      if(i == 0  || i == n-1 ){
          for(int j=0; j<n; j++) {
              cout << "* ";
          }
      }
      else {
          //remainging middle rows
          //first star
          cout << "* ";
          //spaces
          for(int k=0; k< n-2; k=k+1){
              cout << "  ";
          }
          //last star
          cout << "* ";
      }
      cout << endl;
     }
    return 0;
}