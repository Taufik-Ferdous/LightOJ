#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, count=1;
    cin>>n;

    while(n--){
        int me, lift, ans = 0;
        cin>>me >>lift;

        int t1 = abs(me-lift);

        ans = (t1*4) + ((3*2)+5) + ((me*4)+3+5);

        cout<<"Case " <<count <<": " <<ans <<endl;
        count++;
    }
    return 0;
}