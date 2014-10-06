#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

#define FOR(it, c) for(__typeof((c).begin()) it = (c).begin(); it != (c).end(); it++)
#define SZ(c) ((int)(c).size())

typedef long long LL;
int MOD = 1e9+7;

int p[33][1005], up[33]={};
void add(int &x, LL v) {
    x = (x+v)%MOD;
}

const int MXB = 1000;
void pre(int S) {
    if(up[S]) return;
    up[S] = 1;
    p[S][0] = 1;
    for(int l=S;l<=MXB;l++) {
        for(int j=MXB;j>=l;j--)
            add(p[S][j], p[S][j-l]);
    }
    for(int j=1;j<=MXB;j++) add(p[S][j], p[S][j-1]);
    //printf("build: "); for(int j=0;j<=MXB;j++) printf("%d ", p[S][j]); puts("");
}

void solve() {
    int A, B, s;
    LL t;
    scanf("%d%d", &A, &B);

    if (A == 0) {
        pre(1);
        printf("%d\n", (p[1][B]+MOD-1)%MOD);
        return;
    }

    for(t=2,s=1;t<=A;t*=2,s++);
    t *= 2; s++;
    pre(s);

    //printf("s=%d\n", s);

    int ans = 0;
    LL last = 0, last2 = t/2+A+1;
    for(int u=0;u<s && u<=B;u++) {
        LL nxt = min(t, (1LL<<u) + A + (u>0));
        LL nxt2 = min(t, (1LL<<u) + A + t/2 + (u>0));
        add(ans, (nxt-last)*1LL*p[s][B-u]);
        if(u+s-1<=B) add(ans, (nxt2-last2)*1LL*p[s][B-(u+s-1)]);
        //printf("u=%d: [%I64d, %I64d)  %d; [%I64d, %I64d)  \n", u, last, nxt, p[s][B-u], last2, nxt2);
        last = nxt;
        last2 = nxt2;
    }
    //printf("nxt=%I64d\n", last);
    printf("%d\n", (ans+MOD-1)%MOD);
}

int main(void) {
    int T;
    scanf("%d", &T);
    while(T--) solve();
    return 0;
}