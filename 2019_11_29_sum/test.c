#include <stdio.h>

int main()
{
    int n = 10;
    scanf("%d", &n);
    int a[n];
    int i = 0;
    for(; i < n; i++){
        a[i] = i;
        printf("%d\n", a[i]);
    }
    return 0;
}
