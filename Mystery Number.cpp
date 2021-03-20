#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int i,n,a[100],b[100],suma=0,sumb=0;
    cin>> n;
    for (i = 0; i < n; i++){
        cin>> a[i];
        suma += a[i];
    }
    for (i = 0; i <= n; i++){
        cin>> b[i];
        sumb += b[i];
    }

    cout<< sumb-suma;
    return 0;
}


