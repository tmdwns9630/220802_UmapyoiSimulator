#include "trainOn.h"
//안쓴다..!
//그냥 메인함수에 통합!

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
		cout << "존재하지 않을 터인 6번째 캐릭터를 고르셨습니다...\n";
		cout << "뭐야 어떻게 했어요." << endl;
		break;
	}
	
	Uma* myUma[5] = { new SpecialWeek(), new DaiwaScarlet(),new SilenceSuzuka(),new OguriCap(), new GoldShip() };
	
	//어떻게 객체 포인터배열로 받아내는것만 성공하면 답이 보일 거 같긴 한데..

	myUma[n - 1] = new DaiwaScarlet();

	myUma[n - 1]->StatusOpen();
			
	cout << "레이스가 시작됩니다.\n";
	cout << "레이스는 2000m의 경기장에서 진행됩니다.\n";
	//cout << "5명의 캐릭터 중 먼저 골에 도착하는 캐릭터가 승리합니다.\n";
	//cout << "플레이어 여러분은 경기 중 버튼을 눌러서 TP가 다 찬 본인의 캐릭터의 스킬을 발동시킬 수 있습니다.\n";
	cout << "당신의 캐릭터의 능력치입니다.\n";
	DaiwaScarlet* myHorse = new DaiwaScarlet();
	myHorse->StatusOpen();

	cout << "레이스를 시작하시겠습니까? : ";
	char yn;
	cin >> yn;
	if(yn == 'N' or yn =='n'){
		cout << "레이스를 취소합니다.\n";
		return;
	}
	cout << "레이스를 시작합니다!\n";
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
	cout << "레이스가 종료되었습니다!\n";
}