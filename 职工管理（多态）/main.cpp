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
	wk = new Employee(1, "张三", 1);
	wk->ShowInfo();
	delete wk;

	wk = new Manager(2, "李四", 2);
	wk->ShowInfo();
	delete wk;

	wk = new Boss(3, "王五", 3);
	wk->ShowInfo();
	delete wk;

	////实例化管理者对象
	//WorkerManager wm;
	//
	////交互
	////接受用户选择
	//int choice;
	//
	//while (true)
	//{
	//	//展示菜单
	//	wm.Show_Menu();

	//	cout << "\n请输入您的选择：" << endl;
	//	cin >> choice;

	//	switch (choice)
	//	{
	//	case 0://退出系统
	//		wm.exitSystem();
	//		break;

	//	case 1://增加职工信息
	//		break;

	//	case 2://显示职工信息
	//		break;

	//	case 3://删除职工信息
	//		break;

	//	case 4://修改职工信息
	//		break;

	//	case 5://查找职工信息
	//		break;

	//	case 6://按照编号排序
	//		break;

	//	case 7://清空所欲文档
	//		break;
	//	}

	//}

	system("pause");
	return 0;
}