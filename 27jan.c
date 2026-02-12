#include <stdio.h>

int main()
{
    const unsigned short int x = 136; //0 to 65536
    // int x = 1;
    // u_int16_t y = __INT16_MAX__;
    printf("%d\n", x);
    // printf("%d\n", y);
    
    return 0;
}
// #include <stdio.h>
// #include <stdint.h>

// typedef struct {
//     uint8_t day;
//     uint8_t month;
//     uint16_t year;
// } Date;

// void init_date(Date date)
// {
//     printf("%u/%u/%u\n", date.day, date.month, date.year);
// }
// int main(void)
// {
//     Date d = {15, 8, 2026};
//     init_date(d);
//     return 0;
// }
