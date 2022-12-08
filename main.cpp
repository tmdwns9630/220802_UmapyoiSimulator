#include "trainOn.h"

int main()
{
	register int i = 0;
	register int n = 0;
	char yn = 0;
	const string Mname[5] = { "����� ��ũ","���̿� ��Į��","���Ϸ��� ����ī","������ ĸ","��� ��" };
	bool answer = false;
	
	//�⺻ Ŭ������ ���� ��ü �迭�� ���� �Ҵ��Ϸ��� ������ ����.
	//���µ� ��� �� ������ ���ϱ� ����.
	Uma* myUma[5] = { new SpecialWeek, new DaiwaScarlet,new SilenceSuzuka,new OguriCap, new GoldShip };


	
	/*
	SpecialWeek* myHorse1 = new SpecialWeek();
	DaiwaScarlet* myHorse2 = new DaiwaScarlet();
	SilenceSuzuka* myHorse3 = new SilenceSuzuka();
	OguriCap* myHorse4 = new OguriCap();
	GoldShip* myHorse5 = new GoldShip();
	*/
	cout << "�渶 �ùķ����Ϳ� ���� �������� ȯ���մϴ�." << endl;
	
	while (true) {
		//n = 0;
		cout << "\n\n";
		cout << "5���� �� �Բ��� ĳ���͸� ����ּ���." << endl;
		for (i = 0;i < 5;i++) {
			cout << i+1 << ". ";
			cout << Mname[i] << endl;
		}
		try {
			cout << "��ȣ �Է� : ";
			cin >> n;

			cout << endl;


			//������ ����ġ������ 5���� ���̽��� FirstSelect �Լ��� ������ ������
			//���� ����ġ���� �� �ʿ䰡 ��������.
			//������ �ν��Ͻ� ������ ����Լ��� ���� ���� �ٽ� switch�� ����.
			if (n > 0 && n < 6) {
				switch (n) {
				case 1: {
					//SpecialWeek sw1 =  SpecialWeek();
					cout << Mname[n - 1];
					cout << "��(��) �����ϼ̽��ϴ�.\n" << endl;
					cout << "�ɷ�ġ" << endl;
					myUma[n - 1]->StatusOpen();
					//myHorse1->StatusOpen();
					//sw1.StatusOpen();
					answer = FirstSelect(Mname[n - 1]);
					break;
				}
				case 2: {
					//DaiwaScarlet ds1 = DaiwaScarlet();
					cout << Mname[n - 1];
					cout << "��(��) �����ϼ̽��ϴ�.\n" << endl;
					cout << "�ɷ�ġ" << endl;
					//ds1.StatusOpen();
					//myHorse2->StatusOpen();
					myUma[n - 1]->StatusOpen();
					answer = FirstSelect(Mname[n - 1]);
					break;
				}
				case 3: {
					//SilenceSuzuka ss = SilenceSuzuka();
					cout << Mname[n - 1];
					cout << "��(��) �����ϼ̽��ϴ�.\n" << endl;
					cout << "�ɷ�ġ" << endl;
					//ss.StatusOpen();
					//myHorse3->StatusOpen();
					myUma[n - 1]->StatusOpen();
					answer = FirstSelect(Mname[n - 1]);
					break;
				}
				case 4: {
					//OguriCap sw1 = OguriCap();
					cout << Mname[n - 1];
					cout << "��(��) �����ϼ̽��ϴ�.\n" << endl;
					cout << "�ɷ�ġ" << endl;
					//sw1.StatusOpen();
					//myHorse4->StatusOpen();
					myUma[n - 1]->StatusOpen();
					answer = FirstSelect(Mname[n - 1]);
					break;
				}
				case 5: {
					//GoldShip sw1 = GoldShip();
					cout << Mname[n - 1];
					cout << "��(��) �����ϼ̽��ϴ�.\n" << endl;
					cout << "�ɷ�ġ" << endl;
					//sw1.StatusOpen();
					//myHorse5->StatusOpen();
					myUma[n - 1]->StatusOpen();
					answer = FirstSelect(Mname[n - 1]);
					break;
				}
				default:
					cout << "�������� ���� ���� 6��° ĳ���͸� ���̽��ϴ�...\n";
					cout << "���� ��� �߾��." << endl;
					break;
				}
				if (answer == true)
					break;
			}

			else {
				cout << "1 : �߸� �Է��ϼ̽��ϴ�.\n" << endl;
				fflush(stdin);
				break;
			}
				
		}
		catch(char expn){
			cout << "2 : �߸� �Է��ϼ̽��ϴ�.\n" << endl;
			fflush(stdin);
			continue;
		}
		
			
	}

	
	
	cout << "\n\n";
	cout << "�������� ����� " << Mname[n - 1] << "��(��)�� Ʈ���̴װ� ���̽��� ���۵˴ϴ�." << endl;
	//cout << "���� ������ �� ������ �ϼ��� �� �������?\n" << endl;
	

	//���� ĳ���� �ܴ̿� �Ҵ� ����.
	for (i = 0; i < 5;i++) {
		if (i == n-1)
			continue;
		delete myUma[i];
	}
	cout << "" << endl;

	
	//-------------���̽� ��Ʈ--------------

	

	//myUma[n - 1]->StatusOpen();
	
	cout << "-------------���̽� ��Ʈ�Դϴ�.---------------------\n";
	cout << "���̽��� 2000m�� ����忡�� ����˴ϴ�.\n";
	//cout << "5���� ĳ���� �� ���� �� �����ϴ� ĳ���Ͱ� �¸��մϴ�.\n";
	//cout << "�÷��̾� �������� ��� �� ��ư�� ������ TP�� �� �� ������ ĳ������ ��ų�� �ߵ���ų �� �ֽ��ϴ�.\n";
	cout << "����� ĳ������ �ɷ�ġ�Դϴ�.\n";
	myUma[n - 1]->StatusOpen();
	2

	cout << "���̽��� �����Ͻðڽ��ϱ�? : ";
	cin >> yn;
	if (yn == 'N' or yn == 'n') {
		cout << "���̽��� ����մϴ�.\n";
		return 0;
	}

	cout << "���̽��� �����մϴ�!\n";
	int nowpoint = 0;
	
	//�ζ����� ��������������
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
	cout << "���̽��� ����Ǿ����ϴ�!\n";


	//TheRace(n);

	
	
	


	return 0;
}