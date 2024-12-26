#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e3 + 3;
const int M = 5e3 + 3;
struct node{
    int nxt,v,w;
};
node e[M];
int head[N];
int cnt;
bool st[N];
bool flag0,flag;
vector<pair<int,int>> g[N];
int dist[N];
int n,m,x,y,w,u,v,c;
void add(int u,int v,int w)
{
    cnt ++;
    e[cnt].v = v;
    e[cnt].w = w;
    e[cnt].nxt = head[u];
    head[u] = cnt;
}
void dij(int start)
{
    for(int i = 1;i <= n;i ++)
    {
        st[i] = 0;
    }
    dist[start] = 0;
    priority_queue<pair<int,int>> que;
    que.push(make_pair(0 , start));
    while(!que.empty())
    {
        int t = que.top().second;que.pop();
        if(st[t]) continue;
        st[t] = 1;
        for(int j = head[t];j;j = e[j].nxt)
        {
            int v = e[j].v;
            int w = e[j].w;
            if(dist[v] > dist[t] + w)
            {
                dist[v] = dist[t] + w;
                que.push(make_pair(-dist[v] , v));
            }
        }
    }
    return ;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    
    cin >> n >> m >> c;
    for(int i = 1; i<= m; i ++)
    {
        cin >> u >> v >> w;
        if(w <= c)
        {
            flag0 = true;
        }
        add(u , v , w);
        g[v].push_back(make_pair(u , w));
    }
    for(int i = 1;i <= n; i ++)
    {
        for(int j = 1;j <= n; j ++)
        {
            dist[j] = 0x3f3f3f3f3f3f3f3f;
        }
        dist[i] = 0;
        dij(i);
        for(int j = 0;j < g[i].size();j ++)
        {
            if(dist[g[i][j].first] + g[i][j].second <= c)
            {
                flag = true;
            }
        }
    }
    if(flag)
    {
        cout << 2;
        return 0;
    }
    if(flag0)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
}