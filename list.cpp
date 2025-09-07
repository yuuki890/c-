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
		cout << "名字为" << (*itbegin).m_name << "年龄为" << (*itbegin).age << "身高为 " << (*itbegin).height << endl;
		itbegin++;
	}


}




		
/*
双向链表
C++ 中的 list 是一个双向链表容器，它支持在任意位置高效地插入和删除元素。与 vector 和 deque 不同，
list 不支持随机访问，但它在中间位置插入和删除元素方面表现更优。




*/

void printlist(list<int>& l)
{
	auto itbegin = l.begin();
	auto itend = l.end();//end指向的是最后一个元素的下一个指针，不可以访问
	while (itbegin != itend)
	{
		cout << *itbegin << endl;
		itbegin++;


	}
}

	/*
list.front();   // 访问第一个元素
list.back();    // 访问最后一个元素
// 注意：list不支持随机访问，没有operator[]和at()方法
list.empty();   // 检查list是否为空
list.size();    // 返回元素数量
list.max_size(); // 返回可能的最大元素数量

	*/

void test1()
{
	list<int>l1{ 1,2,3,4,5,6,7 };
	cout << "第一个元素为" << l1.front() << endl;
	cout << " 最后一个元素为" << l1.back() << endl;
	cout << "元素数量为"<<l1.size()<<endl;
	cout << " 可能的最大元素数量为" << l1.max_size() << endl;
		l1.reverse();
		printlist(l1);
	l1.sort(mycompare);
	printlist(l1);


}
/*list.push_back(value);    // 在末尾添加元素
list.push_front(value);   // 在开头添加元素
list.insert(pos, value);  // 在指定位置插入元素
list.insert(pos, n, value); // 在指定位置插入n个相同元素
list.insert(pos, first, last); // 在指定位置插入范围元素

// 删除元素
list.pop_back();          // 删除末尾元素
list.pop_front();         // 删除开头元素
list.erase(pos);          // 删除指定位置的元素
list.erase(first, last);  // 删除指定范围内的元素
list.clear();             // 删除所有元素
list.remove(value);       // 删除所有等于value的元素
list.remove_if(predicate); // 删除满足条件的元素

// 其他修改
list.resize(n);           // 改变大小
list.resize(n, value);    // 改变大小并用指定值填充新元素
list.swap(other_list);    // 交换两个list的内容
list.splice(pos, other_list); // 将other_list的所有元素移动到当前list的pos位置
list.splice(pos, other_list, it); // 将other_list中it指向的元素移动到当前list的pos位置
list.splice(pos, other_list, first, last); // 将other_list中[first, last)范围的元素移动到当前list的pos位置
reverse()
sort() 默认升序
 可以这样写
 bool mycompare(int v1, int v2)
{
	return v1 > v2;
}

l1.sort(mycompare)
用于结构体的排序

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
	myperson p1 = { "张飞" ,20,180 };
	myperson p2 = { "张s三" ,20,160 };
	myperson p3= { "李华" ,20,170 };
	myperson p4 = { "丁真" ,20,166 };
	l1.push_back(p1);
		l1.push_back(p2);
	l1.push_back(p3);
	l1.push_back(p4);
	l1.sort(mycobompareperson);
	printlistperson(l1);// 成功 
}
int main()
{
	test1();
	test7();


}