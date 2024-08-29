#include<iostream>
using namespace std;
int absolute(int num)
{
	return(num<0)?-num:num;
}
	double absolute(double num)
	{
		return(num<0)?-num:num;
	
}
int main()
{
	int intNum=-10;
	double doubleNum=-20.5;
	std::cout<<"absoulute value of interger"<<intNum<< "is" <<absolute(intNum)<<std::endl;
	std::cout<<"absoulte vaule of floating_point"<<doubleNum<< "is" <<absolute(doubleNum)<<std::endl;
	return 0;
}
