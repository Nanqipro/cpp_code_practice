#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;

struct Animal{
    int num;
    int seq;
};
int main() {
    queue<Animal> catQue;
    queue<Animal> dogQue;
    int seq = 0;
    int n;
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        int method,para;
        scanf("%d%d",&method,&para);
        if(method == 1){
            //有动物进入收容所
            if(para > 0){
                //收养狗
                Animal dog;
                dog.num = para;
                dog.seq = seq;
                seq ++ ;
                dogQue.push(dog);
            }
            else{
                //收养猫
                Animal cat;
                cat.num = para;
                cat.seq = seq;
                seq ++ ;
                catQue.push(cat);
            }
        }
        else{
            //有人收养动物
            if(para == 0){
                //采取第一种收养方式：收养所有动物中最早进入收容所的
                if(dogQue.empty() && catQue.empty()){
                    continue;
                }
                else if(catQue.empty() || !dogQue.empty() && !catQue.empty() && dogQue.front().seq < catQue.front().seq){
                    printf("%d ",dogQue.front().num);
                    dogQue.pop();
                }
                else{
                    printf("%d ",catQue.front().num);
                    catQue.pop();
                }

            }
            else if(para == 1){
                //只收养狗
                if(dogQue.empty()){
                    continue;
                }
                printf("%d ",dogQue.front().num);
                dogQue.pop();
            }
            else{
                //只收养猫
                if(catQue.empty()){
                    continue;
                }
                printf("%d ",catQue.front().num);
                catQue.pop();
            }
        }

    }
    printf("\n");
    return 0;
}
