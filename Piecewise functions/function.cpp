#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double	x, y;
	int	TEMP;
	while (1)
	{
		cout << "请输入x的值: " << endl;
		cin >> x;
		while (cin.fail())            /* 判断输入是否为数字 */
		{
			cin.clear();
			cin.ignore(2048, '\n'); /* 清除键盘缓冲区直到'\n'，即回车（包括回车）之前的2048个字符 */
			cout << "请输入可运算的数字！" << endl;
			cout << "请重新输入x的值:" << endl;
			cin >> x;
			if (cin.fail())
			{
				cout << "cin错误，现在将强制退出程序。" << endl << "你应该输入可运算的数字！" << endl;
				system("pause");
				return 0;
			}
			break;
		}
		if (x < 5)
		{
			TEMP = 1;
		}
		else if (x >= 5 && x < 10)
		{
			TEMP = 2;
		}
		else {
			TEMP = 3;
		}
		/* 判断结束 */
		switch (TEMP) /* 根据TEMP的值选择算法 */
		{
		case 1:
			y = -x + 3.5;
			break;
		case 2:
			y = 20 - 3.5 * pow(x + 3, 2);
			break;
		case 3:
			y = (x / 2) - 3.5 + sin(x);
			break;
		}
		system("cls");                        /* 清空显示区域 */
		cout << "****************************************" << endl;
		cout << "\t计算结果为:\a" << y << endl;      /* \a警告音 */
		cout << "****************************************" << endl;
		system("pause");
		system("cls");   
		cin.ignore(2048, '\n'); 
	}
	}



