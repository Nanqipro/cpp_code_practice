#include <cstdio>
#include <queue>
using namespace std;


int main() {
//    int n=1;
//    while(true){
//        //scanf("%d",&n);
//        if(201 == n){
//            break;
//        }
//        queue<long long> m;
//        m.push(1);
//        while (!m.empty()){
//            long long cur = m.front();
//            m.pop();
//            if(cur%n == 0){
//                printf("%lld,",cur);
//                break;
//            }
//            m.push(cur*10);
//            m.push(cur*10+1);
//        }
//        n++;
//
//    }
//    printf("\n");
//
//打表
    long long arr[201] = {0,1,10,111,100,10,1110,1001,1000,111111111,10,11,11100,1001,10010,1110,10000,11101,1111111110,11001,100,10101,110,110101,111000,100,10010,1101111111,100100,1101101,1110,111011,100000,111111,111010,10010,11111111100,111,110010,10101,1000,11111,101010,1101101,1100,1111111110,1101010,10011,1110000,1100001,100,100011,100100,100011,11011111110,110,1001000,11001,11011010,11011111,11100,100101,1110110,1111011111,1000000,10010,1111110,1101011,1110100,10000101,10010,10011,111111111000,10001,1110,11100,1100100,1001,101010,10010011,10000,1111111101,111110,101011,1010100,111010,11011010,11010111,11000,11010101,1111111110,1001,11010100,10000011,100110,110010,11100000,11100001,11000010,111111111111111111,100,101,1000110,11100001,1001000,101010,1000110,100010011,110111111100,1001010111,110,111,10010000,1011011,110010,1101010,110110100,10101111111,110111110,100111011,111000,11011,1001010,10001100111,11101100,1000,11110111110,11010011,10000000,100100001,10010,101001,11111100,11101111,11010110,11011111110,11101000,10001,100001010,110110101,100100,10011,100110,1001,1111111110000,11011010,100010,1100001,11100,110111,11100,1110001,11001000,10111110111,10010,1110110,1010100,10101101011,100100110,100011,100000,11101111,11111111010,1010111,1111100,1111110,1010110,11111011,10101000,10111101,111010,1111011111,110110100,1011001101,110101110,100100,110000,100101111,110101010,11010111,11111111100,1001111,10010,100101,110101000,1110,100000110,1001011,1001100,1010111010111,110010,11101111,111000000,11001,111000010,101010,110000100,1101000101,1111111111111111110,111000011,1000
    };
    int n;
    while(true){
        scanf("%d",&n);
        if(0 == n){
            break;
        }
        printf("%lld\n",arr[n]);
    }
    return 0;
}

