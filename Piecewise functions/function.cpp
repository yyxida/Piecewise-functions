#include<iostream>
#include<cmath>
#include <cctype>
#include <stdlib.h>
using namespace std;
int main()
{
	double x, y;
	int TEMP;
	cout << "������x��ֵ: " << endl;
	cin >> x;
	while (cin.fail())//�ж������Ƿ�Ϊ����
	{
		cin.clear();
		cin.ignore(20, '\n');//������̻�����ֱ��'\n'�����س��������س���֮ǰ��1024���ַ�
		cout << "���������������֣�" << endl;
		cout << "������������x��ֵ:" << endl;
		cin >> x;
		if (cin.fail())
		{
			cout << "cin�������ڽ�ǿ���˳�����" << endl << "��Ӧ���������������֣�" << endl;
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
	else
	{
		TEMP = 3;
	}
	//�жϽ���
	switch (TEMP)//����TEMP��ֵѡ���㷨
	{
	case 1:
		y = -x + 3.5;
		break;
	case 2:
		y = 20 - 3.5 * sqrt(x + 3);
		break;
	case 3:
		y = x / 2 - 3.5 + sin(x);
		break;
	}
	system("cls");//�����ʾ����
	cout << "****************************************" << endl;
	cout << "\t������Ϊ:\a" << y << endl;//\a���뾯����
	cout << "****************************************" << endl;
	system("pause");
	return 0;
}

