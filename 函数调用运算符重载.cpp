#include<iostream>
using namespace std;
#include<iostream>
class myadd
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}



};
class myprint
{
public:
	void operator()(string name)
	{
		cout << name << endl;
	}


};
void MYprint(string name)
{
	cout << name <<endl;
}
void test01()
{
	myprint myPrnt;
	myPrnt("����");
	MYprint("����");
}
void test02()
{
	myadd myAdd;
	int ret = myAdd(18, 20);
	cout << ret << endl;
	//������������;
	cout << myadd()(100, 100) << endl;

}


int main()
{
	test01();

    test02();












	system("pause");
	return 0;
}