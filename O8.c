//1 print Hello World!
#include<stdio.h>

int main(){
 printf("Hello World!\n");
return 0;
}

[2021ict119@fedora ~]$ ./firstPro
Hello World!


//2 variables
int age=25;

#include<stdio.h>
int main(){
 int age=25;
 //printf(age);  //error
 printf("%d\n",age);

printf("c peogramming");

age=31;
printf("\nNew age:%d\n",age);

return 0;

[2021ict119@fedora ~]$ ./variables
25
c peogramming
New age:31

//3
#include<stdio.h>
int main(){
 int firstNumber=25;
 printf("first number:%d\n",firstNumber);

 int secondNumber=firstNumber;
 printf("second number:%d\n",secondNumber);

return 0;
}

[2021ict119@fedora ~]$ ./2ndpro
first number:25
second number:25


//4 print same value for 2 variables
#include<stdio.h>
int main(){
 int firstNumber,secondNumber=25;
 printf("first number:%d\n",firstNumber);

 //int secondNumber=firstNumber=;
 printf("second number:%d\n",secondNumber);

return 0;

[2021ict119@fedora ~]$ ./2ndpro
first number:1    //random number
second number:25

//5 data types
#include<stdio.h>
int main(){
 int age=10;
 printf("%d\n",age);

 printf("size:%zu\n", sizeof(age));

 double number=12.45;
 printf("%.2lf\n",number); //without .2 it will 12.450000(6 bytes)

 float num1=10.9f;  //using f we indicate the float
 printf("%f\n",num1); //10.90000
 printf("%.1f\n",num1); //10.9

 char character='z';
 printf("%c",character);
 printf("\n%d\n",character); //integer value of integer

 return 0;
}


[2021ict119@fedora ~]$ ./3rdpro
10
size:4
12.45
10.900000
10.9
z
122

// 7 user input
#include<stdio.h>
int main(){
 int age;
 printf("Enter your age: ");
 //printf("%d",age);
 scanf("%d",&age);   //&=ampasan
 printf("Age=%d\n",age);
 
 double number;
 char alpha;
 
 printf("Enter double input: ");
 scanf("%lf",&number);
 printf("Your double input is:%lf\n",number);
 
 printf("Enter character: ");
 scanf(" %c",&alpha);
 printf("Your character is:%c\n",alpha);
 
 double n1;
 char c1;
 printf("Enter inputs: ");
 scanf("%lf %c",&n1,&c1);
 printf("Your inputs are:%lf %c\n",n1,c1);
 
}

[2021ict119@fedora ~]$ ./userInput
Enter your age: 22
Age=22
Enter double input: 15.25
Your double input is:15.250000
Enter character: c
Your character is:c
Enter inputs: 12.23
g
Your inputs are:12.230000 g

// comments
// - single live comments ctrl+/
/* */ - multiple comments ctrl+shift+/

// C operators
arithmetic operators+
-
*
/
%

#include<stdio.h>
int main(){
 int n1,n2,sum,sub,mul,div,mod;
 printf("Enter number 1: ");
 scanf("%d",&n1);  
 printf("Enter number 2: ");
 scanf("%d",&n2);

 sum=n1+n2;
 sub=n1-n2;
 mul=n1*n2;
 div=n1/n2;
 mod=n1%n2;
 
 printf("Summation=%d\n",sum);
 printf("Subtraction=%d\n",sub);
 printf("Multiplication=%d\n",mul);
 printf("Division=%d\n",div);
 printf("Modules=%d\n",mod);
 
} 

[2021ict117@fedora ~]$ ./arithOpr
Enter number 1: 10
Enter number 2: 3
Summation=13
Subtraction=7
Multiplication=30
Division=3
Modules=1
