//#pragma GCC optimize(2)


#include<bits/stdc++.h>
using namespace std;
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
//#include<ext/pb_ds/hash_policy.hpp>
//#include<ext/pb_ds/trie_policy.hpp>
//#include<ext/pb_ds/priority_queue.hpp>
//#include<ext/rope>
//using namespace __gnu_cxx;
//using namespace __gnu_pbds;
//void err(istream_iterator<string> it){cerr<<endl;}
//template<typename T, typename... Args>void err(istream_iterator<string> it, T a, Args... args){cerr << *it << " = " << a << " , ";err(++it, args...);}
//#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
#define mem(a,b) memset((a),b,sizeof((a)))
#define fpre(x) cout<<fixed<<setprecision(x)
#define clr(v) (v).clear()
#define pii pair<int,int>
#define pdd pair<double,double>
#define pli pair<ll,int>
#define pll pair<ll,ll>
#define mp make_pair
#define eb emplace_back
#define pb emplace_back
#define ll long long
#define ld long double
#define ull unsigned long long
#define uint unsigned int
#define ushort unsigned short
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define lowbit(i) (i&(-i))
#define lson (rt<<1)
#define rson lson|1
#define fi first
#define se second
const ld eps=1e-10;
const ld pi=acos(-1);
inline int dcmp(ld x)
{
    if(x<-eps)
        return -1;
    if(x>eps)
        return 1;
    return 0;
}
//-----------------------------------------------head

int main()
{
    //只输入所有的元组，输出直接命名为user.json
    freopen("user.in","r",stdin);
    freopen("user.json","w",stdout);
    string a[200],b[200],c[200],d[200];
    for(int i=0;i<100;++i)
        cin>>a[i];
    for(int i=0;i<100;++i)
        cin>>b[i];
    for(int i=0;i<100;++i)
        cin>>c[i];
    for(int i=0;i<100;++i)
        cin>>d[i];
    cout<<"{\"users\":"<<endl;
    cout<<"\t["<<endl;
    for(int i=0;i<100;++i)
        cout<<"\t{\"nickname\":\""<<a[i]<<"\",\"username\":\""<<b[i]<<"\",\"official\":"<<d[i]<<",\"gender\":"<<c[i]<<"},"<<endl;
    cout<<"\t]"<<endl;
    cout<<'}'<<endl;
}
