#include<bits/stdc++.h>
using namespace std;

void bfs(unordered_map<int,list<int>>&mp,int start)
{
    unordered_map<int,bool>vs;
    queue<int>q;
    vs[start] = true;
    q.push(start);
    while(!q.empty())
    {
        int crr = q.front();
        q.pop();
        cout<<crr<<" ";
        for(int i:mp[crr])
        {
            if(!vs[i])
            {
                vs[i] = true;
                q.push(i);
            }
        }
    }
}
int main()
{
    unordered_map<int,list<int>>mp;
    mp[1] = {2, 3};
  mp[2] = {1, 3, 4, 5};
  mp[4] = {2, 5};
  mp[5] = {4, 2, 3};
  mp[3] = {1, 5, 2};
  int start = 1;
  bfs(mp,start);

}
