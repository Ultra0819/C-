#include"Boss.h"

Boss::Boss(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_Deptid = did;
}

void Boss::ShowInfo()
{
	cout << "职工编号：" << this->m_id
		<< "\t职工姓名：" << this->m_name
		<< "\t岗位：" << this->getDeptName()
		<< "\t岗位职责：给职工经理和员工下达任务" << endl;
}

string Boss::getDeptName()
{
	return string("老板");
}