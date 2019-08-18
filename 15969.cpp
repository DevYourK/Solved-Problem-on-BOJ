#include <stdio.h>

int main() {
    int a; scanf("%d", &a);
    int b[a+1];
    
    for(int i=0; i<a; i++) 
    {
        scanf("%d", &b[i]);
    }
    
    b[a]=b[0]; b[a+1]=b[0];
    
    for(int i=1; i<a; i++)
    {
        if(b[i] != b[a] && b[i] != b[a+1]) {
            if(b[i] > b[a+1]) {
                b[a+1] = b[i];
            } else if(b[i] < b[a]) {
                b[a] = b[i];
            }
        }
    }
    
    printf("%d\n", b[a+1]-b[a]);
}