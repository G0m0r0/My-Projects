#include <iostream>
#include <locale>
#include <cmath>
using namespace std;
int main ()
{
	setlocale (LC_ALL,"BULGARIAN");
	double a,b,m,S,mb;
	cout<<"������ �� ������ ";
	cin>>a;
	cout<<"����� ������ �� ������ ";
	cin>>b;
	cout<<"��������� �� ����� ";
	cin>>m;
	S=a*b;
	mb=S/m;
	//ceil (mb);
	cout<<"����� �������� "<<ceil(mb)<<endl;
	system ("PAUSE");
	return 0;
	}
