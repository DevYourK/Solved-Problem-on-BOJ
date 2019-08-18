#include <stdio.h>

int main() {
    int p[4], q[4];
    for(int i=0; i<4; i++){scanf("%d", &p[i]);}
    for(int i=0; i<4; i++){scanf("%d", &q[i]);}

    if(q[2] < p[0] && q[3] < p[1] || q[0] > p[2] && q[1] > p[3]) {
        printf("NULL");
    } else {
        if(p[0] == q[2] || p[2] == q[0]){
            if(p[0] == q[2] && p[1] == p[3] || p[2] == q[0] && p[3] == q[1]) {
                printf("POINT");
            } else {
                printf("LINE");
            }
        } else if(p[1] == p[3] || p[3] == q[1]) {
            if(p[0] == q[2] && p[1] == p[3] || p[2] == q[0] && p[3] == q[1]) {
                printf("POINT");
            } else {
                printf("LINE");
            }
        } else {
            printf("FACE");
        }
    }
}