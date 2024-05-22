#include <cstdio>
#include <string>
using namespace std;
int main() {
    char word[90];
    while (scanf("%s", word) != EOF) {
        string wordstr = word;
        int n = (wordstr.size() + 2) / 3;
        int s = (wordstr.size() + 2) % 3;
        char pattern[28][28] = {0};
        int front, rear;
        for (front = 0, rear = wordstr.size() - 1; front < n-1; front++, rear--) {
            for (int k = 0; k < n+s ; k++) {
                if (k == 0) {
                    pattern[front][k] = wordstr[front];
                }
                else if (k == n+s - 1) {
                    pattern[front][k] = wordstr[rear];
                }
                else {
                    pattern[front][k] = ' ';
                }
            }
        }
        for (int i = front,j = 0; i <=rear; i++,j++) {
            pattern[n - 1][j] = wordstr[i];
        }
        for (int i = 0; i < n; i++) {
            printf("%s\n", pattern[i]);
        }
    }
    return 0;
}


