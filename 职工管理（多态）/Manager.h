#pragma once
#include<iostream>
#include"Workers.h"
#include"string"
using namespace std;

class Manager :public Workers
{
public:
	Manager(int id, string name, int did);

	//��ʾ������Ϣ
	virtual void ShowInfo();

	//��ȡ������λ����
	virtual string getDeptName();
};