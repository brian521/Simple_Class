#include "Archer.h"
#include "Monster.h"
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
void Archer::attack(Monster* monster) {
    int damage = 0;
    damage = (getPower() - monster->getDefence()) / 3;  // - 플레이어의 공격력 - 몬스터의 방어력을 데미지로 정의합니다.
    if (damage <= 0) damage = 1;  // - 만약 위에서 계산한 데미지가 0 이하라면, 데미지를 1로 정의합니다.

    for (int i = 0; i < 3; i++) {
        cout << "* " << getNickname() << "(이)가 " << monster->getName() << "에게 화살로 " << damage << "만큼의 피해를 주었습니다." << endl;  // - 몬스터에게 얼마나 데미지를 입혔는지 출력합니다.
        if (monster->setHP(monster->getHP() - damage)) {  // - setHP에서 리턴 받은 생존 여부를 기준으로 분기문이 실행됩니다.
            cout << "* " << monster->getName() << "의 남은 HP : " << monster->getHP() << endl;  // - 생존했을 경우, 몬스터의 남은 HP만 출력합니다.
        }
        else {  // - 생존하지 못했을 경우, 몬스터의 남은 HP와 플레이어의 승리 문구를 출력합니다.
            cout << "* " << monster->getName() << "의 남은 HP : " << monster->getHP() << endl;
            cout << "* " << getNickname() << "(이)가 승리하였습니다!" << endl;
            break;
        }
    }
}