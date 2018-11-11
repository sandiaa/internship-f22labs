#include <iostream> 
#include <bits/stdc++.h> 
using namespace std; 
string low(string st)
{
for(int i=0;st[i]!='\0';i++)
{
if(st[i]>='A'&&st[i]<='Z')
{
st[i]=st[i]+32;
}
}
return st;
} 
int checkPresence(string &w) 
{ 
fstream file; 
string word,filename; 
filename = "db.txt"; 
file.open(filename.c_str()); 
while (file >> word) 
{  
std::string str2(word.size(),'0');
str2.erase(std::remove_copy(word.begin(),word.end(),str2.begin(),','),str2.end());
string   str3=low(str2);
string  str4=low(w);
if (str3.compare(str4) == 0) 
return true;
}
return false; 
} 
void segmentProc(string str,int size,string res); 
void segmentString(string str) 
{ 
segmentProc(str,str.size(),""); 
} 
void segmentProc(string str,int n,string res) 
{ 
for(int i=1;i<=n;i++) 
{
string p=str.substr(0,i); 
if(checkPresence(p)) 
{ 
if(i == n) 
{ 
res+= p; 
cout<<res<<endl; 
return; 
} 
segmentProc(str.substr(i,n-i),n-i,res+p+" "); 
} 
}	
}
int main() 
{ 
string s;
cout<<"Enter string:\n"; 
cin>>s;
segmentString(s); 
return 0; 
} 

