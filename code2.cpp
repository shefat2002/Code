#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl cout << "\n"


void file()
{
    #ifndef ONLINE_JUDGE 
    freopen("in.txt" , "r", stdin);
    freopen("out.txt" , "w", stdout);
    #endif
}

void solve1()
{
    string s;
    getline(cin,s);
    for(int i = 0; i < s.size() ;i++){
        if(s[i]==' ')nl;
        else cout << s[i];
    }nl;
    cout << "*";
}

void solve2()
{
    string s;
    getline(cin,s);
    int c=0,idc=0;
    for(int i = 0; i < s.size() ;i++){
        if(s[i]=='/'&& s[i+1]=='/' && i+1<s.size()){
            idc=i;  break; 
        }
        else cout << s[i];
    }nl;
    for(int i = idc+2;i<s.size();i++)c++;
    cout << c;
}
void solve3()
{
    string s;
    getline(cin,s);
    int idc=0,cc=0,idd=0,ide=0;
    for(int i = 0; i < s.size() ;i++){
        if(s[i]=='/'&& s[i+1]=='/' && i+1<s.size()){
            idc=i;  break; 
        }
        if(s[i]=='"'){
            cc++;
            if(cc==1)idd=i;
            if(cc==2)ide=i;
        }
    }
    if(cc==2){
        cout << "This is a String, ";
        for(int i =idd ; i<= ide;i++){
            cout << s[i];
        }
        
    }
    else if(idc){
        cout << "This is a Comment, ";
        for(int i = idc+2;i<s.size();i++){
            cout << s[i];
        }
    }
    else cout << "No String or Comment found";
    nl;
}
void solve4()
{
    string s;
    getline(cin,s);
    int c=0;
    for(int i = 0; i < s.size() ;i++){
        if(s[i]==' '){
            cout << '#';c++;
        }
        else cout << s[i];
    }nl;    
    cout<< c;nl;
}
void solve5()
{
    string s;cin >> s;
    if(s=="scanf" || s=="printf"|| s=="main" || s=="return"){
        cout << "Invalid";nl;return;
    }
    if(!isalpha(s[0]) && s[0]!='_'){
        cout << "Invalid";nl;return;
    }
    cout << "Valid";nl;
}

void solve6()
{
    string s;cin >> s;
    if(s[s.size()-2]=='(' && s[s.size()-1]==')'){
        cout << "Function";
    }
    else cout << "Not a Function";nl;
}
void solve7()
{
    string s;
    getline(cin,s);
    int n = s.size();
    int sp=1;
    for(int i =0 ; i< n; i++){
        if(s[i]==' ')sp++;
    }
    string t[sp];
    for(int i = 0,j=0; i < n ;i++){
        if(s[i]== ' ')j++;
        else t[j]+=s[i];
    }
    int a=0,b=0;
    for(int i = 0; i < sp; i++){
        if(t[i]=="Argentina")a++;
        if(t[i]=="Brazil")b++;
    }
    cout << max(a,b);
    

}
void solve8()
{
    string s;cin >> s;
    for(int i= 0 ; i< s.size() ; i++){
        if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='='){
            cout << "Operator";nl;return;
        }
    }
    cout << "Not an Operator";nl;
}

void solve9()
{
    string s;
    getline(cin,s);
    int i=0;
    for(i = 0 ; i< s.size() ; i++){
        if(s[i]=='/' && s[i+1]=='/'&& i+1<s.size()){
            break;
        }
        cout << s[i];
        
    }nl;
    cout << s.size()-i  ;nl; 

}

void solve10()
{
    string s;
    getline(cin,s);
    int n = s.size();
    int sp=0;
    for(int i =0 ; i< n; i++){
        if(s[i]==' '){
            sp++;
            cout<< "space";
        }
        else cout << s[i];
    }
    if(sp==0)cout<<"No Spaces were found";nl;
}

int main()
{
    file();
    // solve1();
    // solve2();
    // solve3();
    // solve4();
    // solve5();
    // solve6();
    // solve7();
    // solve8();
    // solve9();
    solve10();
}