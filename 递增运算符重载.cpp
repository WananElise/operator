#include<iostream>
using namespace std;
//�Զ������������ҵ�����;
class myInteger
{
	friend ostream& operator<<(ostream& cout, myInteger m);
public:

	//ǰ��++�����
	myInteger& operator++()
	{
		my_int++;
		return *this;
	}


	//����++�����
	//����&����Ϊ���ܷ��ؾֲ����������ã�
	myInteger operator++(int)
	{
		myInteger temp = *this;
		my_int++;
		return temp;
	}



	myInteger()
	{
		my_int = 0;
	}




private:
	int my_int;
};

//����ȫ�ֺ��� ʵ���������������
ostream& operator<<(ostream& cout, myInteger m)
{
	cout << m.my_int ;

	return cout;

}
void test01()
{
	myInteger m;
	cout << m++<< endl;
	cout << m++ << endl;
	cout << m << endl;
}


int main()
{


	test01();










	system("pause");
	return 0;
}