#include <stdio.h>

int main() {
    int i;
    int data[] = {31, 41, 59, 26, 53, 58, 97, 93, 23, 84};
    int max_data = data[0];

    for(i = /* ここを埋める */; i < sizeof(data) / sizeof(data[0]); i++) {
    }

    printf("最大値は %d です。\n", max_data);
}
