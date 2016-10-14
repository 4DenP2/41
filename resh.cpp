#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int n, a[1000], b[1000];
 
int main() {    
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
 
    scanf("%d", &n);
 
    for (int i = 0; i < n; ++i) {
        int x;
 
        scanf("%d", &x);        
         
        if (x < 0)
            ++b[x * -1];
        else
            ++a[x];
    }
 
    for (int i = 101; i > 0; --i)
        while (b[i] != 0) {
            printf("%d%c", i * -1, ' ');
            --b[i];
        }
 
    for (int i = 0; i < 101; ++i)
        while (a[i] != 0) {
            printf("%d%c", i, ' ');
            --a[i];
        }
}
