#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(i =0; i<n; i++)
#define repi(i, x, n) for(i = x; i<n; i++)
class City{
    public:
    double x, y, h;
};
City* cities;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, i, j;
    cin>>n;

    cities = new City[n];

    rep(i, n){

        double x, y, h;
        cin>>x>>y>>h;
        cities[i].x = x;
        cities[i].y = y;
        cities[i].h = h;
    }

    double* dp = new double[n];

    dp[0] = cities[0].h;

    double dis, happ;

    for(i = 1; i<n; i++){

        dp[i] = -DBL_MAX;

        for(j = i-1; j>=0; j--){

            dis = (double)( pow( cities[i].x - cities[j].x, 2.0) - pow(cities[i].y - cities[j].y, 2.0 ) );
            dis = (double)(sqrt(dis));

            happ =  dp[j] - dis ;

            cout<<happ<<endl;

            dp[i] = max(dp[i], happ);
        }
        dp[i]=dp[i]+cities[i].h
    }
  rep(i, n)
    	cout<<dp[i]<< " ";
  cout<<endl;
    cout<<fixed<<setprecision(6)<<dp[n-1];
}
