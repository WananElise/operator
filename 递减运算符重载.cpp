#include<iostream>
using namespace std;
class person
{
	friend ostream& operator<<(ostream& cout, person p);
public:
	
	person()
	{
		m_age = 0;
	}

	//ǰ�õݼ�
	person& operator--()
	{
		m_age--;

		return *this;
	}
	//���õݼ�

	person operator--(int)
	{
		person temp;
		m_age--;
		return temp;
	}











private:
	int m_age;
	
};

//�������������
ostream& operator<<(ostream&cout, person p)
{
	cout << p.m_age;

	return cout;

}

void test01()
{
	person p;
	cout << --p << endl;
	cout << p << endl;
	cout << p-- << endl;
	cout << p << endl;
}




int main()
{

	test01();

	person p;
	cout << --p << endl;
	cout << p << endl;
	cout << p-- << endl;
	cout << p << endl;










	system("pause");
	return 0;
}