#include <iostream>

int main()
{
    int a; scanf("%d", &a);
    int A[a], B[a];
    
    for(int i=0; i<a; i++){
        scanf("%d %d", &A[i], &B[i]);
    }
    for(int i=0; i<a; i++){
        printf("%d\n", A[i]+B[i]);
    }
    return 0;
}