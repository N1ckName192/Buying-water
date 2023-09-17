#include <stdio.h>

int main() {
    int requests;
    printf("Введите количество запросов:");
    scanf("%d", &requests);
    for(int i=1; i<=requests; i++) {
        long long liters, first_cost, second_cost;
        scanf("%lld %lld %lld", &liters, &first_cost, &second_cost);
        if (liters % 2 == 0 && liters >= 2 && 2*first_cost >= second_cost) {
            printf("%lld\n", (liters/2)*second_cost);
        } else if (liters % 2 != 0 && liters >= 2 && 2*first_cost >= second_cost){
            printf("Минимальная стоимость для покупки %lld литров воды при цене %lld рублей за бутылку первого типа и %lld рублей за бутылку второго типа составляет %lld рублей.\n", liters, first_cost, second_cost, (liters/2)*second_cost + first_cost);
        } else {
            printf("%lld\n", liters * first_cost );
        }
    }
    return 0;
}


