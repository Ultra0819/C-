#include<iostream>
using namespace std;


#include"WorkerManager.h"
#include"Workers.h"
#include"Employee.h"
#include"Manager.h"
#include"Boss.h"
int main()
{
	Workers * wk = NULL;
	wk = new Employee(1, "����", 1);
	wk->ShowInfo();
	delete wk;

	wk = new Manager(2, "����", 2);
	wk->ShowInfo();
	delete wk;

	wk = new Boss(3, "����", 3);
	wk->ShowInfo();
	delete wk;

	////ʵ���������߶���
	//WorkerManager wm;
	//
	////����
	////�����û�ѡ��
	//int choice;
	//
	//while (true)
	//{
	//	//չʾ�˵�
	//	wm.Show_Menu();

	//	cout << "\n����������ѡ��" << endl;
	//	cin >> choice;

	//	switch (choice)
	//	{
	//	case 0://�˳�ϵͳ
	//		wm.exitSystem();
	//		break;

	//	case 1://����ְ����Ϣ
	//		break;

	//	case 2://��ʾְ����Ϣ
	//		break;

	//	case 3://ɾ��ְ����Ϣ
	//		break;

	//	case 4://�޸�ְ����Ϣ
	//		break;

	//	case 5://����ְ����Ϣ
	//		break;

	//	case 6://���ձ������
	//		break;

	//	case 7://��������ĵ�
	//		break;
	//	}

	//}

	system("pause");
	return 0;
}