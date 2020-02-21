#include<stdio.h>
#include<stdlib.h>

int main() {

    int arr[300000];
    arr[0] = 0;
    arr[1] = 0;
    int i, j, num;
    int array = 1;
    int *result;
    int count = 0;
    result = (int*)malloc(sizeof(int)*array);

    for (i = 2; i <= 300000; i++)
    arr[i] = 1;

    for (i = 2; i <= 300000; i++) {
        if (arr[i] == 1) {
            for (j = i + i; j < 300000; j += i) {
                arr[j] = 0;
            }
        }
        else continue;
    }

    while (1) {
        scanf("%d", &num);
        if (num == 0) break;
        array++;
        result = (int*)realloc(result, sizeof(int)*array);
        for (i = num + 1; i <= num * 2; i++) {
            if (arr[i] == 0) continue;
            else if (arr[i] == 1) count++;
        }

        result[array-2] = count;
        count = 0;
    }

    for (i = 0; i < array-1; i++) printf("%d\n", result[i]);
    return 0;

}
