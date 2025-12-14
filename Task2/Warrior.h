#pragma once
#include "Player.h"

class Warrior : public Player {  // Player .클래스 상속
public:
	Warrior(string nickname);  // 전사 생성자
	void attack() override;  // 공격 함수 상속
	void attack(Monster* monster) override;  // 공격 함수 상속
};