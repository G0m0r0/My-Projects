#include <iostream>
#include <locale>
using namespace std;
int main ()
{
	setlocale (LC_ALL,"BULGARIAN");
    char a,b;
	cout<<"������ ������ 1= ";
    cin>>a;
	cout<<"������ ������ 2= ";
	cin>>b;
	//��������� �� �� ��������� ASCII
	if(a>b){
		        cout<<"������ "<<a<<" � �� �����"<<endl; 
	        }
	if(b>a){
		        cout<<"������ "<<b<<" � �� �����"<<endl;
	        }      
	system ("PAUSE");
	return 0;        
	}
