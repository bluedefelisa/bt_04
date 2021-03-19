#include<iostream>
#include<vector>

using namespace std;

string reversestr(string s){
    string p = s;
    for(int i = 0; i <= s.size()/2; i++){
        swap(p[i], p[p.size()-1-i]);

    }
        return p;
}
int main()
{
    int n;
    cin >> n;
    vector < vector <string> > s;
    s.resize(n);
    for(int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        s[i].push_back(str);
    }
    for(int i = 0; i < n; i++){
        string p = reversestr(s[i][0]);
        for(int j = i+1; j < n; j++){
            if (p == s[j][0]) {
                cout << p.size() << ' ' << p[p.size()/2];
                return 0;
            }
        }
    }
}
