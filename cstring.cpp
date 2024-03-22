#include <iostream>
using namespace std;

unsigned int length(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

unsigned int find(char str[], char character) {
    for (unsigned int i = 0; str[i] != '\0'; i++) {
        if (str[i] == character) {
            return i;
        }
    }
    return length(str);
}

bool equalStr(char str1[], char str2[]) {
    for (unsigned int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    return 0;
}
