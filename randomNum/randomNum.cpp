// randomNum.cpp : Defines the entry point for the console application.
//

/*
C++ 随机数练习
*/
#include "stdafx.h"
#include <iostream>
#include <random>
#include <ctime>
#include <iomanip>
using namespace std;

//浮点随机数
void test01() {
	default_random_engine e;
	//设置种子
	e.seed(unsigned(time(NULL)));
	//0到1
	uniform_real_distribution<double> u(0, 1);

	//
	for (int i = 0; i < 10; i++) {
		//
		//设置两位小数
		cout << fixed<< setprecision(2)<< u(e) << endl;
	}
	//恢复默认浮点输出
	cout << defaultfloat;
	cout << 0.025 << endl;
}

//整数随机数
void test02() {
	//注意包含0，9
	uniform_int_distribution<unsigned> u(0, 9);
	default_random_engine e;
	e.seed(unsigned(time(NULL)));
	for (int i = 0; i < 10; i++) {
		cout << u(e) << "   ";
	}
	cout << endl;
}

int main()
{
	test01();

	system("pause");
    return 0;
}

