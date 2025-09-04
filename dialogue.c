#include <stdio.h>

int main(void) {
    char name[50];      // имя игрока
    int hp;             // очки здоровья
    float mana;         // очки маны

    printf("Как тебя зовут? ");
    scanf("%49s", name);   // считываем имя (строку без пробелов)

    printf("Сколько у тебя HP? ");
    scanf("%d", &hp);

    printf("Сколько у тебя маны? ");
    scanf("%f", &mana);

    printf("\nПривет, %s!\nТвои характеристики:\n у тебя HP: %d\n Mana: %.2f\n", name, hp, mana);

    return 0;
}
