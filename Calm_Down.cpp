#include<bits/stdc++.h>
using namespace std;
#define PI acos(-1.0)

void prmtr(double a, double b){
    double angle = PI/b;
    double ans = (a*sin(angle)) / (1+sin(angle));
    cout<<setprecision(10) <<ans;
}

int main(){
    int n, c=1;
    cin>>n;
    while(n--){
        double rad, num;
        cin>>rad >>num;
        cout<<"Case " <<c <<": ";
        prmtr(rad, num);
        cout<<endl;
        c++;
    }
    return 0;
}