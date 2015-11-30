#include <stdio.h>
#include <sys/time.h>

int main() {
    struct timeval start, end;
    gettimeofday(&start, NULL);
    printf("%ldms\n", (start.tv_sec * 1000000 + start.tv_usec)/1000);
    return 0;
}
