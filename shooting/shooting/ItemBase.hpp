#pragma once
#include<Dxlib.h>
#include"player.hpp"

#define ITEM_SIZE ()

class ItemBase {
public:
	ItemBase();
	virtual ~ItemBase();
	virtual void update(player* pl);
	virtual void draw();
	virtual void onColl();
protected:
	int x, y;
	int gra;
	bool pl_up;//�v���C���[����ɍs�����Ƃ��ɃA�C�e�����z������鏈��
};