//클래스 멤버함수
#include <iostream>
#include "trainOn.h"

void Uma::StatusOpen() {
		cout << "------------------------------"<< endl;
		cout << "캐릭터명 : " << name << endl;
		cout << "스피드 : " << speed << endl;
		cout << "스태미나 : " << stamina << endl;
		cout << "파워 : " << power << endl;
		cout << "지능 : " << intel << endl;
		cout << "각질 : " << apt1 << ", " << apt2 << endl;
		cout << "------------------------------" << endl;
}

Uma :: ~Uma() {
	cout << name <<"의 할당을 해제했습니다.\n";
}

inline int Uma::GetSpeed() {
	return this->speed;
}

inline void Uma::SetSpeed(int& n) {
	this->speed = n;
}

inline int Uma::GetStamina() {
	return this->stamina;
}

inline void Uma::SetStamina(int& n) {
	this->stamina = n;
}

inline int Uma::GetPower() {
	return this->power;
}

inline void Uma::SetPower(int& n) {
	this->power = n;
}

inline int Uma::GetIntel() {
	return this->intel;
}

inline void Uma::SetIntel(int& n) {
	this->intel = n;
}

inline int Uma::GetPosition() {
	return this->currentPosition;
}

inline void Uma::SetPosition(int& n) {
	this->currentPosition = n;
}

void Uma::ShowCurrent() {
	cout << "위치 : " << this->currentPosition << endl;
	cout << "속도 : " << this->speed << endl;
}


void Uma::SpeedCalculation() {
	int a = 0, b = 0;
	a = this->GetSpeed()-this->GetPower()/5;
	b = this->GetPosition();
	b += a;
	SetPosition( b);
}

//void Uma::RacingTime()