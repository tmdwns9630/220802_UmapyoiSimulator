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
			cout << name << "�⺻��ų �ߵ�!" << endl;
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
		name = "����� ��ũ";
		speed = 83;
		stamina = 88;
		power = 98;
		intel = 91;
		apt1 = "����";
		apt2 = "����";
	}
	void UseSkill() {
		if (this->currentPosition % 200 >= 190) {
			this->speed += this->power / 4;
			cout << name << "�� ��ų �ߵ�!" << endl;
		}
	};
	
};

class DaiwaScarlet: public Uma{
public:
	DaiwaScarlet() {
		name = "���̿� ��Į��";
		speed = 84;
		stamina = 101;
		power = 79;
		intel = 90;
		apt1 = "����";
		apt2 = "����";

	}
	void UseSkill() {
		if (this->currentPosition % 200 >= 150) {
			this->speed += this->power / 4;
			cout << name << "�� ��ų �ߵ�!" << endl;
		}
	};
};



class SilenceSuzuka : public Uma {
public:
	SilenceSuzuka() {
		name = "���Ϸ��� ����ī";
		speed = 101;
		stamina = 84;
		power = 77;
		intel = 88;
		apt1 = "����";
		apt2 = "����";

	}
	void UseSkill() {
		if (this->currentPosition % 200 >= 150) {
			this->speed += this->power / 4;
			cout << name << "�� ��ų �ߵ�!" << endl;
		}
	};
};

class OguriCap : public Uma {
public:
	OguriCap() {
		name = "������ ĸ";
		speed = 101;
		stamina = 66;
		power = 106;
		intel = 93;
		apt1 = "����";
		apt2 = "����";
	}
	void UseSkill() {
		if (this->currentPosition % 200 >= 150) {
			this->speed += this->power / 4;
			cout << name << "�� ��ų �ߵ�!" << endl;
		}
	};
};

class GoldShip : public Uma {
public:
	GoldShip() {
		name = "��� ��";
		speed = 82;
		stamina = 96;
		power = 100;
		intel = 70;
		apt1 = "����";
		apt2 = "����";
	}
	void UseSkill() {
		if (this->currentPosition % 200 >= 150) {
			this->speed += this->power / 4;
			cout << name << "�� ��ų �ߵ�!" << endl;
		}
	};
};
