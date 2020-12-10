// Classes
// Exercise TP 3

#include <iostream>
using namespace std;

class Imagin{
	public:

	double j,k;

	Imagin(double nj, double nk){

	j=nj;k=nk;}
};

int main(){

	double nu1,nu2;
	cout << "First number \n";
	cout << "Choose the real part:";
	cin >> nu1;
	cout << "Choose the imaginary part:";
	cin >> nu2;
	Imagin number1(nu1,nu2);
	cout << "\nSecond number \n";
    double nu3,nu4;
	cout << "Choose the real part:";
	cin >> nu3;
	cout << "Choose the imaginary part:";
	cin >> nu4;

	Imagin number2(nu3,nu4);

	double real;

    real = number1.j +number2.j;

    double imagin;

    imagin = number2.k + number1.k;

    cout << "\nthe total  sum of the real parts is " << real << "\n";
    cout << "the total sum of the imaginary parts is " << imagin;

    return 0;
}

