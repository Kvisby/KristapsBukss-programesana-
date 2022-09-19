#include <iostream>
using namespace std;

int main() {
  int x[3] = {10, 20, 30};


  if(x[0]>x[1] && x[0]>x[2]){
      cout<<x[0];
  }
   else if(x[1]>x[0] && x[1]>x[2]){
      cout<<x[1];
  }
   else if(x[2]>x[1] && x[2]>x[0]){
      cout<<x[2]<<endl;
   }


    if(x[0]<x[1] && x[0]<x[2]){
      cout<<x[0];
  }
   else if(x[1]<x[0] && x[1]<x[2]){
      cout<<x[1];
  }
   else if(x[2]<x[1] && x[2]<x[0]){
      cout<<x[2];
  }

}
