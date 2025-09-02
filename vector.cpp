#include<iostream>
#include<vector>
#include<string>
using namespace std;

/*vector是类模板
模板不是类和函数，而是对编译器生成的类或者函数的一份说明，编译器根据模板创造类或者函数的过程叫做实例化
可以看为是容器
能容纳大部的对象，但引用不是对象因此无法容纳，其他大部分非引用都可以作为他的对象基本数据类型，类，vector自身等
vector<vector<int>等

vector<类型>名字




*/

/*
 vector<t>v1,v1是一个空的vector 他的潜在元素为t，执行默认初始化
 vector<T>v2(V1)v2是v1的副本类型要一样
 vector<T>v2=v1;
 vector<T>V3=(n,val);创造n个值为val的
 vector<T>v4(n)v4  包含了n个重复执行了值得初始化的对象？？？？？
 vector<t>v5{a,b,c};包含了初始化个数的元素，被赋予了初始值
 vector<T>v6={a,b,c}同v5


 */

void test1()
{
	

   vector<string>v1{ "yu","ki","noa" };
   vector<string>v2(v1);
   vector<string>v3(10, "nA");
   vector<int>v4(10);
		//设置一个类型v4（10）容量，根据类型初始化

   vector<int>v5;
   //push_back()
   for (int i = 1; i <= 10; i++)
   {
	   v5.push_back(i);
   }
   cout<<v1[0] << endl;
}
void test2()//基本操作
{/*
 v.empty()
 v.size()
 v.push_back(i)
 v[n]
 v1=v2
 <>,==，！=
 v.pop_back()
 
 
 
 
 
 
 */




}
int main()
{
	test1();


}