#include"Boss.h"

Boss::Boss(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_Deptid = did;
}

void Boss::ShowInfo()
{
	cout << "ְ����ţ�" << this->m_id
		<< "\tְ��������" << this->m_name
		<< "\t��λ��" << this->getDeptName()
		<< "\t��λְ�𣺸�ְ�������Ա���´�����" << endl;
}

string Boss::getDeptName()
{
	return string("�ϰ�");
}