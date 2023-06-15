#include <string>
#include <vector>
#include <queue>
using namespace std;

//공격
int Attack(int n,int k,vector<int> enemy){
    priority_queue<int> q;//최대힙
    int qsum =0;
    for(int i=0;i<enemy.size();i++){
        q.push(enemy[i]);
        qsum+=enemy[i];
        
        if(n<qsum){//무적기 활용
            if(k==0) return i;//무적기를 다씀
            k--;
            qsum-=q.top();
            q.pop();
        } 
    }
    return enemy.size();//모두 퇴치
}
int solution(int n, int k, vector<int> enemy) {
    return Attack(n,k,enemy);
}
