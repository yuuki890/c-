#include<iostream>
#include<list>
#include<string>
using namespace std;
class myperson
{
public:
		string m_name;
		int age;
		int height;



};
bool mycompare(int v1, int v2)
{
	return v1 > v2;
}
void printlistperson(list<myperson>l)
{
	auto itbegin = l.begin();
	auto itend = l.end();
	while (itbegin != itend)
	{
		cout << "����Ϊ" << (*itbegin).m_name << "����Ϊ" << (*itbegin).age << "���Ϊ " << (*itbegin).height << endl;
		itbegin++;
	}


}




		
/*
˫������
C++ �е� list ��һ��˫��������������֧��������λ�ø�Ч�ز����ɾ��Ԫ�ء��� vector �� deque ��ͬ��
list ��֧��������ʣ��������м�λ�ò����ɾ��Ԫ�ط�����ָ��š�




*/

void printlist(list<int>& l)
{
	auto itbegin = l.begin();
	auto itend = l.end();//endָ��������һ��Ԫ�ص���һ��ָ�룬�����Է���
	while (itbegin != itend)
	{
		cout << *itbegin << endl;
		itbegin++;


	}
}

	/*
list.front();   // ���ʵ�һ��Ԫ��
list.back();    // �������һ��Ԫ��
// ע�⣺list��֧��������ʣ�û��operator[]��at()����
list.empty();   // ���list�Ƿ�Ϊ��
list.size();    // ����Ԫ������
list.max_size(); // ���ؿ��ܵ����Ԫ������

	*/

void test1()
{
	list<int>l1{ 1,2,3,4,5,6,7 };
	cout << "��һ��Ԫ��Ϊ" << l1.front() << endl;
	cout << " ���һ��Ԫ��Ϊ" << l1.back() << endl;
	cout << "Ԫ������Ϊ"<<l1.size()<<endl;
	cout << " ���ܵ����Ԫ������Ϊ" << l1.max_size() << endl;
		l1.reverse();
		printlist(l1);
	l1.sort(mycompare);
	printlist(l1);


}
/*list.push_back(value);    // ��ĩβ���Ԫ��
list.push_front(value);   // �ڿ�ͷ���Ԫ��
list.insert(pos, value);  // ��ָ��λ�ò���Ԫ��
list.insert(pos, n, value); // ��ָ��λ�ò���n����ͬԪ��
list.insert(pos, first, last); // ��ָ��λ�ò��뷶ΧԪ��

// ɾ��Ԫ��
list.pop_back();          // ɾ��ĩβԪ��
list.pop_front();         // ɾ����ͷԪ��
list.erase(pos);          // ɾ��ָ��λ�õ�Ԫ��
list.erase(first, last);  // ɾ��ָ����Χ�ڵ�Ԫ��
list.clear();             // ɾ������Ԫ��
list.remove(value);       // ɾ�����е���value��Ԫ��
list.remove_if(predicate); // ɾ������������Ԫ��

// �����޸�
list.resize(n);           // �ı��С
list.resize(n, value);    // �ı��С����ָ��ֵ�����Ԫ��
list.swap(other_list);    // ��������list������
list.splice(pos, other_list); // ��other_list������Ԫ���ƶ�����ǰlist��posλ��
list.splice(pos, other_list, it); // ��other_list��itָ���Ԫ���ƶ�����ǰlist��posλ��
list.splice(pos, other_list, first, last); // ��other_list��[first, last)��Χ��Ԫ���ƶ�����ǰlist��posλ��
reverse()
sort() Ĭ������
 ��������д
 bool mycompare(int v1, int v2)
{
	return v1 > v2;
}

l1.sort(mycompare)
���ڽṹ�������

*/
void test2()
{




}
bool mycobompareperson(myperson& p1, myperson& p2)
{


	return p1.height < p2.height;
}
void test7()
{
	list<myperson>l1;
	myperson p1 = { "�ŷ�" ,20,180 };
	myperson p2 = { "��s��" ,20,160 };
	myperson p3= { "�" ,20,170 };
	myperson p4 = { "����" ,20,166 };
	l1.push_back(p1);
		l1.push_back(p2);
	l1.push_back(p3);
	l1.push_back(p4);
	l1.sort(mycobompareperson);
	printlistperson(l1);// �ɹ� 
}
int main()
{
	test1();
	test7();


}