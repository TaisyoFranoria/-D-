#pragma once
#include<Dxlib.h>
#include<string>

#define PLAYER_SIZE (84)
#define PLAYER_RADIUS (42)

class player {
private:
	int x, y;
	int hx, hy;//����̂��߂̍��W�ʒu(���S)
	int r; //����̔��a
	int gra[3];
	int move_num;//1:���Ɉړ� 2:�f�t�H���g 3:�E�Ɉړ�
	int anim_counter;
	struct status{
		int LIFE;
		int BOMB;
		int POWER;
		int COUNTINUE;
	}status;
	bool slow;
	bool shot;
	bool bomb_now;
	int DrawPlayerGraph(int num);
public:
	player();
	~player();
	void initialize();

	void finalize();

	void update();
	void draw();
	void update_late();

	int get_point(int num);
	int get_status(int num);
	bool get_now(int num);
	void set_status(int num,int value);
	void set_point(int x,int y);
	int InitLoadGraph(int num);
};