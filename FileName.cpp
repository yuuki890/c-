#include<iostream>
#include<String>
#include<cctype>
using namespace std;

/*
using namespace cin;��дcinʱ����std����






*/
/*
string��ʼ���ķ���
string s1�����ַ�����
string s2��s1��s2��s1�ĸ�����s2=s1
string s4��n����c����s4��ʼ��Ϊn��c��ɵ��ַ���
ʹ�õȺŵ��ǿ�����ʼ��
���õ���ֱ�ӳ�ʼ��
void test1����
operator��c����s��
assign(s,n)sǰn����ֵ
����


*/
void test1()//��ʼ���ķ���
{
	string s1 = "1233445";//������ʼ��operator
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
1��cin s1�Ĳ����к��Կո񣬻��У�ָ����������롰   hello world��������ǡ�hello����


*/
void test2()//�������
{
	string s1;
	//��ȡδ֪������string����
	while (cin >> s1)
	{
		cout << s1 << endl;

		if (!(cin >> s1))
			break;

	}
	string line;
	//getline(s1,s2)�ڶ�ȡʱ�ܱ����հ׷��ţ���s1�����뵽s2��֪���������з���Ϊֹ��s2���滻�з��ţ����Զ�ȡһ����
	while (getline(cin, line))
	{
		cout << line << endl;
		if (!(getline(cin, line)))
			break;
	}

}
void test3()//string�Ĳ�������
{/*
 s1==s2������ھͷ���true s1.compare(s2)
 s1.empty�������s1Ϊ���򷵻�true
 s.size��������s���ַ���
 s[n]���ص�n���ַ�����0��ʼ���㣬������char
  s1+s2��ƴ�Ӻ�Ľ��
  <> <=�����ַ����ֵ��е�˳����бȽϣ�����ĸ��Сд����





 */
	string s1 = "yuki";
	if (!s1.empty())
		cout << "�ⲻ�ǿ��ַ���" << endl;
	cout << "�ַ����ĳ���Ϊ" << s1.size() << endl;//�����4
	cout << "�ַ����ĳ���Ϊ" << sizeof(s1) << endl;//�����40����,stringռ��40���ֽ�
	cout << sizeof(s1[3])  << endl;


	string s2 = "noa";
	auto s3 = s1 + ' ' + s2;
	cout << s3<<endl;
	
	string s4 = "wang" + ("sui" + s3);
	cout << s4 << endl;

/*
�������+����������һ����string���͵�
string s="hello "+"world"+���߾�Ϊ�ַ���������������������
string s4 = "wang" + "sui"+s3;+�����������ָ��
string s4 = "wang" + ("sui" + s3);�����Ͳ�������
*/
}

void test4()// ����string�е��ַ����ֺ���#include<cctype>�а�����һЩ
{
	//��ʱʡ��
	/*
	isalnum��c��cΪ��ĸ��������Ϊ��
	���ַ��������жϣ���Сд�����Ƶ�
	s1[n]
	����Ϊchar
	ע��
	������
	��Χfor��d��e��
	dΪһ��������eΪһ������
	for��auto &c��s����ѭ��ʱ


	
	
	*/


}
//����
/*

int find(const string& s,int pos=0)����s��һ�γ��ֵ�λ�ã���pos��ʼ����
find��const char* c��pos��cnst
find��const char* c��pos,int n������sǰn���ַ���һ�γ��ֵ�λ��
find��c��int pos=0��c��һ�γ��ֵ�λ��
rfind�� ��ͬ�������һ�γ��ֵ�λ��
string& replace��int pos��int n��const string& str����pos��ʼ��n���ַ�Ϊ�ַ�����str 
   ����s1=qwert ��0��1����asd������asdwert
   ��0��2����asd��asdert


string& replace(int pos,int n,char* c)����һ���ַ�������









*/


void test5()
{
	string str1 = "asdfgh";
	int pos = str1.find("df");
	cout << pos << endl;
	str1.replace(0, 1, "qwe");
	cout << str1 << endl;


}
void test6()//���ֱȽϷ���
{
	string s1 = "qwert";
	string s2 = "qwert";
	if (s1 == s2)
		cout << "==�жϿ���"<<endl;
	if(s1.compare(s2)==0)//������ڷ���0        
	cout << " �����жϿ���"<<endl;


}
void test7()//�ַ���ȡ

{
	/*
	char& operator[](int n) ͨ��������������ַ�
	char& at��int n��ͨ��at��������ַ�
	���ַ�ʽ񼶼�Ǵ�0��ʼ��
	*/
	string s1 = "yuki noa";
	char c1 = s1.operator[](3);
	char c2 = s1.at(3);
	cout << c1 << endl;
	cout << c2 << endl;

	//�������i
		 


}
void test8()
{
/*
string& insert(int pos,const char* s)//�����ַ���
string& insert(int pos,const string& s)//�����ַ���

string& insert(int pos,int n,char s)//��ָ��λ�ò���n���ַ�c
string& erase��int pos��int n=npos��ɾ����pos��ʼ��n���ַ�

*/
	string s1 = "yuki noa";
	s1.insert(0,"111");
	cout << s1 << endl;
	s1.insert(0, 2, 'a');
	cout << s1 << endl;
	s1.erase(0, 5);
	cout << s1 << endl;




}
void test9()//string�Ӵ�
{/*
 string substr��int pos=0��int n=npos��const����pos��ʼ��n���ַ���ɵ��ַ���
 
 
 
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