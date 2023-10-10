#include <stdio.h>

int main()
{   
    int sum = 0;
    for (int i = 1; i < 10000; i++){
        for(int d = 1;d < i; d++){
            if (d % i == 0){
                sum += 1;
            }
        }
        if (sum == i){
            printf("%d", i);
        }
    }
    return 0;
}
