//�Լ� ����.
//�̶�� �غ��� �ϳ� �ۿ� ������.
#include "trainOn.h"

bool FirstSelect(const string& name) {
	char yn;

	while (true) {
		cout << "�� ĳ���͸� ���ðڽ��ϱ�? Y / N : ";
		cin >> yn;
		if (yn == 'Y' || yn == 'y') {
			cout << "����� ĳ���ʹ� " << name << " �Դϴ�." << endl;
			return true;
			break;
		}
		else if (yn == 'N' || yn == 'n') {
			cout << "ĳ���� ����â���� ���ư��ϴ�." << endl;
			return false;
			break;
		}
		else {
			cout << "��ҹ��� ���� ���� Y Ȥ�� N���� ������ֽʽÿ�." << endl;
			continue;
		}
		cout << "\n\n";

	}
	

}



