#include<iostream>
using namespace std;
enum weekday
{
    s,m,t,w,thu,f,sta
};
int main() {
    weekday wek = s;
    int f = 1;
    for(int i = wek; i != f; i ++)
    {
        cout << i << endl;
        cout << wek + s <<endl;
        cout << " " << endl;
    }
    system("pause");
    return 0;
}