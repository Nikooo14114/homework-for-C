#include <stdio.h>
#include <mpfr.h>

int main()
{
    mpfr_t num1, num2, result;
    unsigned long int input1, input2;

    printf("Please input two prime numbers:\n");
    scanf("%lu %lu", &input1, &input2);

    mpfr_init2(num1, 200*8);
    mpfr_init2(num2, 200*8);
    mpfr_init2(result, 200*8);

    mpfr_set_ui(num1, input1, MPFR_RNDN);
    mpfr_set_ui(num2, input2, MPFR_RNDN);

    mpfr_div(result, num1, num2, MPFR_RNDN);

    mpfr_printf("%.200Rf\n", result);

    mpfr_clear(num1);
    mpfr_clear(num2);
    mpfr_clear(result);

    return 0;
}