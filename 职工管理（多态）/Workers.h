#pragma once
#include<iostream>
#include<string>
using namespace std;

class Workers
{
public:
	//添加个人信息
	virtual void ShowInfo() = 0;

	//获取岗位名称
	virtual string getDeptName() = 0;

	int m_id;//职工编号
	string m_name;//职工姓名
	int m_Deptid;//职工所在部门名称编号
};