#include <stdio.h>

int main() {
    int x = 1, y = 2, z[10];
    printf("x = %ld, &x = %lx\n", x, &x);
    printf("y = %ld, &y = %lx\n", y, &y);
    printf("z = %lx, &z = %lx, z[0] = %ld, &z[0] = %lx\n", z, &z, z[0], &z[0]);
    int *ip;
    printf("&ip = %lx\n", &ip);
    ip = &x;
    printf("ip = %lx, &ip = %lx, *ip = %ld\n", ip, &ip, *ip);
    y = *ip;
    printf("y = %ld, &y = %lx\n", y, &y);
    *ip = 0;
    printf("ip = %lx, &ip = %lx, *ip = %ld\n", ip, &ip, *ip);
    ip = &z[0];
    printf("ip = %lx, &ip = %lx, *ip = %ld\n", ip, &ip, *ip);
}
