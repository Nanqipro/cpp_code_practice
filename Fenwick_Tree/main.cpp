#include <iostream>
#include <vector>
using namespace std;

// 树状数组实现
class FenwickTree {
private:
    vector<int> bit;
    int n;

public:
    // 初始化大小为n的树状数组
    FenwickTree(int size) {
        n = size + 1;
        bit.assign(n, 0);
    }
    
    // 单点更新：给位置idx的元素加上val
    void update(int idx, int val) {
        for (++idx; idx < n; idx += (idx & -idx))
            bit[idx] += val;
    }
    
    // 查询前缀和：返回[1,idx]的和
    int query(int idx) {
        int sum = 0;
        for (++idx; idx > 0; idx -= (idx & -idx))
            sum += bit[idx];
        return sum;
    }
    
    // 区间查询：返回[l,r]的和
    int rangeQuery(int l, int r) {
        return query(r) - query(l-1);
    }
};

int main() {
    int n, m;
    cin >> n >> m;
    
    // 创建树状数组
    FenwickTree bit(n);
    
    // 读入初始数组
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        bit.update(i, val);
    }
    
    // 处理操作
    for (int i = 0; i < m; i++) {
        int op, x, y;
        cin >> op >> x >> y;
        
        if (op == 1) {
            // 操作1：将第x个数加上y
            bit.update(x-1, y);
        } else {
            // 操作2：输出区间[x,y]的和
            cout << bit.rangeQuery(x-1, y-1) << endl;
        }
    }
    
    return 0;
}