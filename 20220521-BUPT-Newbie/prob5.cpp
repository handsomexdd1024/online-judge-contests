#include <iostream>
#include <cmath>

int solve_neg(int);

int solve(const int &n) {
    static int e, o;
    static int pos_ans[5] = {0, 2, 2, 4, 3};
    if(n<0) return solve_neg(-n);
    if(n<5) return pos_ans[n];
    e = (n-1)/2+1;
    o = (n-4)/6*2+3;
    o = (n-o)/2+1;
    return e+o;
}

int solve_neg(int n) {
    static int e, o;
    static int neg_ans[5] = {0, 1, 2, 0, 3};
    if(n<5) return neg_ans[n];
    e = n/2;
    o = (n-3)/6*2+3;
    o = (n-o-1)/2+1;
    return e+o;
}

int main() {
    int t, n;
    std::cin >> t;
    while(t--) {
        std::cin >> n;
        std::cout << solve(n) << '\n';
    }
    // for(int i = 1; i <= 20; i++) std::cout << solve(i) << '\n';
    return 0;
}