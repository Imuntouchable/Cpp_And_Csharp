#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x, y, z;
	int k, l, m, n;
	cout<<"Введите x= ";
	cin>>x;
	cout<<endl<<"Введите y= ";
	cin>>y;
	z = (0.002 - exp(pow(x,y))) / ((100 - y)*(x + M_PI));
	k = z;
	l = int(z);
	m = ceil(z);
	n = floor(z);
	cout<<endl<<"Вещественное z= "<<z;
	cout<<endl<<"Целая часть результата (неявно) k= "<<k;
	cout<<endl<<"Целая часть результата (неявно) l= "<<l;
	cout<<endl<<"Округленное в большую сторону m= "<<m;
	cout<<endl<<"Округленное в меньшую сторону n= "<<n<<endl;
	cout<<endl<<"Значение префиксного инкремента ++k= "<<++k;
	cout<<endl<<"Значение постфиксного инкремента l++= "<<l++;
	cout<<endl<<"Значение k после приращения = "<<k;
	cout<<endl<<"Значение l после приращения = "<<l<<endl<<endl;
	return 0;
}