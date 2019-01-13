#include"scene.hpp"

scene::scene() {
	initialize();
}

scene::~scene() {
	finalize();
}

void scene::initialize() {
	time = 0;
	//���ƂŕύX
	x = 0;
	y = 0;
	alive = true;
	pose_now = false;
}

void scene::finalize() {
	
}

void scene::update() {
	
}

void scene::draw() {
	DrawFormatString(0,0,0xFFFFFF,"Running...");
	DrawFormatString(0, 16, 0xFFFFFF, "�I������ɂ�esc�L�[�������Ă�������");
}

void scene::update_late() {

}

void scene::update_ALT() {
	time++;
	if (!alive)finalize();
}

bool scene::get_alive() { return alive; }