#include<iostream>
#include<vector>
#include<string>
using namespace std;

/*vector����ģ��
ģ�岻����ͺ��������ǶԱ��������ɵ�����ߺ�����һ��˵��������������ģ�崴������ߺ����Ĺ��̽���ʵ����
���Կ�Ϊ������
�����ɴ󲿵Ķ��󣬵����ò��Ƕ�������޷����ɣ������󲿷ַ����ö�������Ϊ���Ķ�������������ͣ��࣬vector�����
vector<vector<int>��

vector<����>����




*/

/*
 vector<t>v1,v1��һ���յ�vector ����Ǳ��Ԫ��Ϊt��ִ��Ĭ�ϳ�ʼ��
 vector<T>v2(V1)v2��v1�ĸ�������Ҫһ��
 vector<T>v2=v1;
 vector<T>V3=(n,val);����n��ֵΪval��
 vector<T>v4(n)v4  ������n���ظ�ִ����ֵ�ó�ʼ���Ķ��󣿣�������
 vector<t>v5{a,b,c};�����˳�ʼ��������Ԫ�أ��������˳�ʼֵ
 vector<T>v6={a,b,c}ͬv5


 */

void test1()
{
	

   vector<string>v1{ "yu","ki","noa" };
   vector<string>v2(v1);
   vector<string>v3(10, "nA");
   vector<int>v4(10);
		//����һ������v4��10���������������ͳ�ʼ��

   vector<int>v5;
   //push_back()
   for (int i = 1; i <= 10; i++)
   {
	   v5.push_back(i);
   }
   cout<<v1[0] << endl;
}
void test2()//��������
{/*
 v.empty()
 v.size()
 v.push_back(i)
 v[n]
 v1=v2
 <>,==����=
 v.pop_back()
 
 
 
 
 
 
 */




}
int main()
{
	test1();


}