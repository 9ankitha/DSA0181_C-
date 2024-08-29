#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"enter the character:";
	cin>>ch;
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		cout<<"character is vowel"<<endl;
	}
	else
	{
		cout<<"character is consonat"<<endl;
	}
	return 0;
}
