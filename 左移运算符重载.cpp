#include<iostream>
using namespace std;

class person
{

	friend ostream& operator<<(ostream& cout, person& p);
public:

	person(int a, int b)
	{
		m_a = a;
		m_b = b;

	};
	
	//不能利用成员函数 实现 左移运算符重载 会出现 cout在右侧的情况 p<<cout;
	//void operator<<(ostream&cout)
	//{
	//	cout << m_a << m_b << endl;
	//
	//}

	//


private:

	int m_a;
	int m_b;




};
ostream& operator<<(ostream& cout, person& p);
void test01()
{
	person p(10, 10);

	cout << p << endl;
}






//创建全局函数实现运算符重载
ostream& operator<<(ostream&cout, person& p)
{
	cout << p.m_a << " " << p.m_b << endl;

	return cout;

}



int main()
{


	test01();














	system("pause");
	return 0;
}