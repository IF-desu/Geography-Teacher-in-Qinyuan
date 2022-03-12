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
		cout<<"一支独秀的好学生";
	}
	if(a>=40&&a<=49)
	{
		cout<<"这个学生还不绰"; 
	}
	if(a==39)
	{
		cout<<"就不能多扣一分?";
	}
	if(a<=38&&a>=20)
    {
		cout<<"这个同学还需继续努力"; 
	}
	if(a>=8&&a<=19)
	{
		cout<<"???" ;
	}
	if(a==9)
	{
		cout<<"王明笑?";
	}
	if(a<=8&&a>=0)
	{
		cout<<"才考"<<a<<"分,进厂吧";
	}
	if(a>=51||a<=-1)
	{
		cout<<"您学的是地里吧";
	}
	return 0;
}
