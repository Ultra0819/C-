#pragma once
#include<iostream>
#include"Workers.h"
#include"string"
using namespace std;

class Boss :public Workers
{
public:
	Boss(int id, string name, int did);

	//��ʾ������Ϣ
	virtual void ShowInfo();

	//��ȡ������λ����
	virtual string getDeptName();
};