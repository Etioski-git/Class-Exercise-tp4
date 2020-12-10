// Classes
// Exercise TP 1

#include <iostream>
using namespace std;

class CRectangle {

   public:
   int a,b;
   int area(){return a*b;}

};



int main () {

  CRectangle rect;
  cout <<"\nThe Area Of A Rectangle"<< endl;
  cout<<"\nEnter the length of rectangle:";
  cin>>rect.a;
  cout<<"\nEnter the breadth of rectangle:";
  cin>>rect.b;
  cout <<"\nThe area of a rectangle is";
  cout <<"\nArea:"<< rect.area();


  return 0;
}
