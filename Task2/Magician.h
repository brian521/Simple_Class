#pragma once
#include "Player.h"

class Magician : public Player {  // Player .클래스 상속
public:
	Magician(string nickname);  // 마법사 생성자
	void attack() override;  // 공격 함수 상속
	void attack(Monster* monster) override;  // 공격 함수 상속
};

