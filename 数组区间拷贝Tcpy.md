# 区间拷贝Tcpy(原创)
***
>* 不含强制转换

 ``` C
template<class A,class B>
void Tcpy(A *a1,B *a2,size_t s1,size_t s2,size_t e)
{
	for(int i=0;i<e;i++)*(a1+s1+i)=/*static_cast<typeid(*a1)>*/*(a2+s2+i);
}
```

>调用方法
	> Tcpy()//不能用于const

***
* 区间拷贝:附带 强制转换

``` C
template<class T,class A,class B>
void Tcpy(A *a1,B *a2,size_t s1,size_t s2,size_t e,C var_a1)
{
	for(int i=0;i<e;i++)*(a1+s1+i)=(T)*(a2+s2+i);
}
```
	
>调用方法
	> Tcpy<typename>()//不能用于const
