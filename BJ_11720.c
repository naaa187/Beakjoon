#include<stdio.h>
#include<string.h>

int main(){
    int i, N, result = 0;
    char str[100];
    scanf("%d", &N);
    scanf("%s", str);
    for(i=0; i<strlen(str); i++)
        result += str[i] - '0';
    printf("%d", result);
}
