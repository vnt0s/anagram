#include <iostream>
#include <string>

using namespace std;
void sortuj(string &s) //dzieki & przekazujemy kopie
{
    int i,j,m;
    char ch;
    for(i=0;i<s.size()-1;i++)
    {
        m=i;
        for(j=i+1;j<s.size();j++)
            if (s[j]<s[m]) m=j;
        ch=s[i]; s[i]=s[m]; s[m]=ch;
    }
}
bool an(string s1, string s2)
{
    if (s1.size()!=s2.size()) return false;
    sortuj(s1); sortuj(s2);
    return (s1==s2);
}
int main()
{
 string s1,s2;
 cout<<"Podaj pierwsze slowo: ";
 cin>>s1;
 cout<<"Podaj drugie slowo: ";
 cin>>s2;

 if (an(s1,s2))
    cout<<"TAK";
 else
    cout<<"NIE";
}
