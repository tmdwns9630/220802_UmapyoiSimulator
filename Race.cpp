#include "trainOn.h"
//�Ⱦ���..!
//�׳� �����Լ��� ����!

/*
void TheRace(int& n) {
	
	switch (n) {
	case 1: {
		SpecialWeek* myHorse = new SpecialWeek();
		break;
	}
	case 2: {
		DaiwaScarlet* myHorse = new DaiwaScarlet();
		break;
	}
	case 3: {
		SilenceSuzuka* myHorse = new SilenceSuzuka();
		break;
	}
	case 4: {
		OguriCap* myHorse = new OguriCap();
		break;
	}
	case 5: {
		GoldShip* myHorse = new GoldShip();
		break;
	}
	default:
		cout << "�������� ���� ���� 6��° ĳ���͸� ���̽��ϴ�...\n";
		cout << "���� ��� �߾��." << endl;
		break;
	}
	
	Uma* myUma[5] = { new SpecialWeek(), new DaiwaScarlet(),new SilenceSuzuka(),new OguriCap(), new GoldShip() };
	
	//��� ��ü �����͹迭�� �޾Ƴ��°͸� �����ϸ� ���� ���� �� ���� �ѵ�..

	myUma[n - 1] = new DaiwaScarlet();

	myUma[n - 1]->StatusOpen();
			
	cout << "���̽��� ���۵˴ϴ�.\n";
	cout << "���̽��� 2000m�� ����忡�� ����˴ϴ�.\n";
	//cout << "5���� ĳ���� �� ���� �� �����ϴ� ĳ���Ͱ� �¸��մϴ�.\n";
	//cout << "�÷��̾� �������� ��� �� ��ư�� ������ TP�� �� �� ������ ĳ������ ��ų�� �ߵ���ų �� �ֽ��ϴ�.\n";
	cout << "����� ĳ������ �ɷ�ġ�Դϴ�.\n";
	DaiwaScarlet* myHorse = new DaiwaScarlet();
	myHorse->StatusOpen();

	cout << "���̽��� �����Ͻðڽ��ϱ�? : ";
	char yn;
	cin >> yn;
	if(yn == 'N' or yn =='n'){
		cout << "���̽��� ����մϴ�.\n";
		return;
	}
	cout << "���̽��� �����մϴ�!\n";
	int nowpoint = 0;
	myHorse->ShowCurrent();
	cout << "-------------------" << endl;
	while (myHorse->GetPosition() <= 2000) {
		nowpoint = myHorse->GetPosition();
		myHorse->SpeedCalculation();
		myHorse->UseSkill();
		myHorse->ShowCurrent();
		cout << "-------------------" << endl;
		
		Sleep(1000);
	}
	cout << "���̽��� ����Ǿ����ϴ�!\n";
}