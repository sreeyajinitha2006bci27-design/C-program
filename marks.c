#include <stdio.h>
struct Student {
    int id;
    float marks;
};
int main() {
    struct Student s1 = {101, 88.5};
    struct Student *ptr = &s1;
    printf("ID: %d, Marks: %.2f\n", ptr->id, ptr->marks);
    return 0;
}
