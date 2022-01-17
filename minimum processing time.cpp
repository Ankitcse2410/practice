#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> &process , vector<int> &task)
{
    int n = process.size(), m = task.size();
    sort(process.begin(),process.end());
    sort(task.begin(),task.end());
    int ans=0,j=m-1;
    for(int i=0;i<n;i++)
    {
        int cnt=0;
        while(j>=0)
        {
            ans = max(ans,process[i]+task[j]);
            cnt++;
            j--;
            if(cnt>=4)
            break;
        }
    }
    return ans;
}
int main()
{
   int n; cin>>n;
   vector<int> processTime(n) , taskTime(4*n);
   for(int i=0;i<n;i++)
   {
       cin>>processTime[i];
   }
   for(int i=0;i<4*n;i++)
   {
       cin>>taskTime[i];
   }
   cout<<solve(processTime,taskTime)<<endl;
}
