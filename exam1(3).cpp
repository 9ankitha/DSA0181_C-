#include<iostream>
using namespace std;
int main()
{
	int num,i;
	cout<<"enter the number:";
	cin>>num;
	long factorial=1;
	for(i=1;i<=num;i++)
	factorial*=i;
	cout<<"factorial:"<<factorial<<endl;
	return 0;
}

