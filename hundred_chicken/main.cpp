#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 0;i<=100;i++){
        for(int j = 0;j<=100-i;j++){
            for(int k = 0;k<=100-i-j;k++){
                if(i*15+j*9+k <= 3*n && (i+j+k) == 100){
                    printf("x=%d,y=%d,z=%d\n",i,j,k);
                }
            }
        }
    }
/*    while(scanf("%d",&n)!=EOF){
        for(int i = 0;i<=100;i++){
            for(int j = 0;j<=100-i;j++){
                for(int k = 0;k<=100-i-j;k++){
                    if(i*15+j*9+k <= 3*n && (i+j+k) == 100){
                        printf("x=%d,y=%d,z=%d\n",i,j,k);
                    }
                }
            }
        }
    }*/

    return 0;
}