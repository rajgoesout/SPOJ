// https://www.spoj.com/problems/NY10A/
#include <iostream>
#include <cstring>

using namespace std;

int countFreq(char *pat, char *txt) {
    int M = strlen(pat);
    int N = strlen(txt);
    int res = 0;

    for (int i = 0; i <= N - M; i++) {
        int j;
        for (j = 0; j < M; j++)
            if (txt[i + j] != pat[j])
                break;
        if (j == M) {
            res++;
            j = 0;
        }
    }
    return res;
}

int main() {
    int p, n;
    cin >> p;
    char s[40];
    for (int i = 1; i <= p; i++) {
        cin >> n;
        cin >> s;
        int ttt = countFreq("TTT", s);
        int tth = countFreq("TTH", s);
        int tht = countFreq("THT", s);
        int thh = countFreq("THH", s);
        int htt = countFreq("HTT", s);
        int hth = countFreq("HTH", s);
        int hht = countFreq("HHT", s);
        int hhh = countFreq("HHH", s);
        cout << n << " " << ttt << " " << tth << " " << tht << " " << thh << " " << htt << " " << hth << " " << hht
             << " " << hhh << endl;
    }
    return 0;
}
