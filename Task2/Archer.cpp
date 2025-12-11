#include "Archer.h"
#include <iostream>

Archer::Archer(string nickname) : Player(nickname) {  // 기본 클래스 생성자 호출
	job_name = "궁수";
    setHP(30);
    setMP(20);
    setPower(20);
    setDefence(15);
    setAccuracy(30);
    setSpeed(30);
    cout << "* 궁수로 전직하였습니다." << endl;
}
void Archer::attack() {
	cout << "* 화살을 쏩니다." << endl;
}
