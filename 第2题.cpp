/*y=x*x-1     (x<0)
  y=x*x       (0≤x<1)
  y=x*x+1     (x≥1)*/

#include<iostream>

template<class A>
A fun(A x)
{
	return x*x+(x<0?-1:x>=1?1:0);
}

int main()
{
	double x;
	std::cin>>x;
	std::cout<<fun(x)<<std::endl;
	return 0;
}
