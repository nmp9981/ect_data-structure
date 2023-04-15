#include <iostream>
#include <unordered_map>
using namespace std;

int n;
unordered_map<string, int> fashion;;

//입력
void input() {
    fashion.clear();//초기화
    cin >> n;
    for (int i = 0; i < n; i++) {
        string name, kinds;
        cin >> name >> kinds;
        fashion[kinds]++;
    }
}
//옷입기
int Wearing() {
    int cnt = 1;
    for (auto i : fashion) cnt *= (i.second+1);//경우의 수
    return cnt - 1;//알몸 제외
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--) {
        input();//입력
        cout<<Wearing()<<"\n";//옷입기
    }
    return 0;
}
