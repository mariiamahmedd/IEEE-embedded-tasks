#include <stdio.h>
#include <stdlib.h>

int ToggleBit(int x, int position)
{
    int answer;
    answer = x ^ (1 << position);
    return answer;
}

int main()
{
    int num = 234; //11101010 in binary
    int pos = 2;
    int result;

    result = ToggleBit(num, pos);

    printf("Result after toggling bit = %d\n", result);

    return 0;
}
