#include <iostream>

void update(int *a,int *b) {
    int s=*a;
    *a=*a+*b;
    *b=abs(s-*b);
    // Complete this function    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
