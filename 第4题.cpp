/*4.	输入一个字符串，统计字符串中大写字母、小写字母，数字及其他字符的个数，并把字符串逆序存储输出*/
#include<iostream>

size_t strlen(const char *str)
{
    for(size_t s=0,i=0;str[i];i++,s++);
    return s;
}


void hh(char *st)
{
	int a[3]={0},len=strlen(st);
	for(int i=0;i<=len;i++)
	('A'<st[i]&&'Z'>=st[i])?a[0]+=1:('a'<=st[i]&&'z'>=st[i])?a[1]+=1:('0'<=st[i]&&'9'>=st[i])?a[2]+=1:i;
	std::cout<<"大写"<<a[0]<<"\t小写"<<a[1]<<"\t数"<<a[2]<<"\t其他"<<len-a[0]-a[1]-a[2]<<std::endl;
}

int main()
{	
	size_t len;
	std::cout<<"字符串长度=";
	std::cin>>len;
	char *str=new char[len];
	std::cout<<"输入字符串";
	std::cin>>str;
	hh(str);
	delete[] str;
	return 0;
}
