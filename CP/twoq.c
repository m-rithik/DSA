#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_bit_set(long long num, int bit_pos) {
    return (num & (1LL << bit_pos)) != 0;
}

void solve_test_case() {
    int n;
    long long x;
    scanf("%d %lld", &n, &x);
    

    if (n == 1) {
        printf("%lld\n", x);
        return;
    }
    
    long long *a = (long long*)malloc(n * sizeof(long long));
    
    
    if (x == 0) {
  
        for (int i = 0; i < n; i++) {
            a[i] = 0;
        }
    } else if (x == (1 << __builtin_ctzll(x))) {
      
        a[0] = x;
        for (int i = 1; i < n; i++) {
            a[i] = i-1;
        }
    } else if (n == 2) {

        a[0] = 0;
        a[1] = x;
    } else {

        int highest_bit = 63 - __builtin_clzll(x);
        a[0] = 1LL << highest_bit;
        

        long long remaining_x = x & ~a[0];
        

        int idx = 1;
        for (int i = 0; i < n-2 && idx < n-1; i++) {

            if ((i | remaining_x) == remaining_x) {
                a[idx++] = i;
            }
        }
        
        long long current_or = a[0];
        for (int i = 1; i < idx; i++) {
            current_or |= a[i];
        }
        

        a[idx] = x & ~current_or;
        

        for (int i = idx+1; i < n; i++) {
            a[i] = a[i-1];
        }
        

        long long final_or = 0;
        for (int i = 0; i < n; i++) {
            final_or |= a[i];
        }
        
        if (final_or != x) {

            a[0] = x;
            for (int i = 1; i < n; i++) {
                a[i] = i-1 < 30 ? (1LL << (i-1)) & x : 0;
            }
        }
    }
    

    for (int i = 0; i < n; i++) {
        printf("%lld", a[i]);
        if (i < n - 1) printf(" ");
    }

    
    free(a);
    printf("/n");
}

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        solve_test_case();
    }
    
    return 0;
}
