#pragma once
#include<iostream>
#include"Workers.h"
#include"string"
using namespace std;

class Employee:public Workers
{
public:
	Employee(int id, string name, int did);

	//��ʾ������Ϣ
	virtual void ShowInfo();

	//��ȡ������λ����
	virtual string getDeptName();
};