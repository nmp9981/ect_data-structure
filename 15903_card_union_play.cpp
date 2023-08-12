#include <iostream>
#include <queue>
using namespace std;
typedef long long ll;

int n,m;
priority_queue<ll,vector<ll>,greater<ll>> pq;//최소힙

//입력
void input(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        ll x;cin>>x;
        pq.push(x);
    }
}
//합체
void Union(){
    for(int i=0;i<m;i++){//m번 합체
        ll firstNum = pq.top();
        pq.pop();
        ll secondNum = pq.top();
        pq.pop();
        
        //합체 후 덮어쓰기
        ll sum = firstNum+secondNum;//합
        pq.push(sum);
        pq.push(sum);
    }
}
//점수
void Score(){
    ll total = 0;
    while(!pq.empty()){
        total+=pq.top();
        pq.pop();
    }
    cout<<total;
}
int main()
{
    input();//입력
    Union();//합체
    Score();//점수
    return 0;
}
