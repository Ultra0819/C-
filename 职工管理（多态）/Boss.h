#pragma once
#include<iostream>
#include"Workers.h"
#include"string"
using namespace std;

class Boss :public Workers
{
public:
	Boss(int id, string name, int did);

	//显示个人信息
	virtual void ShowInfo();

	//获取工作岗位名称
	virtual string getDeptName();
};