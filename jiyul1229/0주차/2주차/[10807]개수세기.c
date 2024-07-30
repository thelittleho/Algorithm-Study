#include <stdio.h>

int main() {
    int n, t, s;
    int count = 0;
    int arr[100];

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &t);
    for(int i = 0; i < n; i++){
    if(arr[i] == t)
    count += 1;
    }

    printf("%d", count);
    return 0;
}