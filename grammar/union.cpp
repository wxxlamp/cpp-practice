#include<iostream>
using namespace std;
union myunion
{
    struct un
    {
        int x, y, z;
    } b;
    int t;
} a;
int main() {
    a.b.x = 4;
    a.b.y = 5;
    a.b.z = 6;
    a.t = 0;
    cout << a.b.x << " " << a.b.y << " " << a.b.z << " " << a.t;
    system("pause");
    return 0;
 }