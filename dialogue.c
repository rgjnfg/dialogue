#include <stdio.h>
int main(void) {
    char name[50];    // строка для имени
    int hp;           // здоровье
    float mana;       // мана

    printf("Введите ваше имя: ");
    scanf("%49s", name);   // читаем строку (до пробела)

    printf("Введите HP (целое число): ");
    scanf("%d", &hp);

    printf("Введите Манy (вещественное число): ");
    scanf("%f", &mana);

    printf("%s, у тебя HP = %d, Мана = %.2f\n", name, hp, mana);

    return 0;
}
