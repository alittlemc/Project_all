#include<iostream>
using namespace std;

size_t strlen(char* arr)
{
    size_t i=0;
    for(;arr[i];i++);
    return i;
}

int hhs(char* arr)
{
    size_t len = strlen(arr);
    for(int i=0,j=len-1;i<len;i++,j--)
        if(arr[i]!=arr[j])
			return 1;
        return 0;
}

int main()
{
    size_t len;
	cout<<"字符串的长度=";
    cin>>len;
    char *a = new char[len];
	cout<<"输入字符串\n";
	cin>>a;
	char *pr = hhs(a)==0?"是":"不是";
    cout<<pr<<endl;
	delete[] a;
    return 0;
}
