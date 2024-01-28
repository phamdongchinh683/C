#include <stdio.h>

int total(int a, int b);

int main() {
    int sum = total(2,2);
    printf("%d",sum);
    return 0;
}

int total(int a, int b){
        int total = a + b;
    return total;
}
