#include <cstdio>
#include <math.h>
int max(int a,int b,int c){
    int temp = a;
    if(b > temp){
        temp = b;
    }
    else if(c > temp){
        temp = c;
    }
    return temp;
}
int main() {
    int P,T,G1,G2,G3,Gl;
    while(scanf("%d%d%d%d%d%d",&P,&T,&G1,&G2,&G3,&Gl)!=EOF){
        float grade;
        if(abs(G1-G2)<=T){
            grade = (float)(G1+G2)/2;
        }
        else if(abs(G1-G2)>T && (abs(G3-G1)<=T || abs(G3-G2)<=T) && (abs(G3-G1)>T || abs(G3-G2)>T)){
            if(abs(G3-G1) < abs(G3-G2)){
                grade = (float)(G1+G3)/2;
            }
            else{
                grade = (float)(G2+G3)/2;
            }
        }
        else if(abs(G1-G2)>T && (abs(G3-G1)<=T && abs(G3-G2)<=T)){
                grade = (float) max(G1,G2,G3);
        }
        else{
            grade = (float)Gl;
        }
        printf("%.1f\n",grade);
    }
    return 0;
}
