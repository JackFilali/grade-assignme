#include <stdio.h>

int main (void)
{
    float score;
    float total;
    int assign;
    printf("how many assignments? ");
    scanf("%i", &assign);
    for (int i=0;i<assign;i++){
        printf("how many points did you earn? ");
    scanf("%f", &score);
        printf("how many points possible? ");
    scanf("%f", &total);
    float grade = ((float)score/total)*100;
    printf("your grade is: %.02f\n", grade);
    }
    
}
