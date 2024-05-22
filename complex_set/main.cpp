#include <cstdio>
#include <queue>
#include <string>

using namespace std;
struct Complex{
    int re;
    int im;
};
//运算符重载
bool operator <(Complex lhs,Complex rhs){
    //lhs的模小于rhs的模
    return lhs.re*lhs.re+lhs.im*lhs.im<rhs.re*rhs.re+rhs.im*rhs.im;
}
int main(){
    int n;
    scanf("%d",&n);
    priority_queue<Complex> pqueue;
    for(int i = 0;i<n;i++){
        char action[30];
        scanf("%s",action);
        string actionstr = action;
        if(actionstr == "Pop"){
            if(pqueue.empty()){
                printf("empty\n");
            }else{
                printf("%d+i%d\n",pqueue.top().re,pqueue.top().im);
                pqueue.pop();
                printf("SIZE = %d\n",pqueue.size());
            }
        } else if(actionstr == "Insert"){
            int re,im;
            scanf("%d+i%d",&re,&im);//格式化读取
            Complex c;
            c.re = re;
            c.im = im;
            pqueue.push(c);
            printf("SIZE = %d\n",pqueue.size());
        }
    }
    return 0;
}
