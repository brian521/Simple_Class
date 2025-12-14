#pragma once
#include <string>
using namespace std;

class Monster;

class Player {
public:
    Player(string nickname);  // 생성자

    virtual void attack() = 0;  // 순수 가상 함수
    virtual void attack(Monster* monster) = 0;
    void printPlayerStatus();  // 스탯 출력

    // getter 함수
    string getJobName();
    string getNickname();
    int getLevel();
    int getHP();
    int getMP();
    int getPower();
    int getDefence();
    int getAccuracy();
    int getSpeed();

    // setter 함수
    void setNickname(string nickname);
    bool setHP(int HP);
    bool setMP(int MP);
    void setPower(int power);
    void setDefence(int defence);
    void setAccuracy(int accuracy);
    void setSpeed(int speed);

protected:
    string job_name;
    string nickname;
    int level;
    int HP;
    int MP;
    int power;
    int defence;
    int accuracy;
    int speed;
};