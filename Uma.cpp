//Ŭ���� ����Լ�
#include <iostream>
#include "trainOn.h"

void Uma::StatusOpen() {
		cout << "------------------------------"<< endl;
		cout << "ĳ���͸� : " << name << endl;
		cout << "���ǵ� : " << speed << endl;
		cout << "���¹̳� : " << stamina << endl;
		cout << "�Ŀ� : " << power << endl;
		cout << "���� : " << intel << endl;
		cout << "���� : " << apt1 << ", " << apt2 << endl;
		cout << "------------------------------" << endl;
}

Uma :: ~Uma() {
	cout << name <<"�� �Ҵ��� �����߽��ϴ�.\n";
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
	cout << "��ġ : " << this->currentPosition << endl;
	cout << "�ӵ� : " << this->speed << endl;
}


void Uma::SpeedCalculation() {
	int a = 0, b = 0;
	a = this->GetSpeed()-this->GetPower()/5;
	b = this->GetPosition();
	b += a;
	SetPosition( b);
}

//void Uma::RacingTime()