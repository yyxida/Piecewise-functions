#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double	x, y;
	int	TEMP;
	while (1)
	{
		cout << "������x��ֵ: " << endl;
		cin >> x;
		while (cin.fail())            /* �ж������Ƿ�Ϊ���� */
		{
			cin.clear();
			cin.ignore(2048, '\n'); /* ������̻�����ֱ��'\n'�����س��������س���֮ǰ��2048���ַ� */
			cout << "���������������֣�" << endl;
			cout << "����������x��ֵ:" << endl;
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
		else {
			TEMP = 3;
		}
		/* �жϽ��� */
		switch (TEMP) /* ����TEMP��ֵѡ���㷨 */
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
		system("cls");                        /* �����ʾ���� */
		cout << "****************************************" << endl;
		cout << "\t������Ϊ:\a" << y << endl;      /* \a������ */
		cout << "****************************************" << endl;
		system("pause");
		system("cls");   
		cin.ignore(2048, '\n'); 
	}
	}



