#include<bits/stdc++.h>
using namespace std;
bool cmp(long long a, long long b){
    return a > b;
}
main(){
    long long t; cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long a[n + 1];
        long long b[n + 1];
        for(long long i = 0; i < n; i++) cin >> a[i];
        for(long long i = 0; i < n; i++) cin >> b[i];
        sort(a, a + n);
        sort(b, b + n, cmp);
        long long sum = 0;
        for(long long i = 0; i < n; i++){
            sum += a[i]*b[i];
        }
        cout << sum << endl;
    }
}