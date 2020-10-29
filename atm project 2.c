
#include <stdio.h>
unsigned long balance=10000;
void checkBalance(){
printf("Your balance is: %lu\n",balance);
}
void Deposit(int x){
if(x%100!=0)
printf("Value must be a multiple of 100\n");
else{
balance=balance+x;
printf("Your balance is: %lu\n",balance);}
}
void Withdraw(int x){
if(x>balance)
printf("Insufficient funds\n");
else{
balance=balance-x;
printf("Your balance is: %lu\n",balance);}
}
int main(){
int a,choice;
int pin;
for(int i=3;i>0;){
printf("Enter your pincode (%d attempt(s) left)\n",i);
scanf("%d",&pin);
if(pin>9999||pin<1000){
printf("A pincode must only consist of 4 digits\n\n");i--;}
else if(pin!=2110){
printf("Invalid pin please retry\n");
i--;}
else
break;
if(i==0){
printf("Sorry, you have exceeded the number of attempts permitted\n");
return 0;
}}
printf("\t\t\t Welcome to our ATM \t\n");

do{
printf("Please choose an action: \n");
printf("\t1. Check balance\n");
printf("\t2. Deposit\n");
printf("\t3. Withdraw\n");
printf("\t4. End\n");
scanf("%d",&choice);
switch(choice){
case 1:
checkBalance();break;
case 2:printf("Enter deposit value\n");
scanf("%d",&a);
if (a<0){
printf("Deposit value can't be negative\n");break;}
Deposit(a);break;
case 3:printf("Enter withdraw value\n");
scanf("%d",&a);
if (a<0){
printf("Withdraw value can't be negative\n");break;}
Withdraw(a);break;
case 4: printf("Thank you for using our ATM\n");break;
default: printf("Invalid choice\n");
}

 } while(choice != 4);

}
