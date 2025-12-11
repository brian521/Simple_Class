#include "Magician.h"
#include <iostream>

Magician::Magician(string nickname) : Player(nickname) {  // 기본 클래스 생성자 호출
	job_name = "마법사";
    setHP(20);
    setMP(50);
    setPower(20);
    setDefence(15);
    setAccuracy(30);
    setSpeed(10);
    cout << "* 마법사로 전직하였습니다." << endl;
}
void Magician::attack() {
	cout << "* 마법을 발사합니다." << endl;
}
