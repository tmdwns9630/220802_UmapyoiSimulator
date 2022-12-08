//함수 모음.
//이라고 해봤자 하나 밖에 없지만.
#include "trainOn.h"

bool FirstSelect(const string& name) {
	char yn;

	while (true) {
		cout << "이 캐릭터를 고르시겠습니까? Y / N : ";
		cin >> yn;
		if (yn == 'Y' || yn == 'y') {
			cout << "당신의 캐릭터는 " << name << " 입니다." << endl;
			return true;
			break;
		}
		else if (yn == 'N' || yn == 'n') {
			cout << "캐릭터 선택창으로 돌아갑니다." << endl;
			return false;
			break;
		}
		else {
			cout << "대소문자 구분 없이 Y 혹은 N으로 대답해주십시오." << endl;
			continue;
		}
		cout << "\n\n";

	}
	

}



