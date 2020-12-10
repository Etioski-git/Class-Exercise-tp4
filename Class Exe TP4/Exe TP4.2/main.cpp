// Exercises: Classes
// Exercise 2

#include <iostream>
using namespace std;

class data{
   public:
   int nu3,nu4;
   data(int numm3,int numm4){
    nu3 = numm3; nu4 = numm4;
   cout << "numbers initialized \n";
    }
    int sum_num(){return nu3+nu4;}
};


int main (){

    int num3;
	int num4;
	cout << "Choose first number : ";
	cin >> num3;
	cout << "Choose second number : ";
	cin >> num4;


	data set_nu(num3,num4);

	cout << "The addition result on:"<< set_nu.sum_num()<<"\n";


	return 0;
}
