#include <iostream>
#include <cstdio>
#include <stack>
using namespace std;


int main() {
    stack<long long>myStack;
    int n;
    long long num;
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        scanf("%lld",&num);
        myStack.push(num);
    }
    while (!myStack.empty()){
        printf("%lld ",myStack.top());
        myStack.pop();
    }
    printf("\n");
    return 0;
}
