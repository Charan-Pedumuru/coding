#include <stdio.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    char name[20];
    int age;
    enum Gender gender;
};

int main() {
    struct Person p1 = { "Alice", 25, FEMALE };

    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Gender: %d\n", p1.gender); // Outputs 1 (FEMALE)

    return 0;
}
