#include<iostream>
using namespace std;
int main() {
    int color = 2;
    switch(color) {
        case 1: printf("Black");
        case 2: printf("Blue");
        case 3: printf("Green");
        case 4: printf("Aqua");
        default: printf("Other");
    }
    return 0;
}