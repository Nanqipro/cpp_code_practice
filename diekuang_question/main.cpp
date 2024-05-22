#include <cstdio>
int main(){
    int n;
    char inner,outer;
    bool flag = true;
    while(scanf("%d %c %c",&n,&inner,&outer)!=EOF){
    // %c可以读取空白字符（空格和换行）
    // printf("n = %d,inner = %c,outer = %c\n",n,inner,outer);
        if(flag == true){
            flag = false;
        } else{
            printf("\n");
        }
        char pattern[80][80] = {0};
        int x,y;
        int len = 1;
        char curchar = inner;
        for(len = 1,x = n/2,y = n/2;len<=n;len = len+2,x--,y--){
            for(int i = x,j = y;i<x+len;i++){
                pattern[i][j] = curchar;
            }
            for(int i = x,j = y;j<y+len;j++){
                pattern[i][j] = curchar;
            }
            for(int i = x+len-1,j =y;j<y+len;j++){
                pattern[i][j] = curchar;
            }
            for(int i = x,j = y+len-1;i<x+len;i++){
                pattern[i][j] = curchar;
            }
            if(curchar == inner){
                curchar = outer;
            }
            else{
                curchar = inner;
            }
        }
        if(n!=1){
            pattern[0][0] = ' ';
            pattern[0][n-1] = ' ';
            pattern[n-1][0] = ' ';
            pattern[n-1][n-1] = ' ';
        }
        for(int i = 0;i<n;i++){
            printf("%s\n",pattern[i]);
        }
//        printf("\n");
    }
}