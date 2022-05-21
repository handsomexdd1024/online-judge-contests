#include <cstdio>
#include <cmath>
#include <algorithm>
#include <iostream>

const int maxn = 1000000;

int l[maxn], r[maxn], x[maxn];

int main() {
    int n, ans = 0;
    std::scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        std::scanf("%d %d %d", &l[i], &r[i], &x[i]);
    }
    int b = 0, sel = 0; // b marks the post end of queue
    for(int i = 0; i < n; i++) {
        while(b<n && l[b] <= r[i]) b++;
        if(x[i]>0) {
            ans += x[i];
            sel = r[i] - x[i] + 1;
            for(int j = i+1; j < b; j++) {
                x[j] -= (r[i] - std::max(sel, l[j]) + 1);
            }
        }
    }
    std::printf("%d", ans);
    return 0;
}