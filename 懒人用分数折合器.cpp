#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"输入你的分数（１００）：" ;
	cin>>a;
	b=0.5*a;
	if ( a % 2 == 0)
	{
		c = b;
	    cout <<"您的分数为"<< c;
	}
	else
	{
	    c = b;
	    cout<<"您的分数为" << c <<".5" ;
	}
return 0;
}
