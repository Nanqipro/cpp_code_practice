#include<cstdio>
/*int main() {
    int h;
    while(scanf("%d",&h)!=EOF){
//        scanf("%d",&h);
        for(int i = 0;i<h;i++){
            for(int j = 0;j<2*h-2-2*i;j++){
                printf(" ");
            }
            for(int j = 0;j<h+2*i;j++){
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}*/
char arr[1000][3000];// 全局二维数组

int main(){
    int h;
    while(scanf("%d",&h)!=EOF){
        for(int i = 0;i<h;i++){
            for(int j = 0;j<3*h-2;j++){
                arr[i][j] = ' ';
            }
            arr[i][3*h-2] = '\0';
        }
        int beg = 0;
        for(int i = h-1;i>=0;i--){
            for(int j = beg;j<3*h-2;j++){
                arr[i][j] = '*';
            }
            beg += 2;
        }
        for(int i = 0; i<h ; i++){
//            for(int j = 0;j<3*h-2 ;j++){
//                printf("%c",arr[i][j]);
//            }
            printf("%s\n",arr[i]);
//            printf("\n");
        }
    }
}