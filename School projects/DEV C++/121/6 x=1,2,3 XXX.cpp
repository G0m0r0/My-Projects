#include <iostream>
#include <locale>
#include <cmath>
using namespace std;
int main ()
{
	int x,P1;
	double a,P,S,S1;
    P1=3.14;
	setlocale(LC_ALL,"Bulgarian");
cout<<"�=1 ������� ���������� �� ������������ ���������� ��� ������ a"<<endl;
	cout<<"�=2 ������ �� ������� ��� ������ a"<<endl;
	cout<<"�=3 ������ �� ���� � ������ a"<<endl;
	cout<<"������ �= "; cin>>x;
	if ((x<0)or(x>3)) cout<<"�������� �� ���������� ��������� �������� ������ ������ ��"<<endl;
   	cout<<"������ �������� �= "; cin>>a; 
     switch(x){
     	case 1: P=a*3; cout<<"���������� �� ����������� � "<<P; break;
     	case 2: S=a*a;  cout<<"������ �� �������� � "<<S; break;
     	case 3: S1=P1*pow(a,2); cout<<"������ �� ����� � "<<S1; break;
	 }
	
	        return 0;
	        
}
