#include <iostream>
using namespace std;

// 삽입 정렬의 정렬 사용
void sort(int *arr, int len)
{
    int i, j, key;
    for (i = 0; i < len; i++)
    {
        key = arr[i];

        for (j = i-1; j>= 0 && arr[j] > key; j--) //key값보다 큰 값이 나올때까지 반복
        {
            arr[j+1] = arr[j];
        }

        arr[j+1] = key;
        
    }
    
}

int main(void)
{
    int N, k;
    int student_grade[10000];

    cin >> N >> k;
    for (int i = 0; i < N; i++) cin >> student_grade[i];


    sort(student_grade, N);
    cout << student_grade[N-k] << endl;
    
}