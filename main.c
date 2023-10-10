// Output of Perfect numbers up to 10000
#include <stdio.h>

int main()
{   
    
    for (int i = 3; i < 10000; i++){
        int sum = 1;
        for(int d = 2;d < i; d++){
            if (i % d == 0){
                sum += d;
            }
        }
        if (sum == i){
            printf("%d\n", i);
        }
    }
    return 0;
}
