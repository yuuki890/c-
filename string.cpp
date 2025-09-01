#include<iostream>
#include<String>
#include<cctype>
using namespace std;

/*
using namespace cin;在写cin时不用std：：






*/
/*
string初始化的方法
string s1（空字符串）
string s2（s1）s2是s1的副本等s2=s1
string s4（n，‘c’）s4初始化为n个c组成的字符串
使用等号的是拷贝初始化
不用的是直接初始化
void test1（）
operator（c）（s）
assign(s,n)s前n个赋值
（）


*/
void test1()//初始化的方法
{
	string s1 = "1233445";//拷贝初始化operator
	string  s2(s1);
	string s3("value");
	string  s4(8, 'a');
	string s5("value", 3);
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;

	cout << s5 << endl;


}
/*
1，cin s1的操作中忽略空格，换行，指标符例如输入“   hello world”输出的是“hello“”


*/
void test2()//输入输出
{
	string s1;
	//读取未知数量的string对象
	while (cin >> s1)
	{
		cout << s1 << endl;

		if (!(cin >> s1))
			break;

	}
	string line;
	//getline(s1,s2)在读取时能保留空白符号，将s1的输入到s2中知道遇到换行符号为止（s2不存换行符号）可以读取一整行
	while (getline(cin, line))
	{
		cout << line << endl;
		if (!(getline(cin, line)))
			break;
	}

}
void test3()//string的操作符号
{/*
 s1==s2如果等于就返回true s1.compare(s2)
 s1.empty（）如果s1为空则返回true
 s.size（）返回s的字符数
 s[n]返回第n个字符，从0开始计算，类型是char
  s1+s2是拼接后的结果
  <> <=利用字符在字典中的顺序进行比较，对字母大小写敏感





 */
	string s1 = "yuki";
	if (!s1.empty())
		cout << "这不是空字符串" << endl;
	cout << "字符串的长度为" << s1.size() << endl;//结果是4
	cout << "字符串的长度为" << sizeof(s1) << endl;//结果是40错误,string占用40个字节
	cout << sizeof(s1[3])  << endl;


	string s2 = "noa";
	auto s3 = s1 + ' ' + s2;
	cout << s3<<endl;
	
	string s4 = "wang" + ("sui" + s3);
	cout << s4 << endl;

/*
在相加是+两边至少有一个是string类型的
string s="hello "+"world"+两边均为字符串常量（字面量）错误
string s4 = "wang" + "sui"+s3;+不能添加两个指针
string s4 = "wang" + ("sui" + s3);这样就不报错了
*/
}

void test4()// 处理string中的字符各种函数#include<cctype>中包含了一些
{
	//暂时省略
	/*
	isalnum（c）c为字母或者数字为真
	对字符的类型判断，大小写，进制等
	s1[n]
	类型为char
	注意
	！！！
	范围for（d：e）
	d为一个变量，e为一个序列
	for（auto &c：s）则循环时


	
	
	*/


}
//查找
/*

int find(const string& s,int pos=0)查找s第一次出现的位置，从pos开始查找
find（const char* c，pos）cnst
find（const char* c，pos,int n）查找s前n个字符第一次出现的位置
find（c，int pos=0）c第一次出现的位置
rfind（ ）同上找最后一次出现的位置
string& replace（int pos，int n，const string& str）从pos开始的n个字符为字符串的str 
   例如s1=qwert （0，1，“asd）则变成asdwert
   （0，2，”asd）asdert


string& replace(int pos,int n,char* c)另外一个字符串定义









*/


void test5()
{
	string str1 = "asdfgh";
	int pos = str1.find("df");
	cout << pos << endl;
	str1.replace(0, 1, "qwe");
	cout << str1 << endl;


}
void test6()//两种比较方法
{
	string s1 = "qwert";
	string s2 = "qwert";
	if (s1 == s2)
		cout << "==判断可用"<<endl;
	if(s1.compare(s2)==0)//如果等于返回0        
	cout << " 函数判断可用"<<endl;


}
void test7()//字符存取

{
	/*
	char& operator[](int n) 通过【】方法获得字符
	char& at（int n）通过at方法获得字符
	两种方式窦都是从0开始的
	*/
	string s1 = "yuki noa";
	char c1 = s1.operator[](3);
	char c2 = s1.at(3);
	cout << c1 << endl;
	cout << c2 << endl;

	//结果都是i
		 


}
void test8()
{
/*
string& insert(int pos,const char* s)//插入字符串
string& insert(int pos,const string& s)//插入字符串

string& insert(int pos,int n,char s)//在指定位置插入n个字符c
string& erase（int pos，int n=npos）删除从pos开始的n个字符

*/
	string s1 = "yuki noa";
	s1.insert(0,"111");
	cout << s1 << endl;
	s1.insert(0, 2, 'a');
	cout << s1 << endl;
	s1.erase(0, 5);
	cout << s1 << endl;




}
void test9()//string子串
{/*
 string substr（int pos=0，int n=npos）const返回pos开始的n个字符组成的字符串
 
 
 
 */
	string s1 = "yuki noa";
	string s2 = s1.substr(0, 4);
	cout << s2<< endl;
}

int main()
{
	test1();
	
	test3();

	test5();
	test6();
	test7();
	test8();
	test9();

}