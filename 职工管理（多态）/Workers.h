#pragma once
#include<iostream>
#include<string>
using namespace std;

class Workers
{
public:
	//��Ӹ�����Ϣ
	virtual void ShowInfo() = 0;

	//��ȡ��λ����
	virtual string getDeptName() = 0;

	int m_id;//ְ�����
	string m_name;//ְ������
	int m_Deptid;//ְ�����ڲ������Ʊ��
};