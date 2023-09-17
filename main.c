#include <stdio.h>
#define N 30

int main() {
    int i, maxsum = 0, K;
    int arr[N];
    printf("Enter the elements of the array: \n");
    for (i = 0; i < N; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < N-4; i++){
        if (arr[i] + arr[i+1] + arr[i+2] + arr[i+3] + arr[i+4] > maxsum) {
            maxsum = arr[i] + arr[i+1] + arr[i+2] + arr[i+3] + arr[i+4];
            K = i;
        }
    }
    printf("5 elements with the maximum amount: %d %d %d %d %d", arr[K], arr[K+1], arr[K+2], arr[K+3], arr[K+4]);
    return 0;
}
