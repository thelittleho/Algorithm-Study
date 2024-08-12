#include <stdio.h>
int main(){
    int N;
    int MAX = 0;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
        if(MAX < arr[i]){
            MAX = arr[i];
        }
    }
    double score = 0;
    for(int j = 0; j < N; j++){
        score += ((double)arr[j] / MAX) * 100;
    }
    printf("%f\n", (double) score / N);
}