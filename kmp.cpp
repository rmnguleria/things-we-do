#include <iostream>
#include <cstring>
using namespace std;
void preKMP(string pattern, int f[])
{
    int m = pattern.length(), k;
    f[0] = -1;
    for (int i = 1; i < m; i++)
    {
        k = f[i - 1];
        while (k >= 0)
        {
            if (pattern[k] == pattern[i - 1])
                break;
            else
                k = f[k];
        }
        f[i] = k + 1;
    }
}
 
//check whether target string contains pattern 
bool KMP(string pattern, string target,int f[])
{
    int m = pattern.length();
    int n = target.length();     
    int i = 0;
    int k = 0;        
    while (i < n)
    {
        if (k == -1)
        {
            i++;
            k = 0;
        }
        else if (target[i] == pattern[k])
        {
            i++;
            k++;
            if (k == m)
                return 1;
        }
        else
            k = f[k];
    }
    return 0;
}
 
int main()
{
    int N;
    cin>>N;
    string allOfThem[N];
    for(int i=0;i<N;i++){
        cin>>allOfThem[i];
    }
    int Queries;
    cin>>Queries;
    int L,R;
    string str;
    for(int i=0;i<Queries;i++){
        cin>>L>>R>>str;
        int m = str.length();
        int f[m];     
        preKMP(str, f);
        int ans = 0;
        for(int i=L-1;i<R;i++){
            if(KMP(str,allOfThem[i],f)==1){
                ans+=1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}