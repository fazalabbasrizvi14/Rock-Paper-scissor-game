#include<bits/stdc++.h>
using namespace std;

int main()// RPS
{
    int a=1;
    string r="Rock";
    string R=r;
    string p="Paper";
    string P=p;
    string s="Scissor";
    string S=s;
    vector<string> v;
    v.push_back(r);
    v.push_back(p);
    v.push_back(s);
    int comp=0,player=0;
    cout<<"For Single player select 1 for two players select 2"<<endl;
    int d;
    cin>>d;
if(d==1)
{
    cout<<"Enter player name "<<endl;
    string pn;
    cin>>pn;
    while(a!=0)
    {
        string b;
        cout<<"choose R or r for Rock"<<endl;
        cout<<"choose P or p for Paper"<<endl;
        cout<<"choose S or s for Scissor"<<endl;
        cin>>b;
        if(b=="r" || b== "R")
        {
            b=r;
        }
        if(b=="s" || b== "S")
        {
            b=s;
        }
        if(b=="p" || b=="P")
        {
            b=p;
        }
        cout<<"you selected "<<b<<endl;
        if(b==r || b==p || b==s)
        {
        }
        else
        {
            cout<<"please select correct input"<<endl;
            continue;
        }

        string c;
        int i=rand()%3;
        c=v[i];
        /*while(b==c)
        {
            i=rand()%3;
            c=v[i];
        }*/
        cout<<"opponent selected "<<c<<endl;
        if(b==c)
        {
            cout<<"draw "<<endl;
            cout<<"Score -: "<<pn<<" : "<<player<<" opponent : "<<comp<<endl;
            cout<<"if you want to play again select any integer other than 0 else select 0"<<endl;
            cin>>a;
            continue;
        }
        if(b==r && c==p)
        {
            comp++;
            cout<<"you lost"<<endl;
        }
        else if(b==p && c==s)
        {
            comp++;
            cout<<"you lost"<<endl;
        }
        else if(b==s && c==r)
        {
            comp++;
            cout<<"you lost"<<endl;
        }
        else
        {
            player++;
            cout<<"you won"<<endl;
        }
        cout<<"Score -: "<<pn<<" : "<<player<<" opponent : "<<comp<<endl;
        cout<<"if you want to play again select any integer other than 0 else select 0"<<endl;
        cin>>a;
    }
}
if(d==2)
{
    cout<<"Enter player 1 name "<<endl;
    string pn1,pn2;
    cin>>pn1;
    cout<<"Enter player 2 name "<<endl;
    cin>>pn2;
    while(a!=0)
    {
        string b;
        cout<<pn1<<" choose R or r for Rock"<<endl;
        cout<<pn1<<" choose P or p for Paper"<<endl;
        cout<<pn1<<" choose S or s for Scissor"<<endl;
        cin>>b;
        if(b=="r" || b== "R")
        {
            b=r;
        }
        if(b=="s" || b== "S")
        {
            b=s;
        }
        if(b=="p" || b=="P")
        {
            b=p;
        }
        string c;
        cout<<pn2<<" choose R or r for Rock"<<endl;
        cout<<pn2<<" choose P or p for Paper"<<endl;
        cout<<pn2<<" choose S or s for Scissor"<<endl;
        cin>>c;
        if(c=="r" || c== "R")
        {
            c=r;
        }
        if(c=="s" || c== "S")
        {
            c=s;
        }
        if(c=="p" || c=="P")
        {
            c=p;
        }
        cout<<pn1<<" selected "<<b<<endl;
        cout<<pn2<<" selected "<<c<<endl;
        if(b==r || b==p || b==s)
        {
        }
        else
        {
            cout<<pn1<<" please select correct input"<<endl;
            continue;
        }
        if(c==r || c==p || c==s)
        {
        }
        else
        {
            cout<<pn2<<" please select correct input"<<endl;
            continue;
        }
        if(b==c)
        {
            cout<<"draw "<<endl;
            cout<<"Score -: "<<pn1<<" : "<<player<<" "<<pn2<<" : "<<comp<<endl;
            cout<<"if you want to play again select any integer other than 0 else select 0"<<endl;
            cin>>a;
            continue;
        }
        if(b==r && c==p)
        {
            comp++;
            cout<<pn2<<" won"<<endl;
        }
        else if(b==p && c==s)
        {
            comp++;
            cout<<pn2<<" won"<<endl;
        }
        else if(b==s && c==r)
        {
            comp++;
            cout<<pn2<<" won"<<endl;
        }
        else
        {
            player++;
            cout<<pn1<<" won"<<endl;
        }
        cout<<"Score -: "<<pn1<<" : "<<player<<" "<<pn2<<" : "<<comp<<endl;
        cout<<"if you want to play again select any integer other than 0 else select 0"<<endl;
        cin>>a;
    }
}
    cout<<"Thank you";
}