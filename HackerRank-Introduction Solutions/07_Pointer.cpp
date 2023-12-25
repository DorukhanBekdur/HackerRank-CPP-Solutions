#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void update(int *a, int *b){
    int c = *a;
    *a = *a + *b;
    *b = c - *b;
    if(*b < 0){
        *b = -(*b);
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    cin >> a >> b;
    update(pa, pb);
    cout << a << endl;
    cout << b; 
    return 0;
}
