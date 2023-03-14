#include <iostream>
using namespace std;

int n1, n2;

int main(){
	
	int n3, n4;
	int res, res1, res2;
	
	n1=11;
	n2=3;
	n3=5;
	n4=2;
	
	res=n1+n2+n3+n4;
	res1=n1/n2;
	res2=n1%n2;
		
	cout << "Soma de todas as variaveis: " << res <<"\n\n";	
	
	cout << "Divisao: " << res1 << "\n";
	cout << "Divisao: " << res2 << "\n";
	
	return 0;
}
