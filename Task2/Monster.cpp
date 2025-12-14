#include "Monster.h"
#include <iostream>

Monster::Monster(string name) {
    setName(name);
    setHP(10);
    setPower(30);
    setDefence(10);
    setSpeed(10);
}

void Monster::attack(Player* player) {
    int damage = 0;
    damage = getPower() - player->getDefence();  // - 몬스터의 공격력 - 플레이어의 방어력을 데미지로 정의합니다.
    if (damage <= 0) damage = 1;  // - 만약 위에서 계산한 데미지가 0 이하라면, 데미지를 1로 정의합니다.
    cout << "* " << getName() << "(이)가 " << player->getNickname() << "에게 " << damage << "만큼의 피해를 주었습니다." << endl;  // - 플레이어에게 얼마나 데미지를 입혔는지 출력합니다.
    if (player->setHP(player->getHP() - damage)) {  // - setHP에서 리턴 받은 생존 여부를 기준으로 분기문이 실행됩니다.
        cout << "* " << player->getNickname() << "의 남은 HP : " << player->getHP() << endl;  // - 생존했을 경우, 플레이어의 남은 HP만 출력합니다.
    }
    else {  // - 생존하지 못했을 경우, 플레이어의 남은 HP와 몬스터의 승리 문구를 출력합니다.
        cout << "* " << player->getNickname() << "의 남은 HP : " << player->getHP() << endl;
        cout << "* " << getName() << "(이)가 승리하였습니다!" << endl;
    }
}

string Monster::getName() { return name; }
int Monster::getHP() { return HP; }
int Monster::getPower() { return power; }
int Monster::getDefence() { return defence; }
int Monster::getSpeed() { return speed; }

void Monster::setName(string name) { this->name = name; }
bool Monster::setHP(int HP) { this->HP = HP; if (this->HP > 0) return true; else { this->HP = 0; return false; } }
void Monster::setPower(int power) { this->power = power; }
void Monster::setDefence(int defence) { this->defence = defence; }
void Monster::setSpeed(int speed) { this->speed = speed; }