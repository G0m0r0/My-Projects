#include <iostream>
#include <locale>
using namespace std;
int main ()
{
	int a,b,c;
	setlocale(LC_ALL,"BULGARIAN");
	cout<<"������ �� ������� ";
	cin>>a;
	cout<<"��� ������ ��� ";
	cin>>b;
	c=b-a;
	cout<<"������ ������� � "<<c<<endl;
	system ("PAUSE");
	return 0;
}
