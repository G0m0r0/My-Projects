#include <iostream>
#include <locale>
using namespace std;
int main ()
{
	setlocale (LC_ALL,"BULGARIAN");
	int k,a,b,c,d,G,J,S;
	cout<<"������������� �����  ";
	cin>>k;
	a=k%10;
	b=(k/10)%10;
	c=(k/100)%10;
	d=(k/1000)%10;
	G=d+b+a;
	J=d+c+a;
	S=G+J;
	cout<<"���� �� ������������ �����  "<<S<<endl;
	system("PAUSE");
	return 0;
	}
