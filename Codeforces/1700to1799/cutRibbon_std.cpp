#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int maxSum = 0;

    for(int i = 0; i*a <= n; i++){
        for(int j = 0; i*a + j*b <= n; j++){
            int k = (n - (i*a + j*b)) / c;
            if(i*a + j*b + k*c == n){
                int sum = i + j + k;
                maxSum = max(sum, maxSum);
                // cout << i << " " << j << " " << k << endl;
            }
        }
    }
    cout << maxSum;
}