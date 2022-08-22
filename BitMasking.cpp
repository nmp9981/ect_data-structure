#include <iostream>
using namespace std;

int m,x;
int bit = 0;//공집합

//연산
void Cal() {
	for (int i = 0; i < m; i++) {
		string command;
		cin >> command;
		if (command == "add") {//추가
			cin >> x;
			bit = bit | (1 << x);
		}
		else if (command == "remove") {//제거
			cin >> x;
			bit = bit & ~(1 << x);
		}
		else if (command == "check") {//확인
			cin >> x;
			if (bit & (1 << x)) cout << 1 << "\n";
			else cout << 0 << "\n";
		}
		else if (command == "toggle") {//XOR
			cin >> x;
			bit = bit ^ (1 << x);
		}
		else if (command == "all") {//전체집합
			bit = (1 << 21) - 1;
		}
		else if (command == "empty") {//공집합
			bit = 0;
		}
	}
}
int main()
{
	//빠른 입력
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> m;
	Cal();//연산
	return 0;
}
