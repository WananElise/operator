#include<iostream>
using namespace std;
//+号运算符重载

//1.通过成员函数重载+号
//本质：person p3=p1.operator+(p2);
class person
{
public:
	int m_a;
	int m_b;
	person()
	{
		m_a = 10;
		m_b = 10;
	}


	//person operator+(person& p)
	//{
	//	person temp;
	//	temp.m_a = this->m_a + p.m_a;
	//	temp.m_b = this->m_b + p.m_b;
	//	return temp;

	//}


	~person()
	{


	}

};


person operator+(person& a, person& b);
void test01()
{
	person p1;
	person p2;
	person p3;
	p3 = p1 + p2;
	cout << p3.m_a <<"  " << p3.m_b << endl;

}





//2.通过全局函数重载+号
//本质：person p3=operator+(p1,p2);
person operator+(person& a, person& b)
{
	person temp;
	temp.m_a = a.m_a + b.m_a;
	temp.m_b = a.m_b + b.m_b;
	return temp;



}




int main()
{
	test01();


















	system("pause");
	return 0;
}