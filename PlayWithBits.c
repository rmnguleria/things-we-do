#include<stdio.h>
#include<math.h>
#define MIN(a,b) ((a)<=(b)?(a):(b))

int A[4][100005],Carry[2][400],N,N2;

int Read(int ind) { char ch=0; int a=0; while(ch<33) ch=getchar_unlocked(); while(ch>33) { A[ind][N-3-a++]=ch-'0'; ch=getchar_unlocked(); } A[ind][N-1]=A[ind][N-2]=0; }

int Update(int pos,int bit,int ind) { A[ind][pos]=bit; CalBlock((pos/N2)*N2,MIN(N,((pos/N2)+1)*N2),pos/N2); }

int CalBlock(int from,int to,int bno)
{
    int i,j,c[2]={0,1};
    for(j=from;j<to;j++) for(i=0;i<2;i++) { A[2+i][j]=A[0][j]^A[1][j]^c[i]; c[i]=(c[i]&(A[0][j]^A[1][j]))|(A[0][j]&A[1][j]); }
    Carry[0][bno]=c[0]; Carry[1][bno]=c[1];
}

void solve(int k)
{
     int i,c=0; for(i=0;i<(k/N2);i++) c=Carry[c][i];
     printf("%d",A[2+c][k]);
}

int Pprocess()
{
    int i,j,p; N2=sqrt(N);
    for(i=0;((i+1)*N2)<N;i++) CalBlock(i*N2,(i+1)*N2,i);
    if(i*N2<N) CalBlock(i*N2,N,N2);
}

int main()
{
    int Q;
    scanf("%d%d",&N,&Q); N+=2;
    Read(0); Read(1); Pprocess();
    while(Q--)
    {
              char q[10]; int i,j; scanf("%s",q);
              if(q[0]=='s') { scanf("%d%d",&i,&j); Update(i,j,q[4]=='b'); }
              else { scanf("%d",&i); solve(i); }
    }
    return 0;
}