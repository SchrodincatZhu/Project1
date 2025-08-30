#include<iostream>
using namespace std;

int main()
{
	//cout << "Hello,World!" << endl;


	/*int a;
	a = 10;
	cout << a << endl;
	a = 20;
	cout << a << endl;*/


	/*int a = 10;
	float b = 3.14f;
	double c = 3.1111;
	char d = 'F';
	bool e = false;
	bool f = 1.22;

	cout  << a << "\t" << b << "\t" << c << "\t" << d<<"\t" << e << "\t" << f << endl;*/


	/*int a = 10;
	int b = 20;
	int c = a + b;
	cout << c << endl;*/


	//int a = 10;
	//float b = 20.22;
	//float c = a + b;     //需要注意输出的结果是什么，是整数还是小数
	//cout << c << endl;


	//const int a= 3;     //定义常量一定要赋值
	//cout << a << endl;


	//int a;
	//int b;
	//cin >> a>> b;      //从键盘输入一个整数赋值给a
	//cout << a << "\t"<<b << endl;


	//bool is = 1 != 1;
	//cout << is;


	//bool is=1 ==1 && 2 < 3;       //&& 逻辑与，两个条件都成立，结果才为真
	//cout << is;


	//bool is = 1 != 1 || 2 < 3;     //||逻辑或，两个条件有一个成立，结果就为真
	//cout << is;


	//bool is = !1;         //!逻辑非，取反
	//cout << is;


	//int value1 = 10;
	//int value2 = value1 >>3 ;  //右移运算符，低位丢弃，高位补0，相当于除于2的n次方
	//cout << value2;


	/*int hp = 10;*/

	/*if(hp>0)
		{
		cout << "continue" << endl;

	}
	else
	{
		cout << "game over" << endl;
	}*/


	//if ((0<hp&&hp<20) )  //要用与或，不可直接用0<hp,20
	//{
	//	cout << "血量过低" << endl;
	//}

	/*if (1)
	{
	}
	else {
		if (1)
		{
		}
		else
		{
			if (1)
			{
			}
		}
	}*/


	//int valaue = 1;
	//switch (valaue)
	//{
	//case 1:
	//{     //代码过多加大括号
	//	cout << "1" << endl;
	//	cout << "1" << endl;
	//	cout << "1" << endl;
	//	cout << "1" << endl;
	//	cout << "1" << endl;
	//	cout << "1" << endl;
	//}
	//	break;
	//case 2:
	//	cout << "2" << endl;
	//	break;
	//case 3:
	//	cout << "3" << endl;
	//	break;
	//default:
	//	cout << "other number" << endl;
	//}


//for (int i = 0; i < 10; i += 1)       //先执行i=0，然后判断i<10，执行cout，再i+=1.再判断i<10，以此类推
//{
//	cout << i;
//}


//int x = 1;
//while (x<100)
//{
//	cout << x << endl;
//	x += 1;
//}


//int x = 0;
//do                              //与while大同小异，先执行再判断，无论如何至少执行一次
//{
//	cout << x << endl;
//	x += 1;
//} while (x < 100);


//for (int i = 0; i < 100; i += 1)
//{
//	if (i < 50)
//		cout << i << endl;
//	else
//		break;
//}


//int x = 0;
//while (x < 100)
//{
//	x += 1;
//
//	if (x % 2 == 0)
//		cout << x << endl;
//	else
//		continue;
//	
//}


//int x = 1;
//sign:
//cout << x << endl;
//x++;
//if (x < 100)
//{
//	goto sign;
//
//}




	system("pause");
	return 0;
}