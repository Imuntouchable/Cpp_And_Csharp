#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x, y, z;
	int k, l, m, n;
	cout<<"������� x= ";
	cin>>x;
	cout<<endl<<"������� y= ";
	cin>>y;
	z = (0.002 - exp(pow(x,y))) / ((100 - y)*(x + M_PI));
	k = z;
	l = int(z);
	m = ceil(z);
	n = floor(z);
	cout<<endl<<"������������ z= "<<z;
	cout<<endl<<"����� ����� ���������� (������) k= "<<k;
	cout<<endl<<"����� ����� ���������� (������) l= "<<l;
	cout<<endl<<"����������� � ������� ������� m= "<<m;
	cout<<endl<<"����������� � ������� ������� n= "<<n<<endl;
	cout<<endl<<"�������� ����������� ���������� ++k= "<<++k;
	cout<<endl<<"�������� ������������ ���������� l++= "<<l++;
	cout<<endl<<"�������� k ����� ���������� = "<<k;
	cout<<endl<<"�������� l ����� ���������� = "<<l<<endl<<endl;
	return 0;
}