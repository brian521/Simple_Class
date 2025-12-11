#include "Warrior.h"
#include <iostream>

Warrior::Warrior(string nickname) : Player(nickname){  // 기본 클래스 생성자 호출
	job_name = "전사";
	setHP(50);
    setMP(10);
    setPower(30);
    setDefence(30);
    setAccuracy(20);
    setSpeed(10);
    cout << "* 전사로 전직하였습니다." << endl;
}
void Warrior::attack() {
	cout << "* 대검을 휘두릅니다." << endl;
}