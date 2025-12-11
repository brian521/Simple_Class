#include "Thief.h"
#include <iostream>

Thief::Thief(string nickname) : Player(nickname) {  // 기본 클래스 생성자 호출
	job_name = "도적";
    setHP(30);
    setMP(20);
    setPower(25);
    setDefence(20);
    setAccuracy(30);
    setSpeed(40);
    cout << "* 도적으로 전직하였습니다." << endl;
}
void Thief::attack() {
	cout << "* 단검을 휘두릅니다." << endl;
}
