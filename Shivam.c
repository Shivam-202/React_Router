#include<stdio.h>
#include<conio.h>

// Function Declaration

void account_info();
void pin();
void menu();
void pin_menu();
void Deposit();
void Withdraw();
void Check_details();
void big();

// Variable Declearation

    float Total_Amount,dip_amount,with_amount,trans_amount,diposit=0,withdraw=0,transfer=0,Final_Amount,a,b,c,d,e,t;
    char str[100],gen[20];
    int cho,choice,pin_code,re_pin;
    long long int acc_number,mobile_number,acc_number1;
    char ch,cha;
    int pass[5],pan[5];
    int i;


//Main FUNCTION


int main()

{
    printf(" \n       ********** WELLCOME TO BANKING MANAGMENT SYSTEM **********\n");
   account_info();
    pin();

    system("cls");

while(1){

     system("cls");

     printf("\n\nHELLO,");
     printf("%s",str);

    printf(" \n                   **********************************\n");

    menu();  //Function 1

    printf("\n                    **********************************");

    printf("\n\n\t\tNOTE:: First You Have To Deposit Money In Your Account\n");

    printf("\nEnter your choice <1/2/3/4/5/6/7/8> \n");
    scanf("%d",&choice);

    printf("You pressed %d\n",choice);



     switch(choice){

       case 1:
        key();
     printf("\n\tEnter Your Pin Number : ");
           scanf("%d",&re_pin);


               if(pin_code==re_pin){
               Deposit();
              diposit+=dip_amount;
               }

               else
            #include<stdio.h>
#include<conio.h>

// Function Declaration

void account_info();
void pin();
void menu();
void pin_menu();
void Deposit();
void Withdraw();
void Check_details();
void big();

// Variable Declearation

    float Total_Amount,dip_amount,with_amount,trans_amount,diposit=0,withdraw=0,transfer=0,Final_Amount,a,b,c,d,e,t;
    char str[100],gen[20];
    int cho,choice,pin_code,re_pin;
    long long int acc_number,mobile_number,acc_number1;
    char ch,cha;
    int pass[5],pan[5];
    int i;


//Main FUNCTION


int main()

{
    printf(" \n       ********** WELLCOME TO BANKING MANAGMENT SYSTEM **********\n");
   account_info();
    pin();

    system("cls");

while(1){

     system("cls");

     printf("\n\nHELLO,");
     printf("%s",str);

    printf(" \n                   **********************************\n");

    menu();  //Function 1

    printf("\n                    **********************************");

    printf("\n\n\t\tNOTE:: First You Have To Deposit Money In Your Account\n");

    printf("\nEnter your choice <1/2/3/4/5/6/7/8> \n");
    scanf("%d",&choice);

    printf("You pressed %d\n",choice);



     switch(choice){

       case 1:
        key();
     printf("\n\tEnter Your Pin Number : ");
           scanf("%d",&re_pin);


               if(pin_code==re_pin){
               Deposit();
              diposit+=dip_amount;
               }

               else
                {
                    pin_menu();
                    printf("\nEnter choice : ");
                    scanf("%d",&cho);

                    switch(cho)
                     {

                       case 1:
                           key();
                             printf("\n\tEnter Your Pin Number : ");
           scanf("%d",&re_pin);

                               if(pin_code==re_pin){
                                       Deposit();
                                   diposit+=dip_amount;
                                     }
                                break;

                       case 2:
                                   pin();
                                break;

                       case 3:
                          printf("\n\n\t\t\tPress the 'ENTER KEY'");
                           big();

                           break;

                     default:
                            printf("\nInvalid choice");

                    }
                }
               break;

       case 2:
           key();
           printf("\n\tEnter Your Pin Number : ");
           scanf("%d",&re_pin);
           if(pin_code==re_pin){

               Withdraw();

               if(a>=with_amount){
                  withdraw+=with_amount;

             a-=with_amount;
               }

           }
            else
               {
                    pin_menu();
                    printf("\nEnter choice : ");
                    scanf("%d",&cho);

                    switch(cho)
                     {

                       case 1:
                             key();
                           printf("\n\tEnter Your Pin Number : ");
                           scanf("%d",&re_pin);
                             if(pin_code==re_pin){
                                     Withdraw();
                                  if(a>=with_amount)
                                        withdraw+=with_amount;

                                      a-=with_amount;

                                  }
                                       break;

                       case 2:
                            pin();
                          break;

                    case 3:
                         printf("\n\n\t\t\tPress the 'ENTER KEY'");
                        big();
                        break;

                      default:
                        printf("\nInvalid choice");

                    }
                }
                    break;


        case 3:
               key();
               printf("\n\tEnter Your Pin Number : ");
               scanf("%d",&re_pin);
               if(pin_code==re_pin){
               Check_details();
               }
                else
               {
                    pin_menu();
                    printf("\nEnter choice : ");
                    scanf("%d",&cho);

                    switch(cho)
                     {
                           case 1:
                               key();
                              printf("\n\tEnter Your Pin Number : ");
                              scanf("%d",&re_pin);
                                 if(pin_code==re_pin){
                                    Check_details();
                                   }
                               break;

                            case 2:
                                  pin();
                               break;

                             case 3:
                                 printf("\n\n\t\t\tPress the 'ENTER KEY'");
                           big();
                           break;

                     default:
                        printf("\nInvalid choice");

                    }
                }

               break;

        case 4:
            key();
             printf("\t\tEnter Account Number : ");
                  scanf("%lli",&acc_number1);


                if(acc_number==acc_number1){
                    printf("\n\t\t\tYour Pin code is : %d",pin_code);
                }
                else
                {
                    printf("\n\t\tInvalid Account Number");
                }
            printf("\n\n\t\t\tPress the 'ENTER KEY'");

            break;


              case 5:

                 t=dip_amount-c+c-d+d-e;
                 printf("\n\n\tTotal Amount : %f",t);
                  break;

          case 6:
                {
                    printf("\n\t\t\t\t\tWithdrawal Slip\n\n");



                  printf("\t\t\tEnter Account Number : ");
                  scanf("%lli",&acc_number1);


                if(acc_number==acc_number1)
                  {
                    printf("\nEnter Withdraw amount:");
                    scanf("%f",&with_amount);
                    e=with_amount;
                    a=dip_amount;
                      if(dip_amount>=with_amount)

                          {

                                withdraw+=with_amount;

                                  a-=with_amount;


                               printf("\n\t\tWithdraw Successfully\n");


                           }

                       else

                           {
                              printf("\n\tInsufficient Amount");
                            printf("\n\n\t\tWithdraw Failed\n");
                          }
                            printf("\n\n\t\t\tPress the 'ENTER KEY'");
                  }
                     else
                     {
                         printf("\n\t\t\tPlease Enter Valid  Account Number ");
                        printf("\n\n\t\t\tPress the 'ENTER KEY'");
                     }

                }


     break;

             case 7:
            dele();
             newacc();
            break;

          case 8:
               printf("\n\t\t********* THANK YOU *********");
               exit(1);
               break;



        default:
             printf("\n\t!Invalid Choice");
        break;

}


getch();
 }

}


        //Function 1

void account_info()
{
     fflush(stdin);
     printf("\n\t\tEnter Name : ");
    gets(str);
    printf("\n\t\tEnter Account Number : ");
    scanf("%lli",&acc_number);

    printf("\n\t\tEnter Mobile Number : ");
    scanf("%lli",&mobile_number);

}


 void first()
 {
     printf("\n\t\t\tFirstly , Deposite Amount ::");
     scanf("%f",&dip_amount);
 }

    //Function 2

void pin()
{
int pin_r;
      printf("\n\t\tSet Your Pin Number : ");
      scanf("%d",&pin_code);

}

          //Function 3

void menu()
{


    printf("\n\t1.Deposit Balance");

    printf("\n\t2.Withdraw Balance");

    printf("\n\t3.Check Details");

    printf("\n\t4.Check Your PIN CODE");

    printf("\n\t5.Check Your Balance");

    printf("\n\t6.Withdraw Slip");

    printf("\n\t7.New Account");

    printf("\n\t8.Exit\n");

}

         //Function 4

void pin_menu()
{

    printf("\n\t1.Retry Password ");

    printf("\n\t2.Forgot Password ");

    printf("\n\t3.Back to Home \n");

}

        //Function 5

void Deposit()
{

    printf("\nEnter Deposit amount:");
    scanf("%f",&dip_amount);



    printf("\n\t\tDeposit Successfully\n ");
   //printf("\n\tAvailable Balance:%f",b);
     printf("\n\n\t\t\tPress the 'ENTER KEY'");

}

        //Function 6

void Withdraw()
{

    printf("\nEnter Withdraw amount:");
    scanf("%f",&with_amount);
    c=with_amount;
    a=dip_amount;
 if(dip_amount>0){

     if(dip_amount>=with_amount){
     dip_amount-=with_amount;

         printf("\n\t\tWithdraw Successfully\n");


}
    else
    {

        printf("\n\tInsufficient Amount");
        printf("\n\n\t\tWithdraw Failed\n");
    }
        printf("\n\n\t\t\tPress the 'ENTER KEY'");
 }

 else
 {
     printf("\n\tInsufficient Amount");
 }

}

        //Funtion 7


void Check_details()
{

    printf("\n\tName : %s",str);
    printf("\n\tAccount Number : %lli",acc_number);
    printf("\n\tMobile Number : %lli",mobile_number);

    t=dip_amount-c+c-d+d-e;
    printf("\n\n\tTotal Amount : %f",t);

    printf("\n\n\tTotal Deposit Amount : %f",diposit);
    printf("\n\tTotal Withdraw Amount : %f",withdraw);


    printf("\n\n\t\t\tPress the 'ENTER KEY'");

}

     //BIG FUNCTION

void big()
{ }

  //KEY FUNCTION

void key()
{
    printf("\n\t\t\t7   8   9\n");
    printf("\n\t\t\t4   5   6\n");
    printf("\n\t\t\t1   2   3\n");
    printf("\n\t\t\t    0    \n\n");
}

void dele()
{

     acc_number=0;mobile_number=0;
     dip_amount=0;c=0;d=0;
     e=0;
    t=0;diposit=0;withdraw=0;transfer=0;
}



void newacc()
{
   {
       printf("\n\n\t\tYour Account Is Refresh");
        printf("\n\n\t\t\tPress the 'ENTER KEY'");
             system("cls");
    printf(" \n       ********** WELLCOME TO BANKING MANAGMENT SYSTEM **********\n");
   account_info();
    pin();

    system("cls");

while(1){

     system("cls");

     printf("\n\nHELLO,%s\n\n",str);

    printf(" \n                   **********************************\n");

    menu();  //Function 1

    printf("\n                    **********************************");

    printf("\n\n\t\tNOTE:: First You Have To Deposit Money In Your Account\n");

    printf("\nEnter your choice <1/2/3/4/5/6/7/8> \n");
    scanf("%d",&choice);

    printf("You pressed %d\n",choice);



     switch(choice){

       case 1:
        key();
     printf("\n\tEnter Your Pin Number : ");
           scanf("%d",&re_pin);


               if(pin_code==re_pin){
               Deposit();
              diposit+=dip_amount;
               }

               else
                {
                    pin_menu();
                    printf("\nEnter choice : ");
                    scanf("%d",&cho);

                    switch(cho)
                     {

                       case 1:
                           key();
                             printf("\n\tEnter Your Pin Number : ");
           scanf("%d",&re_pin);

                               if(pin_code==re_pin){
                                       Deposit();
                                   diposit+=dip_amount;
                                     }
                                break;

                       case 2:
                                   pin();
                                break;

                       case 3:
                          printf("\n\n\t\t\tPress the 'ENTER KEY'");
                           big();

                           break;

                     default:
                            printf("\nInvalid choice");

                    }
                }
               break;

       case 2:
           key();
           printf("\n\tEnter Your Pin Number : ");
           scanf("%d",&re_pin);
           if(pin_code==re_pin){

               Withdraw();

               if(a>=with_amount){
                  withdraw+=with_amount;

             a-=with_amount;
               }

           }
            else
               {
                    pin_menu();
                    printf("\nEnter choice : ");
                    scanf("%d",&cho);

                    switch(cho)
                     {

                       case 1:
                             key();
                           printf("\n\tEnter Your Pin Number : ");
                           scanf("%d",&re_pin);
                             if(pin_code==re_pin){
                                     Withdraw();
                                  if(a>=with_amount)
                                        withdraw+=with_amount;

                                      a-=with_amount;

                                  }
                                       break;

                       case 2:
                            pin();
                          break;

                    case 3:
                         printf("\n\n\t\t\tPress the 'ENTER KEY'");
                        big();
                        break;

                      default:
                        printf("\nInvalid choice");

                    }
                }
                    break;


        case 3:
               key();
               printf("\n\tEnter Your Pin Number : ");
               scanf("%d",&re_pin);
               if(pin_code==re_pin){
               Check_details();
               }
                else
               {
                    pin_menu();
                    printf("\nEnter choice : ");
                    scanf("%d",&cho);

                    switch(cho)
                     {
                           case 1:
                               key();
                              printf("\n\tEnter Your Pin Number : ");
                              scanf("%d",&re_pin);
                                 if(pin_code==re_pin){
                                    Check_details();
                                   }
                               break;

                            case 2:
                                  pin();
                               break;

                             case 3:
                                 printf("\n\n\t\t\tPress the 'ENTER KEY'");
                           big();
                           break;

                     default:
                        printf("\nInvalid choice");

                    }
                }

               break;

        case 4:
            key();
             printf("\t\tEnter Account Number : ");
                  scanf("%lli",&acc_number1);


                if(acc_number==acc_number1){
                    printf("\n\t\t\tYour Pin code is : %d",pin_code);
                }
                else
                {
                    printf("\n\t\tInvalid Account Number");
                }
            printf("\n\n\t\t\tPress the 'ENTER KEY'");

            break;

           case 5:

              t=dip_amount-c+c-d+d-e;
              printf("\n\n\tTotal Amount : %f",t);
              break;


          case 6:
                {
                    printf("\n\t\t\t\t\tWithdrawal Slip\n\n");



                  printf("\t\t\tEnter Account Number : ");
                  scanf("%lli",&acc_number1);


                if(acc_number==acc_number1)
                  {
                    printf("\nEnter Withdraw amount:");
                    scanf("%f",&with_amount);
                    e=with_amount;
                    a=dip_amount;
                      if(dip_amount>=with_amount)

                          {

                                withdraw+=with_amount;

                                  a-=with_amount;


                               printf("\n\t\tWithdraw Successfully\n");


                           }

                       else

                           {
                              printf("\n\tInsufficient Amount");
                            printf("\n\n\t\tWithdraw Failed\n");
                          }
                            printf("\n\n\t\t\tPress the 'ENTER KEY'");
                  }
                     else
                     {
                         printf("\n\t\t\tPlease Enter Valid  Account Number ");
                        printf("\n\n\t\t\tPress the 'ENTER KEY'");
                     }

                }


     break;


             case 7:
            dele();
             newacc();
            break;

          case 8:
               printf("\n\t\t********* THANK YOU *********");
               exit(1);
               break;

        default:
             printf("\n\t!Invalid Choice");
        break;

}


  getch();

   }

 }
}


                     // **************** THE END ***************** //

    {
                    pin_menu();
                    printf("\nEnter choice : ");
                    scanf("%d",&cho);

                    switch(cho)
                     {

                       case 1:
                           key();
                             printf("\n\tEnter Your Pin Number : ");
           scanf("%d",&re_pin);

                               if(pin_code==re_pin){
                                       Deposit();
                                   diposit+=dip_amount;
                                     }
                                break;

                       case 2:
                                   pin();
                                break;

                       case 3:
                          printf("\n\n\t\t\tPress the 'ENTER KEY'");
                           big();

                           break;

                     default:
                            printf("\nInvalid choice");

                    }
                }
               break;

       case 2:
           key();
           printf("\n\tEnter Your Pin Number : ");
           scanf("%d",&re_pin);
           if(pin_code==re_pin){

               Withdraw();

               if(a>=with_amount){
                  withdraw+=with_amount;

             a-=with_amount;
               }

           }
            else
               {
                    pin_menu();
                    printf("\nEnter choice : ");
                    scanf("%d",&cho);

                    switch(cho)
                     {

                       case 1:
                             key();
                           printf("\n\tEnter Your Pin Number : ");
                           scanf("%d",&re_pin);
                             if(pin_code==re_pin){
                                     Withdraw();
                                  if(a>=with_amount)
                                        withdraw+=with_amount;

                                      a-=with_amount;

                                  }
                                       break;

                       case 2:
                            pin();
                          break;

                    case 3:
                         printf("\n\n\t\t\tPress the 'ENTER KEY'");
                        big();
                        break;

                      default:
                        printf("\nInvalid choice");

                    }
                }
                    break;


        case 3:
               key();
               printf("\n\tEnter Your Pin Number : ");
               scanf("%d",&re_pin);
               if(pin_code==re_pin){
               Check_details();
               }
                else
               {
                    pin_menu();
                    printf("\nEnter choice : ");
                    scanf("%d",&cho);

                    switch(cho)
                     {
                           case 1:
                               key();
                              printf("\n\tEnter Your Pin Number : ");
                              scanf("%d",&re_pin);
                                 if(pin_code==re_pin){
                                    Check_details();
                                   }
                               break;

                            case 2:
                                  pin();
                               break;

                             case 3:
                                 printf("\n\n\t\t\tPress the 'ENTER KEY'");
                           big();
                           break;

                     default:
                        printf("\nInvalid choice");

                    }
                }

               break;

        case 4:
            key();
             printf("\t\tEnter Account Number : ");
                  scanf("%lli",&acc_number1);


                if(acc_number==acc_number1){
                    printf("\n\t\t\tYour Pin code is : %d",pin_code);
                }
                else
                {
                    printf("\n\t\tInvalid Account Number");
                }
            printf("\n\n\t\t\tPress the 'ENTER KEY'");

            break;


              case 5:

                 t=dip_amount-c+c-d+d-e;
                 printf("\n\n\tTotal Amount : %f",t);
                  break;

          case 6:
                {
                    printf("\n\t\t\t\t\tWithdrawal Slip\n\n");



                  printf("\t\t\tEnter Account Number : ");
                  scanf("%lli",&acc_number1);


                if(acc_number==acc_number1)
                  {
                    printf("\nEnter Withdraw amount:");
                    scanf("%f",&with_amount);
                    e=with_amount;
                    a=dip_amount;
                      if(dip_amount>=with_amount)

                          {

                                withdraw+=with_amount;

                                  a-=with_amount;


                               printf("\n\t\tWithdraw Successfully\n");


                           }

                       else

                           {
                              printf("\n\tInsufficient Amount");
                            printf("\n\n\t\tWithdraw Failed\n");
                          }
                            printf("\n\n\t\t\tPress the 'ENTER KEY'");
                  }
                     else
                     {
                         printf("\n\t\t\tPlease Enter Valid  Account Number ");
                        printf("\n\n\t\t\tPress the 'ENTER KEY'");
                     }

                }


     break;

             case 7:
            dele();
             newacc();
            break;

          case 8:
               printf("\n\t\t********* THANK YOU *********");
               exit(1);
               break;



        default:
             printf("\n\t!Invalid Choice");
        break;

}


getch();
 }

}


        //Function 1

void account_info()
{
     fflush(stdin);
     printf("\n\t\tEnter Name : ");
    gets(str);
    printf("\n\t\tEnter Account Number : ");
    scanf("%lli",&acc_number);

    printf("\n\t\tEnter Mobile Number : ");
    scanf("%lli",&mobile_number);

}


 void first()
 {
     printf("\n\t\t\tFirstly , Deposite Amount ::");
     scanf("%f",&dip_amount);
 }

    //Function 2

void pin()
{
int pin_r;
      printf("\n\t\tSet Your Pin Number : ");
      scanf("%d",&pin_code);

}

          //Function 3

void menu()
{


    printf("\n\t1.Deposit Balance");

    printf("\n\t2.Withdraw Balance");

    printf("\n\t3.Check Details");

    printf("\n\t4.Check Your PIN CODE");

    printf("\n\t5.Check Your Balance");

    printf("\n\t6.Withdraw Slip");

    printf("\n\t7.New Account");

    printf("\n\t8.Exit\n");

}

         //Function 4

void pin_menu()
{

    printf("\n\t1.Retry Password ");

    printf("\n\t2.Forgot Password ");

    printf("\n\t3.Back to Home \n");

}

        //Function 5

void Deposit()
{

    printf("\nEnter Deposit amount:");
    scanf("%f",&dip_amount);



    printf("\n\t\tDeposit Successfully\n ");
   //printf("\n\tAvailable Balance:%f",b);
     printf("\n\n\t\t\tPress the 'ENTER KEY'");

}

        //Function 6

void Withdraw()
{

    printf("\nEnter Withdraw amount:");
    scanf("%f",&with_amount);
    c=with_amount;
    a=dip_amount;
 if(dip_amount>0){

     if(dip_amount>=with_amount){
     dip_amount-=with_amount;

         printf("\n\t\tWithdraw Successfully\n");


}
    else
    {

        printf("\n\tInsufficient Amount");
        printf("\n\n\t\tWithdraw Failed\n");
    }
        printf("\n\n\t\t\tPress the 'ENTER KEY'");
 }

 else
 {
     printf("\n\tInsufficient Amount");
 }

}

        //Funtion 7


void Check_details()
{

    printf("\n\tName : %s",str);
    printf("\n\tAccount Number : %lli",acc_number);
    printf("\n\tMobile Number : %lli",mobile_number);

    t=dip_amount-c+c-d+d-e;
    printf("\n\n\tTotal Amount : %f",t);

    printf("\n\n\tTotal Deposit Amount : %f",diposit);
    printf("\n\tTotal Withdraw Amount : %f",withdraw);


    printf("\n\n\t\t\tPress the 'ENTER KEY'");

}

     //BIG FUNCTION

void big()
{ }

  //KEY FUNCTION

void key()
{
    printf("\n\t\t\t7   8   9\n");
    printf("\n\t\t\t4   5   6\n");
    printf("\n\t\t\t1   2   3\n");
    printf("\n\t\t\t    0    \n\n");
}

void dele()
{

     acc_number=0;mobile_number=0;
     dip_amount=0;c=0;d=0;
     e=0;
    t=0;diposit=0;withdraw=0;transfer=0;
}



void newacc()
{
   {
       printf("\n\n\t\tYour Account Is Refresh");
        printf("\n\n\t\t\tPress the 'ENTER KEY'");
             system("cls");
    printf(" \n       ********** WELLCOME TO BANKING MANAGMENT SYSTEM **********\n");
   account_info();
    pin();

    system("cls");

while(1){

     system("cls");

     printf("\n\nHELLO,%s\n\n",str);

    printf(" \n                   **********************************\n");

    menu();  //Function 1

    printf("\n                    **********************************");

    printf("\n\n\t\tNOTE:: First You Have To Deposit Money In Your Account\n");

    printf("\nEnter your choice <1/2/3/4/5/6/7/8> \n");
    scanf("%d",&choice);

    printf("You pressed %d\n",choice);



     switch(choice){

       case 1:
        key();
     printf("\n\tEnter Your Pin Number : ");
           scanf("%d",&re_pin);


               if(pin_code==re_pin){
               Deposit();
              diposit+=dip_amount;
               }

               else
                {
                    pin_menu();
                    printf("\nEnter choice : ");
                    scanf("%d",&cho);

                    switch(cho)
                     {

                       case 1:
                           key();
                             printf("\n\tEnter Your Pin Number : ");
           scanf("%d",&re_pin);

                               if(pin_code==re_pin){
                                       Deposit();
                                   diposit+=dip_amount;
                                     }
                                break;

                       case 2:
                                   pin();
                                break;

                       case 3:
                          printf("\n\n\t\t\tPress the 'ENTER KEY'");
                           big();

                           break;

                     default:
                            printf("\nInvalid choice");

                    }
                }
               break;

       case 2:
           key();
           printf("\n\tEnter Your Pin Number : ");
           scanf("%d",&re_pin);
           if(pin_code==re_pin){

               Withdraw();

               if(a>=with_amount){
                  withdraw+=with_amount;

             a-=with_amount;
               }

           }
            else
               {
                    pin_menu();
                    printf("\nEnter choice : ");
                    scanf("%d",&cho);

                    switch(cho)
                     {

                       case 1:
                             key();
                           printf("\n\tEnter Your Pin Number : ");
                           scanf("%d",&re_pin);
                             if(pin_code==re_pin){
                                     Withdraw();
                                  if(a>=with_amount)
                                        withdraw+=with_amount;

                                      a-=with_amount;

                                  }
                                       break;

                       case 2:
                            pin();
                          break;

                    case 3:
                         printf("\n\n\t\t\tPress the 'ENTER KEY'");
                        big();
                        break;

                      default:
                        printf("\nInvalid choice");

                    }
                }
                    break;


        case 3:
               key();
               printf("\n\tEnter Your Pin Number : ");
               scanf("%d",&re_pin);
               if(pin_code==re_pin){
               Check_details();
               }
                else
               {
                    pin_menu();
                    printf("\nEnter choice : ");
                    scanf("%d",&cho);

                    switch(cho)
                     {
                           case 1:
                               key();
                              printf("\n\tEnter Your Pin Number : ");
                              scanf("%d",&re_pin);
                                 if(pin_code==re_pin){
                                    Check_details();
                                   }
                               break;

                            case 2:
                                  pin();
                               break;

                             case 3:
                                 printf("\n\n\t\t\tPress the 'ENTER KEY'");
                           big();
                           break;

                     default:
                        printf("\nInvalid choice");

                    }
                }

               break;

        case 4:
            key();
             printf("\t\tEnter Account Number : ");
                  scanf("%lli",&acc_number1);


                if(acc_number==acc_number1){
                    printf("\n\t\t\tYour Pin code is : %d",pin_code);
                }
                else
                {
                    printf("\n\t\tInvalid Account Number");
                }
            printf("\n\n\t\t\tPress the 'ENTER KEY'");

            break;

           case 5:

              t=dip_amount-c+c-d+d-e;
              printf("\n\n\tTotal Amount : %f",t);
              break;


          case 6:
                {
                    printf("\n\t\t\t\t\tWithdrawal Slip\n\n");



                  printf("\t\t\tEnter Account Number : ");
                  scanf("%lli",&acc_number1);


                if(acc_number==acc_number1)
                  {
                    printf("\nEnter Withdraw amount:");
                    scanf("%f",&with_amount);
                    e=with_amount;
                    a=dip_amount;
                      if(dip_amount>=with_amount)

                          {

                                withdraw+=with_amount;

                                  a-=with_amount;


                               printf("\n\t\tWithdraw Successfully\n");


                           }

                       else

                           {
                              printf("\n\tInsufficient Amount");
                            printf("\n\n\t\tWithdraw Failed\n");
                          }
                            printf("\n\n\t\t\tPress the 'ENTER KEY'");
                  }
                     else
                     {
                         printf("\n\t\t\tPlease Enter Valid  Account Number ");
                        printf("\n\n\t\t\tPress the 'ENTER KEY'");
                     }

                }


     break;


             case 7:
            dele();
             newacc();
            break;

          case 8:
               printf("\n\t\t********* THANK YOU *********");
               exit(1);
               break;

        default:
             printf("\n\t!Invalid Choice");
        break;

}


  getch();

   }

 }
}


                     // **************** THE END ***************** //

