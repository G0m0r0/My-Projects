#include <iostream>
#include <locale>
using namespace std;
int main ()
{
	setlocale (LC_ALL,"BULGARIAN");
	int n,k,a,b,c,P;
	cout<<"������ ���������� ����� "; cin>>n; 
	cout<<"������ ����� ���������� ����� "; cin>>k;
	a=n%10;
	b=(n/10)%10;
	c=n/100;
	P=a*b*c;
	if(P>k) cout<<"Yes "<<P+k;
	else cout<<"No "<<k-P;
	return 0;
}
