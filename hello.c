// #include<stdio.h>
// int main() {
//     printf("I Am Muhammad Abu Naeem");
//     return 0;

// }

//use of /n =new line
// #include<stdio.h>
// int main(){
//     printf("I Am Muhammad Abu Naeem\n");
//     printf("What is Your Name Please!");
//     return 0;
// }

// use of %d/n

// #include<stdio.h>
// int main(){
//     int num = 10;
//     int num1 =20;
//     float num2 = 30.6;
//     double num3 = 40.6875475;
//     char text = 'I';
//     printf("here so many data typ first one is Number type, 2nd one is float, 3rd one is double, then last one is char type %d %.1f %lf %c\n", num1, num2, num3, text);
//     printf("this is number %d\n", num);
//     printf("this is number %d\n", num1);
//     printf("The numbers are %d, %d\n", num, num1);

// }

// enter a number that take integer Number

// #include<stdio.h>
// int main(){
//     int num;
//     printf("Please Enter a integer Number : ");
//     scanf("%d",&num);
//     printf("You have pressed = %d\n",num);
// }

// #include<stdio.h>
// int main(){
//     int num1, num2;
//     printf("Enter your first Number: ");
//     scanf("%d",&num1);

//     printf("Enter your second Number: ");
//     scanf("%d",&num2);

//     printf("The Numbers are: %d %d\n",num1, num2);
//     // int num1, num2;
//     // printf("Enter two Number : ");
//     // scanf("%d %d", &num1, &num2);
//     // printf("The numbers are: %d %d\n",num1,num2);
//     return 0;

// }

// enter your float number please

// #include<stdio.h>
// int main(){
//     float num1, num2;
//     printf("Enter Your Float Numbers : ");
//     scanf("%f %f",&num1, &num2);

//     printf("Your float Numbers are : %.2f %.2f\n", num1, num2);
//     return 0;
// }

// how to find size of any data

// #include<stdio.h>
// int main(){
//     int i;
//     float f;
//     double d;
//     char c;
//     printf("Tha size of integer = %d\n",sizeof(i));
//     printf("Tha size of float = %d\n",sizeof(f));
//     printf("Tha size of double = %d\n",sizeof(d));
//     printf("Tha size of char = %d\n",sizeof(c));
// }

// how to get ascii
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter Your Ascii Value : ");
//     scanf("%d",&n);
//     printf("Your Ascii charecter is : %c",n);
// }
// from charecter to number
// #include<stdio.h>
// int main(){
//     char ch;
//     printf("Enter your charecter Now Please : ");
//     scanf("%c",&ch);
//     printf("This Is your number of charecter : %d",ch);
// }

// how to make Uppercase from lowercase
// #include<stdio.h>
// int main(){
//     char lower;
//     printf("Enter your lowercase letter now : ");
//     scanf("%c",&lower);
//     printf("The capital letter is : %c\n",lower-32);
// }

// upper to lowercase letter

// #include<stdio.h>
// int main(){

//     char upper;
//     printf("Enter your Upper letter : ");
//     scanf("%c",&upper);
//     printf("The Lowercase letter is : %c\n",upper+32);
// }

// lower to upper with librery

// #include<stdio.h>
// int main(){
//     char lower, upper;
//     printf("Enter your a lowercase : ");
//     scanf("%c",&lower);
//     upper = toupper(lower);
//     printf("Your Uppercase Letter : %c",upper);

// }
// Upper to lowercase using libery

// #include<stdio.h>
// int main(){
//     char lower, upper;
//     printf("Enter Your Upper Letter : ");
//     scanf("%c",&upper);
//     lower = tolower(upper);
//     printf("The Lower letter is : %c",lower);
// }

// desimal to octal
// #include<stdio.h>
// int main(){
//     int number;
//     printf("Enter Decimal Number : ");
//     scanf("%d",&number);
//     printf("The octal Number Is : %o",number);
// }

// desimal to octal convert
// #include<stdio.h>
// int main(){
//     int dec;
//     printf("Enter decimal to hexa-decimal : ");
//     scanf("%d",&dec);
//     printf("the hexa-decimal is : %x",dec);
    
// }

// hexa-decimal to decimal
// #include<stdio.h>
// int main(){
//     int hex;
//     printf("Enter Your Hexa-decimal : ");
//     scanf("%x",&hex);
//     printf("The decimal number is : %d",hex);
// }
// octal to hexa_decimal
// #include<stdio.h>
// int main(){
//     int oct;
//     printf("Enter Your Octal : ");
//     scanf("%o",&oct);
//     printf("The Hexa-decimal is : %x",oct);
// }
// hexa-decimal to octal
// #include<stdio.h>
// int main(){
//     int hex;
//     printf("Enter Your Hexa-decimal : ");
//     scanf("%x",&hex);
//     printf("The Octal is : %o",hex);
// }
// #include<stdio.h>
// int main(){
//     int dec;
// printf("Enter Your Decimal : ");
// scanf("%d",&dec);
// printf("THe Hexa-Decimal Is : %x",dec);
// }
// arithmatic Operator///////
// uses of /, + 

// #include<stdio.h>
// int main(){
// int num1, num2, sum;
// float avg;


// printf("Enter two number value : ");
// scanf("%d %d",&num1, &num2);
// sum = num1 + num2;
// avg = (float) sum/2;

// printf("The result is : %d\n",sum);
// printf("The avarage number is : %.1f\n", avg);
// }

// uses of  sum, sub, mult and div

// #include<stdio.h>
// int main(){
//     int num1, num2, result;
//     printf("Enter your two value : ");
//     scanf("%d %d",&num1, &num2);

//     result = num1+num2;
//     printf("the sum is : %d\n",result);

//     result = num1-num2;
//     printf("the sub is : %d\n",result);

//     result = num1*num2;
//     printf("the mult is : %d\n",result);

//     result = num1/num2;
//     printf("the div is : %d\n",result);

//     result = num1%num2;
//     printf("the reminder is : %d\n",result);

// }

// how to solv trangle math

// #include<stdio.h>
// int main(){
//     float base, height, aria;
//     printf("Enter base and height : \n");
//     scanf("%f %f",&base, &height);
//     aria = (float)1/2*base * height;
//     printf("The aria is : %f\n",aria);
//     return 0;
// }

// sum and avarage of 3 numbers
// #include<stdio.h>
// int main(){
//     int num1, num2, num3, sum;
//     float avg;
//     printf("Enter 3 numbers : ");
//     scanf("%d %d %d",&num1,&num2,&num3);
//     sum = num1 + num2 + num3;
//     avg = (float)sum/2;
//     printf("The sum is : %d\n",sum);
//     printf("The avg is : %f",avg);
// }
// aria of 3number
// #include<stdio.h>
// int main(){
//     float num1, num2, num3, s, aria;
//     printf("Enter of 3 numbers : ");
//     scanf("%f %f %f",&num1, &num2, &num3);
//     s = (num1 + num2 + num3)/2;
//     aria = sqrt(s*(s-num1)*(s-num2)*(s-num3));
//     printf("The aria of 3 numbers : %f",aria);
// }
// convert from centigrade to farenhit

// #include<stdio.h>
// int main(){
//     float c, f;
//     printf("Enter your C Number : ");
//     scanf("%f",&c);
//     f = (c*1.8)+32;
//     printf("%f",f);
// }
// convert from farenhit to centigrade
// #include<stdio.h>
// int main(){
//     int F, C;
//     printf("Enter your fahrenheit : ");
//     scanf("%f",&F);
//     C = (F-32)/1.8;
//     printf("the centigrade is : %f\n",C);
// }

// swaping

// #include<stdio.h>
// int main(){
//     int num1, num2, temp;
//     num1 = 34;
//     num2 = 12;

//     temp = num1;
//     num1 = num2;
//     num2 = temp;

//     printf("num1 is : %d\n",num1);
//     printf("num2 is : %d",num2);
// }

// absulute number
// #include<stdio.h>
// int main(){
//     int num1;
//     num1 =abs(-44);
//     printf("%d",num1);

// }


// #include<stdio.h>
// int main(){
//     int num1, num2, temp;
//     num1 = 34;
//     num2 = 12;

//     num1 =num1 - num2;
//     num2 =num1 + num2;
//     num1 =num2 - num1;

//     printf("num1 is : %d\n",num1);
//     printf("num2 is : %d",num2);
// }

// #include<stdio.h>
// int main(){
//     int num1;
//     printf("Put number : ");
//     scanf("%d",&num1);
//     double result = sqrt(num1);
//     printf("the result is : %lf",result);
// }
// #include<stdio.h>
// int main(){
//     int num1;
//     printf("Enter a number : ");
//     scanf("%d",&num1);
//     double result = pow(num1,2);
//     printf("the power %lf",result);
// }
// #include<stdio.h>
// #include<math.h>
// int main(){
//     double x = 10;
//     double result = sin(x);
//     printf("sin (%lf) = %lf\n",x,result);
// }

// Even and odd number
// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter a number : ");
//     scanf("%d",&num);
//     if
//         (num%2 == 0){
//             printf("Even");
//         }else
//         printf("Odd");
// }
// #include<stdio.h>
// int main(){
//     int num1;
//     printf("Enter a number : ");
//     scanf("%d",&num1);
//     if(num1 > 0 ){
//         printf("Positive");
//     }
        
//     else if(num1 < 0){
//         printf("Negetive");
//     } 
//     else
//     printf("0");
    
// }
// #include<stdio.h>
// int main(){
//     char ch;
//     printf("Enter a charecter : ");
//     scanf("%c",&ch);
//     if(ch>='a' && ch<='z');
//     printf("small letter : %c",ch);
// }
// switch statment
// #include<stdio.h>
// int main(){
//     int num;
//     float temp, convertedtemp;
//     printf("tempatature conversion menu : \n");
//     printf("1. Fahrenheit to Celsius\n");
//     printf("2. Celsius to Fahrenheit\n");
//     printf("Enter your Option : ");
//     scanf("%d",&num);
//     switch (num)
//     {
//         case 1:
//         {
//             printf("Enter a fahrenheit temp : ");
//             scanf("%f",&temp);
//             convertedtemp = (temp-32)/1.8;
//             printf("The Celsius is %f",convertedtemp);
//             break;
//         }
//         case 2:
//         {
//             printf("Enter a Celsius temp : ");
//             scanf("%f",&temp);
//             convertedtemp = (temp*1.8)+32;
//             printf("The Fahrenheit is %f",convertedtemp);
//             break;
//         }
//         default:
//         printf("It is not a Option");
//     }
// }
// #include<stdio.h>
// int main(){
//     double num1,num2;
//     char op;
//     printf("Enter a operator +,-,*,/ : ");
//     scanf("%c",&op);
//     printf("Enter two numbers : ");
//     scanf("%lf %lf",&num1,&num2);
//     switch(op)
//     {
//         case '+':
//         {
//             printf("%lf+%lf=%.0lf",num1,num2,num1+num2);
//             break;
//         }
//         case '-':
//         {
//             printf("%lf-%lf=%lf",num1,num2,num1-num2);
//             break;
//         }
//         case '*':
//         {
//             printf("%lf*%lf=%lf",num1,num2,num1*num2);
//             break;
//         }
//         case '/':
//         {
//             printf("%lf/%lf=%lf",num1,num2,num1/num2);
//             break;
//         }
//     }
// }
// how to use conditional operator
// #include<stdio.h>
// int main(){
//     int num1,num2;
//     int large;
//     printf("Enter two Numbers : ");
//     scanf("%d %d",&num1,&num2);
//     large = num1<num2 ? num1:num2;
//     printf("The large number is %d",large);
// }
// how to use bitwise Operator
// #include<stdio.h>
// int main(){
//     int a = 10;
//     int b = 20;
//     int c;
//     c = a^b;
//     printf("a^b = %d\n",c);
// }
// how to use loop
// #include<stdio.h>
// int main(){
//     int i = 1;
//     while(i <= 10)
//     {
//     printf("I am  Muhammad Abu Naeem %d\n",i);
//     i++;  
//     }
    
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int i;
//     for(i=1; i<=10; i++){
//         printf("I am Muhammad Abu Naeem \t\n");
//     }
    

// }
// continue and break statment
// #include<stdio.h>
// int main(){
//     int i;
//     for(i=1;i<20;i++){
//         if(i%3==0){
//             continue;
//         }
//         printf("%d\n",i);
//         if(i==10){
//             break;
//         }
//     }
// }
// Multiplication table
// #include<stdio.h>
// int main(){
//     int i,num;
//     printf("Enter a Number : ");
//     scanf("%d",&num);
//     for(i=1;i<=10;i++){
//         printf("%d x %d = %d\n",num,i,num*i);
//     }
// }
// how to get factorial
// #include<stdio.h>
// int main(){
//     int fact=1,i,n;
//     printf("Enter a Number : ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//             fact = fact*i;
//     } 
//     printf("%d",fact);
// }
// how to get prime number
// #include<stdio.h>
// int main(){
//     int prime,i,count = 0;
//     printf("enter a Number : ");
//     scanf("%d",&prime);

//     for(i=2;i<prime;i++){
//         if(prime%i==0){
//             count++;
//             break;
//         }
//     }
//     if(count==0){
//         "Prime Number";
//     } else {
//         "Not Prime Number";
//     }
// }
// how to get GCD and LCM
// #include<stdio.h>
//     int main(){
//         int num1,num2,n1,n2,rem,gcd,lcm;
//         printf("Enter Two Number : ");
//         scanf("%d %d",&num1,&num2);
//         n1 = num1;
//         n2 = num2;
//         while(n2!=0){
//             rem = n1%n2;
//             n1 = n2;
//             n2 = rem;
//         }
//         gcd = n1;
//         lcm = (num1*num2)/gcd;
//         printf("GCD : %d and LCM : %d",gcd,lcm);
//     }
// #include<stdio.h>
// int main(){
//     int num, count=0;
//     printf("Enter Your Numbers : ");
//     scanf("%d",&num);
//     while(num!=0){
//         num = num/10;
//         ++count;
//     }
//     printf("Your Number is: %d\n ",count);
//     return 0;
// }
// series number 1
// #include<stdio.h>
// int main(){
//     int n, sum =0, i;
//     printf("Enter Your series Number : ");
//     scanf("%d",&n);
//     printf("Your series is: 1 + 2 + ....... %d\n",n);

//     for(i=1;i<=n;i=i+1){
//         sum=sum+i;
//     }
//     printf("Your sum %d\n",sum);

// }
// series 2
// #include<stdio.h>
// int main(){
//     int n, sum=1, a=1;
//     printf("Enter the last number : ");
//     scanf("%d",&n);
//     printf("1*2* ......*%d",n);
//     while (a<=n)
//     {
//         sum = sum*a;
//         a = a+1;
//     }
//     printf("=%d",sum);
    
// }
// #include<stdio.h>
// int main(){
//     int n1,n2,sum=0,a=1,b=2;
//     printf("Enter Your last Number : ");
//     scanf("%d %d",&n1,&n2);
//     printf("1*2+2*3+3*4+ ......+%d*%d",n1,n2);
//     while(a<=n1 && b<=n2){
//         sum = sum + a*b;
//         a = a + 1;
//         b = b + 1;
//     }
//     printf("= %d\n",sum);
//     getch();
// }
// #include<stdio.h>
// int main(){
//     int n,sum = 0,i;
//     printf("Enter your last Number : ");
//     scanf("%d",&n);
//     printf("1^2+2^2+3^2+ ....... +%d",n);
//     for(i=1;i<=n;i++){
//         sum = sum + i*i;
//     }
//     printf("= %d",sum);
// }
// #include<stdio.h>
// int main(){
//     int n,a[100],sum = 0,i;
//     printf("How many Numbers do you want?: ");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<n;i++){
//         sum=sum + a[i];
//     }
//     printf("the Sum is: %d\n",sum);
//     printf("the average is: %.2f\n",(float)sum/n);
#include<stdio.h>
int main(){
    int array1[30],n,array2[30],i;
    printf("How many Numbers Do you want? : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&array1[i]);
    }
    printf("array1 : ");
    for(i=0;i<n;i++){
        printf("%d ",array1[i]);
    }
    for(i=0;i<n;i++){
        array2[i] = array1[i];
    }
    printf("\narray2 : ");
    for(i=0;i<n;i++){
        printf("%d ",array2[i]);
    }
    
}