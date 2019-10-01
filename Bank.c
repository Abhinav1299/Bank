#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<time.h>
typedef struct bank bank;

struct bank
{
    char name[30];
    char f_name[30];
    char e_mail[30];
    int age;
    char dob[20];
    long int mobile;
    long int aadhar;
    char address[70];
    int pin;
    char user_name[20];
    long int acc_num;
    long int balance;

}s;

int pin()
{
    int a;
    //time_t t;
    srand(time(NULL));
    a = 1000+rand()%9999;
    return a;
}


int withdrawl(FILE *fptr3,bank s4)
{
    int n;
    char a;
    long int m,l;
    system("cls");
    
                printf("Enter amount =  ");
                scanf("%ld",&l);
                s4.balance=s4.balance-l;
                fseek(fptr3,-1*sizeof(s4),SEEK_CUR);
                fwrite(&s4,sizeof(s4),1,fptr3);

                printf("\n\n\tProcessing your transaction please wait...");
                printf("\n\n\tTransaction successful ....");
                printf("Thank you for using our services\n\n\n");
                printf("Please collect your amount Rs %ld\n",l);
                printf("Press Y to see your left balance and N to skip\t");
                fflush(stdin);
                scanf("%c",&a);

                if(a=='Y'||a=='y')
                {
                printf("\n\n\t\t Current balance =  %ld",s4.balance);
                }
                else
                {
                    return 1;
                }
              //  strcpy(s4.balance,m);
                // else
               // {
               // continue;
                //}
    //}
    //return s4;

}

int deposit(FILE *fptr5,bank s6)
{
    long int a,m;
    system("cls");
    printf("Enter amount you want to deposit  =  ");
    scanf("%ld",&a);
   // fflush(stdin);
    printf("\t\t\t\tYour Transaction is being processed......\n");
    printf("\t\t\t\tTransaction successful\n\n");
    printf("Thank you for using our services\n");
    s6.balance=s6.balance+a;
    printf("\n\n\t\t current balance =  %ld",s6.balance);
   // strcpy(s6.balance,m);
    fseek(fptr5,-1*sizeof(s6),SEEK_CUR);
    fwrite(&s6,sizeof(s6),1,fptr5);
    return 1;

}

int balance(FILE *fptr4,bank s5)
{
    fflush(stdin);
    system("cls");
    char a;
    printf("Press Y to see your Account balance and N to skip =  ");
    scanf("%c",&a);
    if(a=='Y'||a=='y')
    {
    printf("\n\n\t\t Current balance =  %d",s5.balance);
    }
    else
    {
        return 1;
    }
}

//void balance();
int update(FILE *fptr2,bank s2)
{
    //FILE *fptr;
    //fptr=fopen("a.txt","");
    system("cls");
    int g,q;
    long int t;
    char a[30],ad[70];
    long int mob;
    printf("\n\n\t\t\t\t UPDATE CATEGORIES ");
    printf("\n\n\n\t\t 1. Name ");
    printf("\n\n\t\t 2. Father name");
    printf("\n\n\t\t 3. E-mail");
    printf("\n\n\t\t 4. Age");
    printf("\n\n\t\t 5. Date of birth");
    printf("\n\n\t\t 6. Mobile number");
    printf("\n\n\t\t 7. Aadhar");
    printf("\n\n\t\t 8. Address");
    printf("\n\n\t\t 9. Pin");
    printf("\n\n\t\t 10. User name");
    printf("\n\n\t\tEnter the option you want to update -  ");
    scanf("%d",&g);
    switch(g)
    {
        case 1: fflush(stdin);
                printf("\n\n\t\t Current name =  %s",s2.name);
                printf("\n\n\t\t Enter New name  = ");
                gets(a);
                strcpy(s2.name,a);
                fseek(fptr2,-1*sizeof(s2),SEEK_CUR);
                printf("\n\n\tUpdating your name...");
                //delay(100);
                printf("\n\n\tName updated successfully ....");
                fwrite(&s2,sizeof(s2),1,fptr2);
                break;

         case 2: fflush(stdin);
                printf("\n\n\t\t Current fathers name =  %s",s2.f_name);
                printf("\n\n\t\t Enter New name  = ");
                gets(a);
                strcpy(s2.f_name,a);
                fseek(fptr2,-1*sizeof(s2),SEEK_CUR);
                printf("\n\n\tUpdating fathers name...");
                //delay(100);
                printf("\n\n\tFathers name updated successfully ....");
                fwrite(&s2,sizeof(s2),1,fptr2);
                break;

         case 3: fflush(stdin);
                printf("\n\n\t\t Current E-mail address =  %s",s2.e_mail);
                printf("\n\n\t\t Enter New E- mail  = ");
                gets(a);
                strcpy(s2.e_mail,a);
                fseek(fptr2,-1*sizeof(s2),SEEK_CUR);
                printf("\n\n\tUpdating your E-mail...");
                //delay(100);
                printf("\n\n\tE-mail updated successfully ....");
                fwrite(&s2,sizeof(s2),1,fptr2);
                break;

         case 4: fflush(stdin);
                printf("\n\n\t\t Current age =  %d",s2.age);
                printf("\n\n\t\t Enter updated age  = ");
                scanf("%d",&q);
                s2.age=q;
                fseek(fptr2,-1*sizeof(s2),SEEK_CUR);
                printf("\n\n\tUpdating your age...");
                //delay(100);
                printf("\n\n\tAge updated successfully ....");
                fwrite(&s2,sizeof(s2),1,fptr2);
                break;

          case 5: fflush(stdin);
                printf("\n\n\t\t Current dob =  %s",s2.dob);
                printf("\n\n\t\t Enter New d.o.b  = ");
                gets(a);
                strcpy(s2.dob,a);
                fseek(fptr2,-1*sizeof(s2),SEEK_CUR);
                printf("\n\n\tUpdating your dob...");
                //delay(100);
                printf("\n\n\tD.o.b updated successfully ....");
                fwrite(&s2,sizeof(s2),1,fptr2);
                break;

          case 6 : fflush(stdin);
                printf("\n\n\t\t Current mobile no . =  %ld",s2.mobile);
                printf("\n\n\t\t Enter New mobile no.  = ");
                scanf("%ld",&t);
                s2.mobile=t;
                fseek(fptr2,-1*sizeof(s2),SEEK_CUR);
                printf("\n\n\tUpdating your mobile no....");
                //delay(100);
                printf("\n\n\tMobile no. updated successfully ....");
                fwrite(&s2,sizeof(s2),1,fptr2);
                break;

          case 7: fflush(stdin);
                printf("\n\n\t\t Current aadhar =  %ld",s2.aadhar);
                printf("\n\n\t\t Enter New aadhar  = ");
                scanf("%ld",&t);
                s2.aadhar=t;
                fseek(fptr2,-1*sizeof(s2),SEEK_CUR);
                printf("\n\n\tUpdating your aadhar...");
                //delay(100);
                printf("\n\n\tAadhar updated successfully ....");
                fwrite(&s2,sizeof(s2),1,fptr2);
                break;

          case 8:      fflush(stdin);
                printf("\n\n\t\t Current address =  %s",s2.address);
                printf("\n\n\t\t Enter New address  = ");
                gets(a);
                strcpy(s2.address,a);
                fseek(fptr2,-1*sizeof(s2),SEEK_CUR);
                printf("\n\n\tUpdating your address...");
                //delay(100);
                printf("\n\n\tAddress updated successfully ....");
                fwrite(&s2,sizeof(s2),1,fptr2);
                break;

          case 9:fflush(stdin);
                printf("\n\n\t\t Current pin =  %d",s2.pin);
                printf("\n\n\t\t Enter New pin  = ");
                scanf("%d",&q);
                s2.pin=q;
                fseek(fptr2,-1*sizeof(s2),SEEK_CUR);
                printf("\n\n\tUpdating your pin...");
                //delay(100);
                printf("\n\n\tPin updated successfully ....");
                fwrite(&s2,sizeof(s2),1,fptr2);
                break;

          case 10:
                 fflush(stdin);
                printf("\n\n\t\t Current user name =  %s",s2.user_name);
                printf("\n\n\t\t Enter New address  = ");
                gets(a);
                strcpy(s2.user_name,a);
                fseek(fptr2,-1*sizeof(s2),SEEK_CUR);
                printf("\n\n\tUpdating your user name ..");
                //delay(100);
                printf("\n\n\tUser name updated successfully ....");
                fwrite(&s2,sizeof(s2),1,fptr2);
                break;

    }
    return 1;
}

int delete_()
{
    int p,w;
    FILE *fptr,*fptr1;
    fptr=fopen("a.txt","rb");
    fptr1=fopen("temp.txt","wb");
    char u_name[20];
    system("cls");
    printf("\n\n\t\tEnter user name =  ");
    fflush(stdin);
    gets(u_name);
    printf("\n\n\t\tEnter pin =  ");
    scanf("%d",&p);
    while(!feof(fptr))
    {
        fread(&s,sizeof(s),1,fptr);

        if((s.pin!=p)&&(strcmp(s.user_name,u_name)!=0))
        {
            fwrite(&s,sizeof(s),1,fptr1);
        }

        
    }
    fclose(fptr);
    fclose(fptr1);
    remove("a.txt");
    rename("temp.txt","a.txt");

    return 1;
}


int details(bank s3)
{
    system("cls");
    printf("\n\n   Your name -  ");
    puts(s3.name);
    printf("\n   Your father's name -  ");
    puts(s3.f_name);
    printf("\n   Your E-mail -  ");
    puts(s3.e_mail);
    printf("\n   Your phone number -  %ld",s3.mobile);
    printf("\n\n   Your date of birth -  ");
    puts(s3.dob);
    printf("\n  Your age is -  %d",s3.age);
    printf("\n\n   Your aadhar number -  %ld",s3.aadhar);
    printf("\n\n   Your residential address -  ");
    puts(s3.address);
    printf("\n   Your user name for banking - ");
    puts(s3.user_name);
   // printf("\n\n   your pin is -   %d",s3.pin);
    //printf("\n\n   Your current balance is -   %ld",s3.balance);
    printf("\n\n   Your account number is - %ld",s3.acc_num);
    return 1;
}

int inside(FILE *fptr1,bank s1)
{
    bank s9;
    int n,y;
    char c;
    t:
    system("cls");
    printf("\n\n\t\t\tWelcome account number - %ld\n",s.acc_num);
    printf("\n\tChoose from the following services -  ");
    printf("\n\n   1. Update information");
    printf("\n\n   2. Deposit");
    printf("\n\n   3. Withdraw");
    printf("\n\n   4. Check balance");
    printf("\n\n   5. Your details");
    //printf("\n\n   6. Close account");
    printf("\n\n   6. EXIT");

    printf("\n\n\n\t\tNOTE : ONLY ONE ENTRY AT A TIME CAN BE UPDATED AND TO SEE THE UPDATED DETAILS, PLEASE RE-LOGIN");
    printf("\n\n\n   Enter your choice -  ");
    scanf("%d",&n);
    switch(n)
    {
        case 1: y=update(fptr1,s1);
                printf("\n\n\t\t\tPress Y to go to main menu - ");
                fflush(stdin);
                //getch();
                scanf("%c",&c);
                if(c=='y'||c=='Y')
                {
                    goto t;
                }
                break;

        case 2: y=deposit(fptr1,s1);
                printf("\n\n\t\t\tPress Y to go to main menu - ");
                fflush(stdin);
                //getch();
                scanf("%c",&c);
                if(c=='y'||c=='Y')
                {
                    goto t;
                }
                break;

        case 3: y=withdrawl(fptr1,s1);

                printf("\n\n\t\t\tPress Y to go to main menu - ");
                fflush(stdin);
                //getch();
                scanf("%c",&c);
                if(c=='y'||c=='Y')
                {
                    goto t;
                }
                break;

        case 4: y=balance(fptr1,s1);
                printf("\n\n\t\t\tPress Y to go to main menu - ");
                fflush(stdin);
                //getch();
                scanf("%c",&c);
                if(c=='y'||c=='Y')
                {
                    goto t;
                }
                break;

        case 5: y=details(s1);
                printf("\n\n\t\t\tPress Y to go to main menu - ");
                fflush(stdin);
                scanf("%c",&c);
                if(c=='y'||c=='Y')
                {
                   goto t;
               }

               // getch();
                break;

       // case 6:y=delete_();
         //      exit(0);
                //return 1;

        case 6: return 1;


        //default : exit(0);
    }
}

long int acc_no()
{
    int b;
    time_t t;
    srand(time(NULL));
    b=10000+rand()%99999;
    return b;
}

void input()
{
    system("cls");
    FILE *fptr;
    fflush(stdin);
    printf("\n\n   Enter your name -  ");
    fflush(stdin);
    gets(s.name);
    printf("\n   Enter your father's name -  ");
    fflush(stdin);
    gets(s.f_name);
    printf("\n   Enter your E-mail -  ");
    fflush(stdin);
    gets(s.e_mail);
    printf("\n   Enter your phone number -  ");
    scanf("%ld",&s.mobile);
    printf("\n   Enter your date of birth -  ");
    fflush(stdin);
    scanf("%s",s.dob);
    printf("\n   Enter your age -  ");
    scanf("%d",&s.age);
    printf("\n   Enter your aadhar number -  ");
    scanf("%ld",&s.aadhar);
    printf("\n   Enter your residential address -  ");
    fflush(stdin);
    gets(s.address);
    printf("\n   Enter initial balance in your account -  ");
    scanf("%ld",&s.balance);
    printf("\n\n   Enter your user name for banking - ");
    fflush(stdin);
    gets(s.user_name);
    s.pin=pin();
    printf("\n\n   Your pin is -   %d",s.pin);
    s.acc_num=acc_no();
    printf("\n\n   Your account number is - %ld",s.acc_num);
    fptr=fopen("a.txt","ab");
    fwrite(&s,sizeof(s),1,fptr);
    fclose(fptr);

}



void login()
{
    int p,w;
    FILE *fptr;
    fptr=fopen("a.txt","rb+");
    char u_name[20];
    system("cls");
    printf("\n\n\t\tEnter user name =  ");
    fflush(stdin);
    gets(u_name);
    printf("\n\n\t\tEnter pin =  ");
    scanf("%d",&p);
    while(!feof(fptr))
    {
        fread(&s,sizeof(s),1,fptr);
        //printf("%d %s",s.pin,s.user_name);

        if((s.pin==p)&&(strcmp(s.user_name,u_name)==0))
        {
            w=inside(fptr,s);
            if(w==1)//printf("\n\ninside\n\n");
            {
                break;
            }
        }

    }
    fclose(fptr);

}

int main()
{
    int a,b,c;
    x:
    system("cls");
    printf("\n\n\n\n            *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");

    printf("\n       \t    *       Welcome to HFDC Bank \t          *\n");
    printf("            *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");
    printf("            \t  ( MOST TRUSTED BANK OF GUJARAT )");
    printf("\n\n\n\n     press 1 key to continue......");
    //getch();
    scanf("%d",&b);
    if(b==1)
    {
        y:
    system("cls");
    printf("\n\n   1. Create new account ");
    printf("\n\n   2. Login");
    printf("\n\n   3. Return to main screen");
    printf("\n\n   4. About the project ");
    printf("\n\n   5. Acknowledgement ");
    printf("\n\n   6. Close your account");
    printf("\n\n   7. EXIT");
    printf("\n\n\n enter your choice -  ");
    scanf("%d",&a);
    switch(a)
    {
        case 1: input();
                printf("\n\n\t\tprocessing .....");
                getch();
                goto y;
                break;

        case 2: login();
                //printf("..........");goto y;
                printf("going to main screen..");
                getch();
                goto x;
                break;

        case 3: goto x;
                break;

        case 4: system("cls");
                printf("\n\n\t\t A B O U T   P R O J E C T");
                printf("\n\n\tThis is a Simple Project on BANKING,which can deal with various");
                printf("\n\n\n\tfunctions which enable us to do varieties of operations like creating");
                printf("\n\tnew accounts and accessing old accounts.It would proceed further if the");
                printf("\n\tuser enter's correct details or will return to the main page if the user");
                printf("\n\tenter's inccorect details.This program generates a random pin and account number.");
                printf("\n\tVarious types of facilities such as depositing,withdrawing money,account details,");
                printf("\n\tedit account,etc. are also provided.")    ;

                printf("\n\n\t\tproject made by - Abhinav Gupta (201851002)\n\t\t\t Utkarsh Tiwari (201851138)\n\t\t\tRahin Vadsariya (201851139)\n\n");
                getch();
                break;

        case 5:  system("cls");
                 printf("\n\tWe would like to express my special thanks to Ashish Sir who gave us the golden opportunity");
                 printf("\n\tto do this wonderful project on the to, which also helped us in doing a lot of research and");
                 printf("\n\t we came to know about so many new things. We are really thankful to him .");
                 getch();
                 break;

        case 6:  c=delete_();
                 printf("\n\n\t\tdeleting your account .....");
                 printf("\n\n\tYOUR ACCOUNT DELETED SUCCESSFULLY  ");
                 getch();
                 break;

        case 7 : exit(0);

        default : printf("enter valid choice..");
                  goto y;
    }
    }
}
