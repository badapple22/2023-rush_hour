#pragma once
#include "consola.h"
#include <iostream>
#include "Model.h"
#include "View.h"
//Model, View ��ü ���� �� ��� ȣ���� ����ϴ� ControllerŬ����.
//main()�Լ��κ��� ������� �Ѱܹ��� ��, ��� ���α׷��� ������ ������
class Controller
{
	Model* _model;
	View* _view;
	
public:
	Controller()
	{
		_model = new Model;
		_view = new View;
	}
	~Controller()
	{
		
	}
	void start()
	{
		

	}
};

