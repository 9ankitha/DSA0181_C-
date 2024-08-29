#include<iostream>
using namespace std;
bool isprime(int num)
{
	if(num<=1)
	return false;
	for(int i=2;i*i<=num;i++)
	{
		if(num%i==0)
		return false;
	}
	return true;
}
int main()
{
	int num;
	cout<<"enter the number:";
	cin>>num;
	if(isprime(num))
	cout<<num<<"is prime";
	else
	cout<<num<<"is not prime";
	return 0;
}
