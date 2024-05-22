#include <stdio.h>
int main(){
    int N;
    int x,y,z;
    while(scanf("%d\n%d%d%d",&N,&x,&y,&z)!=EOF){
        int Tur_m = 0;
        int f=0,r=0;
        for(int i = 1;i<=9;i++){
            for(int j = 0;j<=9;j++){
                int sum = i*10000+x*1000+y*100+z*10+j;
                for(int turkey = 1;turkey<=sum;turkey++){
                    if(turkey*N == sum){
                        Tur_m = turkey;
                        f = i;
                        r = j;
                    }
                }
            }
        }
        if(0 == f&&0 == r&& 0 == Tur_m){
            printf("%d\n",f);
        }
        else{
            printf("%d %d %d\n",f,r,Tur_m);
        }

    }

    return 0;
}