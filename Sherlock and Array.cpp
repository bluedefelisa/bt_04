
#include <iostream>

using namespace std;

int main()
{
    int t,n;
    int tempSum[100001];
    cin>> t;
    for(int i = 0; i < t; i++){
        cin>> n;
        int isTrue=0;
        int sum=0;
        for (int j = 1; j <= n; j++){
            int x;
            cin>> x;
            tempSum[j] = tempSum[j-1] + x;

        }
        bool check=false;
        for (int j = 1; j <= n; j++){
            if (tempSum[j-1]+tempSum[j] == tempSum[n]) {
                isTrue = 1;
                break;
            }
        }
        if (isTrue) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
