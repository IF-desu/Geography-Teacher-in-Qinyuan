#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"������ķ���������������" ;
	cin>>a;
	b=0.5*a;
	if ( a % 2 == 0)
	{
		c = b;
	    cout <<"���ķ���Ϊ"<< c;
	}
	else
	{
	    c = b;
	    cout<<"���ķ���Ϊ" << c <<".5" ;
	}
return 0;
}
