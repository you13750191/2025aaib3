#include<iostream>
#include<vector>
using namespace std;
int main()
{
    cout<<"�п�J�|�ӼƦr";
    vector<int>a;
    int now;
    for(int i=0;i<4;i++){
        cin>>now;
        a.push_back(now);
    }
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<' ';
    }
    cout<<"�{�b�{���X�̡A�S���J99 88��ӼƦr�A���G�O?\n";

    a.push_back(99);
    a.push_back(88);

    for(int i=0;i<a.size();i++){
        cout<<a[i]<<' ';
    }
}
