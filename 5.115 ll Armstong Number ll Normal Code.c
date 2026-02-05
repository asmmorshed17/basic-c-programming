// Armstrong Number :
#include<stdio.h>
#include<math.h>
int main()
{
    int number,temp,reminder,sum=0 ;

    printf("Enter any number : ");
    scanf("%d",&number);

    temp = number ;

    while(temp!=0)
    {
        reminder = temp % 10 ;
        sum = sum + pow(reminder,3);
        temp = temp / 10 ;
    }

    if(number == sum)
        printf("This Number is an Armstong Number\n");
    else
        printf("This Number is not an Armstong Number\n");
}

// 153 => 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
// if number = sum of (everyDigit)^3  --> then the number is called Armstong Number


// ChatGpt:
// Yes, the code you provided is almost correct and works perfectly
// for 3-digit Armstrong numbers like 153, 370, 371, and 407
