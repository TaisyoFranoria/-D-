#pragma once
#include<Dxlib.h>
#include<iostream>
#include"player.hpp"

class scene {
public:
	scene();
	~scene();
	virtual void initialize();
	virtual void finalize();

	virtual void update();
	virtual void draw();
	virtual void update_late();

	
protected:
	float time;
	int x, y;
};