#include <stdio.h>

int main() {
    long long n, m, k;
    
    // Read input values
    scanf("%lld %lld %lld", &n, &m, &k);
    
    // Calculate the largest number of Katryoshkas using each combination
    long long katryoshkas_1 = (n / 2 < k) ? n / 2 : k;
    long long katryoshkas_2 = (n / 2 < m && n / 2 < k) ? n / 2 : (m < k) ? m : k;
    long long katryoshkas_3 = (n < m && n < k) ? n : (m < k) ? m : k;

    // Find the minimum of the three results
    long long max_katryoshkas = katryoshkas_1;
    if (katryoshkas_2 < max_katryoshkas) {
        max_katryoshkas = katryoshkas_2;
    }
    if (katryoshkas_3 < max_katryoshkas) {
        max_katryoshkas = katryoshkas_3;
    }

    // Print the largest number of Katryoshkas
    printf("%lld\n", max_katryoshkas);

    return 0;
}
