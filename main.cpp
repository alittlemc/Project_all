#include<iostream>
#include<algorithm>
#include<cstdlib>

template<class A>
inline size_t Tsize(A &a){return (sizeof(a)/sizeof(a[0])); }

template<class A>
size_t fun(A *a1,A x)
{
    int len=Tsize(a1);
    for(int s=0,e=len-1;s<len/2+len%2==0?0?1;s++,e--)
    {
        if(a1[s]>x)
            return s;
        if(a1[e]<x)
            return e;
    }
}
template<class A>
A *fun(A *arr,A n,size_t m)
{
    A *p=new A[];
    return ;
}

int main(int argc, char const *argv[])
{
    int arr[]={1,3,4,0,3,6,8,5,4};
    size_t len=sizeof(arr)/sizeof(int);
    std::sort(arr,arr+len);//自带排序


    for(size_t i=0;i<len;i++)
        std::cout<<arr[i];
    std::cout<<std::endl;

    system("pause");
    return 0;
}
