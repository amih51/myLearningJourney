#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int m[5][5];
    int iTemp, jTemp;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> m[i][j];
            if(m[i][j]==1){
                iTemp = i;
                jTemp = j;
    //cout << endl << i << endl << j << endl;
    //cout << endl << iTemp << endl << jTemp << endl;
            }
        }
    }

    int sum = abs(iTemp-2) + abs(jTemp-2);
    cout << sum;
    //cout << endl << iTemp << endl << jTemp;
}