#include<iostream>
using namespace std;
int main(int argc, char const * argv[]) {
    int i,j,k,f;
    for(int i = 1; i <= 4; i ++) {
        for(j = 1; j <= 30; j ++) {
            cout << " ";
        }
        for(k = 1; k <= 8 - 2*1; k ++) {
            cout << " ";
        }
        for(f = 1; f <= 2 * i; f ++) {
            cout << '*';
        }
    }
     for(i=1;i<=3;i++){
        for (j=1;j<=30;j++)
            cout<<" ";
        for (f=1;f<=7-2*i;f++)
            cout<<'*';
        cout<<endl;
    }
    system("pause");
    return 0;
}