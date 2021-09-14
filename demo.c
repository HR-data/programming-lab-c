#include <stdio.h>

int main(){
    int ch;
    int n1 = 0, n2 = 0;
    while((ch=getchar())!= '.'){
        n1 += ch - '0';
    } 
    while((ch=getchar())!= '\n'){
        n2 += ch - '0';
    }
    printf("%d.%d\n", n1, n2);
    return 0;
}