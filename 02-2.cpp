#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout<<"½Ð¿é¤J¼Æ¦r"
    string a,ans;
    cin>>a;
    for(int i=a.length()-1;i>=0;i--){
        ans+=a[i];
    }
    cout<<a<<ans;
}
