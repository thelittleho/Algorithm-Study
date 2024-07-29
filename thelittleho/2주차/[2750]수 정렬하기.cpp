#include <iostream>
using namespace std;

#define swap(x, y, t) ((t) = (x), (x) = (y), (y) = (t))

void sort(int list[], int n)
{
    int i, j;
    int min, temp;
    // 첫 인덱스부터 마지막 전 인덱스 Loop
    for (i = 0; i < n-1; i++)
    {
        // 일단 최소값의 인덱스를 잡는다
        min = i;
        //최소값이라 정해둔 인덱스랑 다음 인덱스 비교
        for (j = i+1; j < n; j++)
        {
            // 작다고 생각해둔 값보다 j가 더 작으면
            // 최솟값을 j로 설정
            if (list[j] < list[min]) min = j;
        }
        swap(list[i], list[min], temp);
    }
}


int main(void)
{
    int n, num;
    int list[1000] = {0};
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        list[i] = num;
    }

    sort(list, n);

    for (int i = 0; i < n; i++)
    {
        cout << list[i] << "\n";
    }
}