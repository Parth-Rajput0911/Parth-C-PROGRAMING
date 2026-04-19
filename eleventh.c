// WAP TO MAKE AN SIMPLE ARTHEMATIC CALCULATOR.
#include<stdio.h>
int main()
{
    int num1,num2,result;
    char op;
    printf("Enter The Num 1 And Num2 \n");
    scanf("%d%d", &num1,&num2);
    printf("Enter the oprator");
    scanf("%c", &op);
    switch(op)
    {
        case'+':
        result=num1+num2;
        printf("the sum is %d",result);
        break;
        case'-':
        result=num1-num2;
        printf("the diff is %d",result);
        break;
        case'*':
        result=num1*num2;
        printf("the product is %d",result);
        break;
        case'/':
        result=num1/num2;
        printf("the qutiont is %d",result);
        break;
        default:
        printf("OOPS! Wrong Choice");
       
    }
    return 0;
}