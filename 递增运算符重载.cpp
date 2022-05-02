#include<iostream>
using namespace std;
//自定义数据类型我的整型;
class myInteger
{
	friend ostream& operator<<(ostream& cout, myInteger m);
public:

	//前置++运算符
	myInteger& operator++()
	{
		my_int++;
		return *this;
	}


	//后置++运算符
	//不加&是因为不能返回局部变量的引用；
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

//创建全局函数 实现左移运算符重载
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