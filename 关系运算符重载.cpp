#include<iostream>
using namespace std;
#include<string>
class person
{
public:
	person(string name, int age)
	{
		m_name = name;
		m_age = age;
	}

	bool operator==(person p)//������Ա��������==��;
	{
		if (this->m_name == p.m_name && this->m_age == p.m_age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool operator!=(person p)//������Ա�������أ�=��;
	{
		if (this->m_name == p.m_name && this->m_age == p.m_age)
		{
			return false;
		}
		else
		{
			return true;
		}
	}

private:

	string m_name;
	int m_age;

};
void test01()
{
	person p1("����", 18);
	person p2("����", 18);
	if (p1 == p2)
	{
		cout << "p1��p2����ȵģ�" <<endl;
	}
	else 
	{
		cout << "p1��p2�ǲ���ȵģ�" <<endl;
	}
	if (p1 != p2)
	{
		cout << "p1��p2�ǲ���ȵģ�" << endl;
	}
	else
	{
		cout << "p1��p2����ȵģ�" << endl;
	}
}



int main()
{


	test01();







	system("pause");
	return 0;
}