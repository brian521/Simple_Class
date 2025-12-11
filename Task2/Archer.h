#pragma once
#include "Player.h"

class Archer : public Player {  // Player 클래스 상속
public:
	Archer(string nickname);  // 궁수 생성자
	void attack() override;  // 공격 함수 상속
};

