#pragma once
#include "consola.h"
#include <iostream>
#include "Model.h"
#include "View.h"
//Model, View 객체 생성 및 기능 호출을 담당하는 Controller클래스.
//main()함수로부터 제어권을 넘겨받은 후, 모든 프로그램의 실행을 관리함
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

