#include <string>
#include <vector>
#include <map>
using namespace std;

const int maxi = 31;
map<string,int> wear;
int wearCount[maxi];

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    //옷 종류별로 구분
    for(int i=0;i<clothes.size();i++){
        wear[clothes[i][1]]++;
    }
    //경우의 수 구하기
    for(auto iter : wear){
        answer*=(iter.second+1);
    }
    answer-=1;
    return answer;
}
