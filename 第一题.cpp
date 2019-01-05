/*1.	编程实现求1!+2!+3!+4!+5!的值。*/
#include<iostream>

size_t fun1(size_t n)
{
	return n==1?1:fun1(n-1)*n;
}
int main()
{
	size_t s= 0 ;
	for(int i=1;i<6;i++)
		s+=fun1(i);
	std::cout<<s<<std::endl;
	return 0;
}
