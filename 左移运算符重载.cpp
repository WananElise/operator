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
	
	//�������ó�Ա���� ʵ�� ������������� ����� cout���Ҳ����� p<<cout;
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






//����ȫ�ֺ���ʵ�����������
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