#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a;
	cout.precision(3);
	cout<<"Input Your Geography Mark(Full Of 50):";
	cin>>a;
	cout<<"_"<<endl;
	if(a==50)
	{
		cout<<"һ֧����ĺ�ѧ��";
	}
	if(a>=40&&a<=49)
	{
		cout<<"���ѧ��������"; 
	}
	if(a==39)
	{
		cout<<"�Ͳ��ܶ��һ��?";
	}
	if(a<=38&&a>=20)
    {
		cout<<"���ͬѧ�������Ŭ��"; 
	}
	if(a>=8&&a<=19)
	{
		cout<<"???" ;
	}
	if(a==9)
	{
		cout<<"����Ц?";
	}
	if(a<=8&&a>=0)
	{
		cout<<"�ſ�"<<a<<"��,������";
	}
	if(a>=51||a<=-1)
	{
		cout<<"��ѧ���ǵ����";
	}
	return 0;
}
