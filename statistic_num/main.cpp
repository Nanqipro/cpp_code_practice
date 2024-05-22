#include <cstdio>
#include <map>
using namespace std;

int main() {
    int n;
    while(scanf("%d",&n)!=EOF){
        map<int,int> grade;
        if(0 == n){
            break;
        }
        for(int i = 0;i<n;i++){
            int grad;
            scanf("%d",&grad);
            if(grade.find(grad) == grade.end()){
                grade[grad] = 1;
            }
            else{
                grade[grad] ++;
            }
        }
        int target;
        scanf("%d",&target);
        if(grade.find(target) != grade.end()){
            printf("%d\n",grade[target]);
        }
        else{
            printf("%d\n",0);
        }
    }
    return 0;
}
