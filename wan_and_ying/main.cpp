#include <vector>
#include <cstdio>
using namespace std;
int Sum(int i){
    int sum = 0;
    for(int j = 1;j<i;j++){
        if(0 == i%j){
            sum = sum +j;
        }
    }
    return sum;
}

int main() {
    vector<int> Evec;
    vector<int> Gvec;
    for(int i = 2;i<=60;i++){
        if(Sum(i) == i){
            Evec.push_back(i);
        }
        else if(i< Sum(i)){
            Gvec.push_back(i);
        }
    }
    printf("E:");
    for(int j = 0;j<Evec.size();j++){
        printf(" %d",Evec[j]);
    }
    printf("\n");
    printf("G:");
    for(int j = 0;j<Gvec.size();j++){
        printf(" %d",Gvec[j]);
    }
    printf("\n");
    return 0;
}
