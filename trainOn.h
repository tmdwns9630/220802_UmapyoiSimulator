#pragma once
#include <iostream>
#include <string>
#include <ios>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <exception>
#include <windows.h>

using namespace std;

bool FirstSelect(const string& name);
void TheRace(int& n);

class Uma {
protected:
	int speed = 0;
	int stamina = 0;
	int power = 0;
	int intel = 0;
	string name;
	string apt1;
	string apt2;
	int currentPosition = 0;

public:
	
	int tp = 0;
	int totalSpeed = 0;

	virtual void UseSkill() {
		if (this->currentPosition % 200 >= 180) {
			this->speed += this->power / 5;
			cout << name << "기본스킬 발동!" << endl;
		}
	};
	//virtual void SpeedUp();
	//virtual void StaminaDown();

	void StatusOpen();
	void getStauts();

	int GetSpeed();
	void SetSpeed(int& n);
	
	int GetStamina();
	void SetStamina(int& n);

	int GetPower();
	void SetPower(int& n);

	int GetIntel();
	void SetIntel(int& n);

	void SetPosition(int& n);
	int GetPosition();
	void ShowCurrent();

	void SpeedCalculation();

	//void RacingTime();

	~Uma();
};



class SpecialWeek : public Uma {
public:
	SpecialWeek() {
		name = "스페셜 위크";
		speed = 83;
		stamina = 88;
		power = 98;
		intel = 91;
		apt1 = "선행";
		apt2 = "선입";
	}
	void UseSkill() {
		if (this->currentPosition % 200 >= 190) {
			this->speed += this->power / 4;
			cout << name << "의 스킬 발동!" << endl;
		}
	};
	
};

class DaiwaScarlet: public Uma{
public:
	DaiwaScarlet() {
		name = "다이와 스칼렛";
		speed = 84;
		stamina = 101;
		power = 79;
		intel = 90;
		apt1 = "도주";
		apt2 = "선행";

	}
	void UseSkill() {
		if (this->currentPosition % 200 >= 150) {
			this->speed += this->power / 4;
			cout << name << "의 스킬 발동!" << endl;
		}
	};
};



class SilenceSuzuka : public Uma {
public:
	SilenceSuzuka() {
		name = "사일런스 스즈카";
		speed = 101;
		stamina = 84;
		power = 77;
		intel = 88;
		apt1 = "도주";
		apt2 = "없음";

	}
	void UseSkill() {
		if (this->currentPosition % 200 >= 150) {
			this->speed += this->power / 4;
			cout << name << "의 스킬 발동!" << endl;
		}
	};
};

class OguriCap : public Uma {
public:
	OguriCap() {
		name = "오구리 캡";
		speed = 101;
		stamina = 66;
		power = 106;
		intel = 93;
		apt1 = "선행";
		apt2 = "선입";
	}
	void UseSkill() {
		if (this->currentPosition % 200 >= 150) {
			this->speed += this->power / 4;
			cout << name << "의 스킬 발동!" << endl;
		}
	};
};

class GoldShip : public Uma {
public:
	GoldShip() {
		name = "골드 쉽";
		speed = 82;
		stamina = 96;
		power = 100;
		intel = 70;
		apt1 = "추입";
		apt2 = "선입";
	}
	void UseSkill() {
		if (this->currentPosition % 200 >= 150) {
			this->speed += this->power / 4;
			cout << name << "의 스킬 발동!" << endl;
		}
	};
};
