/*3.	编程实现统计100～1000之间有多少个满足下列要求的整数：
其各位数字之和是6，并把满足条件的整数输出。*/
#include<iostream>

int main()
{
	int id=6;
	for(int i=1;i<=id;i++)
		for(int j=0;j+i<=id;j++)
			for(int w=0;w<id;w++)
				if(i+j+w==id)std::cout<<i<<j<<w<<'\n';
	return 0;
}
