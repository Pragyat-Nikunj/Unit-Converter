#include <stdio.h>


int main()
{  
while(1)
{ int n;
    float c,x;
    printf("Enter the conversion you want to do:-\n");
    printf("Press 1 to convert km to miles\n");
    printf("Press 2 to convert inches to foot\n");
    printf("Press 3 to convert cm to inches\n");
    printf("Press 4 to convert pound to kgs\n");
    printf("Press 5 to convert inches to meters\n");
    printf("Press 6 to quit\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("Enter the number you want to convert into miles\n");
        scanf("%f",&c);
        x=c*0.621371;
        printf("%f inches\n",x);
        break;
        
        case 2:
        printf("Enter the number you want to convert into foot\n");
        scanf("%f",&c);
        x=c*0.083333;
        printf("%f foot\n",x);
        break;
       
        case 3:
        printf("Enter the number you want to convert into inches\n");
        scanf("%f",&c);
        x=c*0.393701;
        printf("%f inches\n",x);
        break;
        
        case 4:
        printf("Enter the number you want to convert into kgs\n");
        scanf("%f",&c);
        x=c*0.453592;
        printf("%f kg\n",x);
        break;
        
        case 5:
        printf("Enter the number you want to convert into meters\n");
        scanf("%f",&c);
        x=c*0.0254;
        printf("%f meters\n",x);
        break;
           
        case 6:
        printf("Quitting the program....");
        goto end;
        break;
        
        default:
        printf("Wrong Input\n");
    }
}
    end:
    return 0;
}
