#include <iostream>

using namespace std;

int main()
{


	int A;
	int B;
	int C;
	int box=0;;
	int box2=0;

	cout<< "A=" <<A<<endl;
	cout<< "B=" <<B<<endl;
	cout<< "C=" <<C<<endl;
	cout <<endl;

	box = C;
	box2=B;
	C=A;
	B=C;
	C=box2;
	A=box;

	cout<< "A=" <<A<<endl;
	cout<< "B=" <<B<<endl;
	cout<<"C="<<C<<endl;


	return 0;

}