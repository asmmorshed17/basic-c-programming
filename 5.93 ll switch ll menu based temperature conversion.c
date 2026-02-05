#include<stdio.h>
int main()
{
    int choice ;
    float temp,convertedTemp;

    printf("Temperature Conversion Menu: \n");
    printf("1.Fahrenheit to Celcious \n");
    printf("2.Celcious to Fahrenheit \n");
    printf("Enter your Choice:  ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        {
            printf("Fahrenheit to Celcious Temp Conversion:  \n");
            printf("Enter any Fahrenheit Temperature Value  : \n");
            scanf("%f",&temp);
            convertedTemp = (temp - 32)/1.8 ;
            printf("The Celcious Value of This temperature: %.2f\n",convertedTemp);
            break;
        }

    case 2:
        {
            printf("Celcious to Fahrenheit Temp Conversion:  \n");
            printf("Enter any Celcious Temperature Value:  \n");
            scanf("%f",&temp);
            convertedTemp = (temp*1.8)+32 ;
            printf("The Fahrenheit Value of This temperature : %.2f\n",convertedTemp);
            break;

    default:
        printf("Invalid Option \n ");
        }

        return 0;
    }




    return 0;
}
