#include<iostream>
using namespace std;
class person
{

public:
	person(int age)
	{
		m_age = new int(age);
	}

	~person()//����ֶ����ڴ��ظ��ͷţ�
	{
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}

	}
	//������Ա����ʵ�ָ�ֵ���������
	person& operator=(person &p)
	{
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}
		m_age = new int(*p.m_age);
		return *this;
	}

	int *m_age;
};




void test01()
{
	person p(18);
 
	person p1(20);
	p1 = p;
	person p3(20);
	cout << "p������Ϊ��" << *p.m_age << endl;
	cout << "p1������Ϊ��" << *p1.m_age << endl;

}


int main()
{


	test01();
	










	system("pause");
	return 0;
}