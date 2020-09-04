#include <iostream>

using namespace std;

int main()
{
	float HT; int nb; int TVA; float TTC;
  
	cout <<"donner le prix en HT :";
	cin>>HT;
	cout <<"donner la TVA:";
	cin>>TVA;
	cout << "donner le nombre de produit:";
	cin>>nb;

	TTC= HT*nb*TVA;

	cout<<"Le prix TTC est :"<<TTC<<endl;

	return 0;
}	
