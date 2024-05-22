#include <cstdio>
using namespace std;
int numb = 0;
int a[30];
bool isGet[30];
bool DFS(int pos,int v_sum,int N){
    if(v_sum == 40){
        numb ++;
        return true;
    }
    for(int i =pos;i<N;i++){
        if(isGet[i] || v_sum+a[i]>40){
            continue;
        }
        isGet[i] = true;
        if(v_sum+a[i] < 40){
            if(DFS(i+1,v_sum+a[i],N)){
                return true;
            }
        }
        else if(v_sum+a[i] == 40){
            if(DFS(i+1,v_sum+a[i],N)){
                return true;
            }
        }
        isGet[i] = false;
    }
    return false;
}
int main() {
    int n;
    int total = 0;
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
        total += a[i];
        isGet[i] = false;
    }
    if(total >= 40){
        DFS(0,0,n);
        printf("%d\n",numb);
    }
    else{
        printf("%d\n",0);
    }
    return 0;
}
// 换种思路
/*
#include <cstdio>
using namespace std;
int numb = 0;
int a[30];
bool isGet[30];
void DFS(int pos,int V_num,int N){
    for(int i = pos;i<N;i++){
        if(!isGet[i]){
            //isGet[i] = true;
            if(V_num<40){
                DFS(i+1,V_num+a[i],N);
            }
            else if(V_num > 40){
                //isGet[i] = false;
                return;
            }
            else{
                numb++;
            }
        }

    }
}


int main(){
    int n;
    int total = 0;
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
        total += a[i];
        isGet[i] = false;
    }
    if(total >= 40){
        DFS(0,0,n);
        printf("%d\n",numb);
    }
    else{
        printf("%d\n",0);
    }
    return 0;
}*/
