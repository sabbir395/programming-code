#include<bits/stdc++.h>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
    freopen("sabbir.txt","w",stdout);
    map<char,int>mp;
    map<char,int>::iterator it;
    map<char,int>::iterator itt;


    int i,ma;
    string s;
    while(getline(cin,s)){
   // cout<<"S:"<<s<<endl;
    mp.clear();
    for(i=0;i<s.size();i++)
    {
        if(s[i]==' ')continue;
        if(s[i]>='A'&&s[i]<='Z'||s[i]>='a'&&s[i]<='z'){
        if(mp.find(s[i])==mp.end()){
             mp[s[i]]=1;
        }
        else{
            mp[s[i]]++;
        }

    }
    }

   for(it=mp.begin();it!=mp.end();it++)
    {
        //cout<<"X:"<<it->first<<" "<<it->second<<endl;

    }
   // cout<<"m1"<<ma<<endl;
      ma=0;
     for(it=mp.begin();it!=mp.end();it++)
    {
        if(it->second >ma)
        {
            ma=it->second;

        }

    }
    // cout<<"m:"<<ma<<endl;
     for(it=mp.begin();it!=mp.end();it++)
    {
        if(it->second==ma){
        cout<<it->first;
        }

    }
     cout<<" "<<ma<<endl;
    }

}
