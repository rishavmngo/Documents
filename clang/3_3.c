#include <stdio.h>

int main(void)
{

    int gsi,group_ident,pub_code,iteam_num,check_digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d",&gsi,&group_ident,&pub_code,&iteam_num,&check_digit);

    printf("GSI prefix: %d\n",gsi);

    printf("Group identfier : %d\n",group_ident);

    printf("Publisher identfier: %d\n",pub_code);

    printf("Item number: %d\n", iteam_num);

    printf("Check digit: %d", check_digit);

    
    return 0;
}


