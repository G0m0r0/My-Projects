#include <iostream>
#include <locale>
using namespace std;
int main ()
{
	setlocale (LC_ALL,"BULGARIAN");
	long int nk,ng,pk,pg,ok,og,a;
	cout<<"������� ���������� �� ";
	cin>>nk;
	cout<<"������� ���������� �� ";
	cin>>ng;
	cout<<"��������� ���������� �� ";
	cin>>pk;
	cout<<"��������� ���������� �� ";
	cin>>pg;
	a=(ng-pg)/1000;
    ok=(nk-pk)+a;
    if (pg>ng){
    	         og=(pg-ng)%1000;
    	         cout<<"�������� �� "<<ok<<endl<<"�������� �� "<<og<<endl;  
	          }
	og=(ng-pg)%1000;         
	cout<<"�������� �� "<<ok<<endl<<"�������� �� "<<og<<endl;
	system ("PAUSE");
	return 0;
}
