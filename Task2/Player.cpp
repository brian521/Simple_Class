#include "Player.h"
#include <iostream>

Player::Player(string nickname) {
    level = 1;
    setNickname(nickname);
    setHP(10);
    setMP(10);
    setPower(10);
    setDefence(10);
    setAccuracy(10);
    setSpeed(10);
}

void Player::printPlayerStatus() {
    cout << "------------------------------------" << endl;
    cout << "* 현재 능력치" << endl;
    cout << "닉네임: " << nickname << endl;
    cout << "Lv. " << level << endl;
    cout << "HP: " << HP << endl;
    cout << "MP: " << MP << endl;
    cout << "공격력: " << power << endl;
    cout << "방어력: " << defence << endl;
    cout << "정확도: " << accuracy << endl;
    cout << "속도: " << speed << endl;
    cout << "------------------------------------" << endl;
}

string Player::getJobName() { return job_name; }
string Player::getNickname() { return nickname; }
int Player::getLevel() { return level; }
int Player::getHP() { return HP; }
int Player::getMP() { return MP; }
int Player::getPower() { return power; }
int Player::getDefence() { return defence; }
int Player::getAccuracy() { return accuracy; }
int Player::getSpeed() { return speed; }

void Player::setNickname(string nickname) { Player::nickname = nickname; }
bool Player::setHP(int HP) { Player::HP = HP; return true; }
bool Player::setMP(int MP) { Player::MP = MP; return true; }
void Player::setPower(int power) { Player::power = power; }
void Player::setDefence(int defence) { Player::defence = defence; }
void Player::setAccuracy(int accuracy) { Player::accuracy = accuracy; }
void Player::setSpeed(int speed) { Player::speed = speed; }