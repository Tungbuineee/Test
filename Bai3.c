#include<stdio.h>

/*char array(int n)
{
    int arr[100];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }
        for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}
*/

class Animal {
public:
    virtual void make_sound() = 0;
    virtual void move() = 0;
}
class Cat : public Animal
{
public:
    void make_sound() = 0 {
        printf("Cat make sound");
    }

    void move() {
        printf(" Cat move");
    }
}
int main() {
    Cat cat;
    cat.make_sound();
    cat.move();
/*    int n;
    scanf("%d", &n);
    printf("%s", array(&n));
*/
}