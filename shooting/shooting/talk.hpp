#pragma once
#include<DxLib.h>
#include<vector>
#include<string>

class Talk {
private:
	std::vector<int> char1_gra; //��b����L�����̃O���t�B�b�N
	std::vector<int> chae2_gra;
	int TW_gra; //�E�B���h�E�̃O���t�B�b�N�n���h��
	int page;//��
	std::vector<std::string> talk_text;
public:
	Talk();
	~Talk();

};
