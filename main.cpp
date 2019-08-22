#include <iostream>
using namespace std;

int y;
int x;

void verifnumero(int x) {
    if (x == 1) {
        throw;
    } else{
        y=x;
        cout<<y<<"\n";
    }

}

void nuevonumero(int y){
    int final;
    if (y % 2 == 0){
        final=y/2;
        cout<<final<<"\n";
    }
    else{
        final=y*3+1;
        cout<<final;
    }
}

int main() {
    cin >> x;
    verifnumero(x);
    nuevonumero(y);
}