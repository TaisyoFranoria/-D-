#pragma once
#include<Dxlib.h>
#include"player.hpp"

#define ITEM_SIZE ()

class ItemBase {
public:
	ItemBase();
	virtual ~ItemBase();
	virtual void update(player* pl);
	void spawn(int x ,int y);
	virtual void draw();
	virtual void onColl(player* pl);
protected:
	int x, y;
	int gra;
	int snd;
	bool pl_up;//�v���C���[����ɍs�����Ƃ��ɃA�C�e�����z������鏈��
	bool alive;
};