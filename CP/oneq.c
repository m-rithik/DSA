#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);  

    int ans[t];  
    int index = 0; 

    for (int i = 0; i < t; i++) {
        int n, k, p;
        scanf("%d %d %d", &n, &k, &p);

        int max_sum = n * p;  
        int min_sum = n * (-p);  

        if (k > max_sum || k < min_sum) {
            ans[index++] = -1;
            continue;  
        }

        int operations = abs(k) / p;  

        if (abs(k) % p != 0) {  
            operations++;
        }

        ans[index++] = operations; 
    }

  
    for (int i = 0; i < t; i++) {
        printf("%d\n", ans[i]);
    }

    return 0;
}