#include "trainOn.h"

int main()
{
	register int i = 0;
	register int n = 0;
	char yn = 0;
	const string Mname[5] = { "스페셜 위크","다이와 스칼렛","사일런스 스즈카","오구리 캡","골드 쉽" };
	bool answer = false;
	
	//기본 클래스의 동적 객체 배열로 만들어서 할당하려고 했으나 실패.
	//였는데 어떻게 잘 만지다 보니까 성공.
	Uma* myUma[5] = { new SpecialWeek, new DaiwaScarlet,new SilenceSuzuka,new OguriCap, new GoldShip };


	
	/*
	SpecialWeek* myHorse1 = new SpecialWeek();
	DaiwaScarlet* myHorse2 = new DaiwaScarlet();
	SilenceSuzuka* myHorse3 = new SilenceSuzuka();
	OguriCap* myHorse4 = new OguriCap();
	GoldShip* myHorse5 = new GoldShip();
	*/
	cout << "경마 시뮬레이터에 오신 여러분을 환영합니다." << endl;
	
	while (true) {
		//n = 0;
		cout << "\n\n";
		cout << "5마리 중 함께할 캐릭터를 골라주세요." << endl;
		for (i = 0;i < 5;i++) {
			cout << i+1 << ". ";
			cout << Mname[i] << endl;
		}
		try {
			cout << "번호 입력 : ";
			cin >> n;

			cout << endl;


			//원래는 스위치문으로 5가지 케이스에 FirstSelect 함수를 쓰려고 했으나
			//굳이 스위치문을 쓸 필요가 없어졌음.
			//였지만 인스턴스 생성과 멤버함수를 쓰기 위해 다시 switch로 변경.
			if (n > 0 && n < 6) {
				switch (n) {
				case 1: {
					//SpecialWeek sw1 =  SpecialWeek();
					cout << Mname[n - 1];
					cout << "을(를) 선택하셨습니다.\n" << endl;
					cout << "능력치" << endl;
					myUma[n - 1]->StatusOpen();
					//myHorse1->StatusOpen();
					//sw1.StatusOpen();
					answer = FirstSelect(Mname[n - 1]);
					break;
				}
				case 2: {
					//DaiwaScarlet ds1 = DaiwaScarlet();
					cout << Mname[n - 1];
					cout << "을(를) 선택하셨습니다.\n" << endl;
					cout << "능력치" << endl;
					//ds1.StatusOpen();
					//myHorse2->StatusOpen();
					myUma[n - 1]->StatusOpen();
					answer = FirstSelect(Mname[n - 1]);
					break;
				}
				case 3: {
					//SilenceSuzuka ss = SilenceSuzuka();
					cout << Mname[n - 1];
					cout << "을(를) 선택하셨습니다.\n" << endl;
					cout << "능력치" << endl;
					//ss.StatusOpen();
					//myHorse3->StatusOpen();
					myUma[n - 1]->StatusOpen();
					answer = FirstSelect(Mname[n - 1]);
					break;
				}
				case 4: {
					//OguriCap sw1 = OguriCap();
					cout << Mname[n - 1];
					cout << "을(를) 선택하셨습니다.\n" << endl;
					cout << "능력치" << endl;
					//sw1.StatusOpen();
					//myHorse4->StatusOpen();
					myUma[n - 1]->StatusOpen();
					answer = FirstSelect(Mname[n - 1]);
					break;
				}
				case 5: {
					//GoldShip sw1 = GoldShip();
					cout << Mname[n - 1];
					cout << "을(를) 선택하셨습니다.\n" << endl;
					cout << "능력치" << endl;
					//sw1.StatusOpen();
					//myHorse5->StatusOpen();
					myUma[n - 1]->StatusOpen();
					answer = FirstSelect(Mname[n - 1]);
					break;
				}
				default:
					cout << "존재하지 않을 터인 6번째 캐릭터를 고르셨습니다...\n";
					cout << "뭐야 어떻게 했어요." << endl;
					break;
				}
				if (answer == true)
					break;
			}

			else {
				cout << "1 : 잘못 입력하셨습니다.\n" << endl;
				fflush(stdin);
				break;
			}
				
		}
		catch(char expn){
			cout << "2 : 잘못 입력하셨습니다.\n" << endl;
			fflush(stdin);
			continue;
		}
		
			
	}

	
	
	cout << "\n\n";
	cout << "이제부터 당신은 " << Mname[n - 1] << "와(과)의 트레이닝과 레이스가 시작됩니다." << endl;
	//cout << "과연 승준은 이 다음을 완성할 수 있을까요?\n" << endl;
	

	//선택 캐릭터 이외는 할당 해제.
	for (i = 0; i < 5;i++) {
		if (i == n-1)
			continue;
		delete myUma[i];
	}
	cout << "" << endl;

	
	//-------------레이스 파트--------------

	

	//myUma[n - 1]->StatusOpen();
	
	cout << "-------------레이스 파트입니다.---------------------\n";
	cout << "레이스는 2000m의 경기장에서 진행됩니다.\n";
	//cout << "5명의 캐릭터 중 먼저 골에 도착하는 캐릭터가 승리합니다.\n";
	//cout << "플레이어 여러분은 경기 중 버튼을 눌러서 TP가 다 찬 본인의 캐릭터의 스킬을 발동시킬 수 있습니다.\n";
	cout << "당신의 캐릭터의 능력치입니다.\n";
	myUma[n - 1]->StatusOpen();
	2

	cout << "레이스를 시작하시겠습니까? : ";
	cin >> yn;
	if (yn == 'N' or yn == 'n') {
		cout << "레이스를 취소합니다.\n";
		return 0;
	}

	cout << "레이스를 시작합니다!\n";
	int nowpoint = 0;
	
	//인라인이 문제였넼ㅋㅋㅋ
	myUma[n - 1]->ShowCurrent();
	
	cout << "-------------------" << endl;
	while (myUma[n - 1]->GetPosition() <= 2000) {
		nowpoint = myUma[n - 1]->GetPosition();
		myUma[n - 1]->SpeedCalculation();
		myUma[n - 1]->UseSkill();
		myUma[n - 1]->ShowCurrent();
		cout << "-------------------" << endl;

		Sleep(1000);
	}
	cout << "레이스가 종료되었습니다!\n";


	//TheRace(n);

	
	
	


	return 0;
}