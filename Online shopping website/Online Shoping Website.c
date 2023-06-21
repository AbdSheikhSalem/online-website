#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<time.h>
struct clothes
{
	char *type;
	int price;
};
void HomePage()
{ char username[100];
int password;  
    printf("\n");
    system("COLOR 3");
    printf("\t\t\t\t*******Welcome to Zara online shopping website*******\n\n");
    system("pause");
    printf("                                       please Login to your account.\n\n");
    printf("USERNAME:");
    scanf("%s",username);
    printf("\n\n");
    printf("PASSWORD:");
    scanf("%d",&password);
    printf("\n\n\n\t\t\t\t\t\tWelcome Back %s :) \n",username);
    
}
void MensClothes()
{ 
    system("COLOR B"); 
    struct clothes Tshirt;
	Tshirt.type="Black Shirt with Rick and Morty Logo";
	Tshirt.price = 40 ;
	struct clothes jeans;
	jeans.type="Dark Blue jeans";
	jeans.price=60 ;
	struct clothes jacket1;
	 jacket1.type="Black leather jacket";
	 jacket1.price=120 ;
	 struct clothes jacket2;
	 jacket2.type="dark green water proof jacket";
	 jacket2.price=100 ;
	 struct clothes shirt;
	 shirt.type="grey hoodie with marvel logo";
	 shirt.price=60 ;
	 printf("\t  ProductType                                 ProductPrice\n\n");
	 printf("1-  %s                   %d$\n\n",Tshirt.type,Tshirt.price);
	 printf("2-  %s                           %d$\n\n",shirt.type,shirt.price);
	 printf("3-  %s                                  %d$\n\n",jacket1.type,jacket1.price);
	 printf("4-  %s                         %d$\n\n",jacket2.type,jacket2.price);
	 printf("5-  %s                                        %d$\n\n\n",jeans.type,jeans.price);
	 printf("6-Exit\n");
	 printf("7-Pay\n");
}
void WomensClothes()
{
	system("COLOR FC");
	struct clothes jacket1;
	jacket1.type="Short Black Leather Jacket";
	jacket1.price=100;
    struct clothes jacket2;
	jacket2.type="long Brown Jacket";
	jacket2.price=150;
	struct clothes Tshirt;
	Tshirt.type="Disney Tshirt";
	Tshirt.price=45;
	struct clothes jeans;
	jeans.type="light blue jeans";
	jeans.price=70;
	struct clothes skirt;
	skirt.type="Red Short Skirt";
	skirt.price=50;
	struct clothes hoodie2;
	hoodie2.type="White Hoodie";
	hoodie2.price=50;
	struct clothes hoodie;
	hoodie.type="Pink Hoodie";
	hoodie.price=50;
	 printf("\t  ProductType                                 ProductPrice\n\n");
	 printf("1-       %s                                     %d$\n\n",Tshirt.type,Tshirt.price);
	 printf("2-      %s                                    %d$\n\n",skirt.type,skirt.price);
	 printf("3-    %s                          %d$\n\n",jacket1.type,jacket1.price);
	 printf("4-      %s                                 %d$\n\n",jacket2.type,jacket2.price);
	 printf("5-      %s                                   %d$\n\n",jeans.type,jeans.price);
	 printf("6-        %s                                     %d$\n\n",hoodie2.type,hoodie2.price);
	 printf("7-        %s                                      %d$\n\n\n",hoodie.type,hoodie.price);
	 printf("8-Exit\n\n");
	 printf("9-Pay\n\n");
}
void end()
{
	printf("Have a nice day /n");
}
void MensPerfumes()
{
	  system("COLOR B"); 
    struct clothes Seoul;
	Seoul.type="SEOUL 80 ML";
	Seoul.price = 15 ;
	struct clothes MoonLight;
	MoonLight.type="MoonLight 80 ML";
	MoonLight.price=20 ;
	struct clothes Gold;
	 Gold.type="Gold 30 ML";
	 Gold.price=20 ;
	 struct clothes BlueSpirit;
	 BlueSpirit.type="BlueSpirit 50 ML";
	 BlueSpirit.price=18 ;
	 struct clothes MidNight;
	 MidNight.type="MidNight 65ML";
	 MidNight.price=25 ;
	 printf("\t  ProductType                                 ProductPrice\n\n");
	 printf("1-        %s                                     %d$\n\n",Seoul.type,Seoul.price);
	 printf("2-       %s                                  %d$\n\n",MoonLight.type,MoonLight.price);
	 printf("3-        %s                                      %d$\n\n",Gold.type,Gold.price);
	 printf("4-      %s                                  %d$\n\n",BlueSpirit.type,BlueSpirit.price);
	 printf("5-       %s                                    %d$\n\n\n",MidNight.type,MidNight.price);
	 printf("6-Exit\n");
	 printf("7-Pay\n");
}
void WomensPerfumes()
{
	 system("COLOR FC");
    struct clothes Tuberose;
	Tuberose.type="Tuberose 70 ML";
	Tuberose.price = 15 ;
	struct clothes WhiteGardenia;
	WhiteGardenia.type="WhiteGardenia 100 ML";
	WhiteGardenia.price=20 ;
	struct clothes MysteryBalance;
	 MysteryBalance.type="MysteryBalance 40 ML";
	 MysteryBalance.price=10 ;
	 struct clothes Cozy;
	 Cozy.type="Cozy 60 ML";
	 Cozy.price=15 ;
	 struct clothes Holistic;
	 Holistic.type="Holistic 100 ML";
	 Holistic.price=25 ;
	 printf("\t  ProductType                                 ProductPrice\n\n");
	 printf("1-        %s                                  %d$\n\n",Tuberose.type,Tuberose.price);
	 printf("2-  %s                                  %d$\n\n", WhiteGardenia.type, WhiteGardenia.price);
	 printf("3-  %s                                  %d$\n\n",MysteryBalance.type,MysteryBalance.price);
	 printf("4-       %s                                  %d$\n\n",Holistic.type,Holistic.price);
	 printf("5-            %s                                  %d$\n\n\n",Cozy.type,Cozy.price);
	 printf("6-Exit\n");
	 printf("7-Pay\n");
}
void payment(int money)
{system("cls");
int cardnum,c;
char choice='Y';
char adress[100];
if(money==0) {
	system("cls");
printf("You didn't add anything to the basket.\n"); 
printf("you will get back to the Main Menu.\n");
	system("pause");
	system("cls");
MainMenu();
}
else {
	printf("\t\t                         Choose your payment method:\n\n");
	printf("\t\t\t1-Cash On Arrival\t\t\t\t2-Credit or Debt Card\n\n");
	scanf("%d",&c);
system("cls");
system("COLOR C");
if(c==2)
{
	printf("Enter your card Number to pay:\t");
	scanf("%d",&cardnum);
	printf("please enter your adress:\n");
			    scanf("%s",adress);
	printf("are you sure you want to continue (Y / N)?\n");
	scanf(" %c",&choice);
	if(choice=='y' || choice=='Y')
	{ 	printf("\t\t\t\tThe total  is %d $\n",money);
		system("pause");
				printf("\t\t\t\tplease wait until the process is done.\n");
		        system("pause");
			    printf("\t\t\t\tThank you for choosing us :)\n");
			    system("pause");
			    system("cls");
			    end();
			    }
	else {
	system("cls"); 
	end();}}
	else if(c==1)
	{
			printf("please enter your adress:\n");
			    scanf("%s",adress);
	printf("are you sure you want to continue (Y / N)?\n");
	scanf(" %c",&choice);
	if(choice=='y' || choice=='Y')
	{ 	printf("\t\t\t\tThe total  is %d $\n",money);
		system("pause");
				printf("\t\t\t\tplease wait until the process is done.\n");
		        system("pause");
			    printf("\t\t\t\tThank you for choosing us :)\n");
			    system("pause");
			    system("cls");
			    end();
			    }
	else {
	system("cls"); 
	end();}
		
	}
	else {printf("wrong number!!\n\n"); payment(money);}
	}
}
 void MainMenu()
{   
	int a,money=0;
    char size[100];
	system("COLOR A");
	printf("\t\t\t\t  Choose what you want by typing its number\n\n\n");
	printf("\t\t\t\t\t\t1-Men's Clothes\n\n\n");
	printf("\t\t\t\t\t\t2-Women's Clothes\n\n\n");
	printf("\t\t\t\t\t\t3-Perfumes\n\n\n");
	printf("\t\t\t\t\t\t4-Exit\n\n\n");
	scanf("%d",&a);
	system("cls"); 
     if(a==1)
	{  int   c,b,total1;
	printf("\t\t\t\tChoose what you want by typing its number to add it to the basket\n");
	 system("pause");
	do{
	MensClothes();
		scanf("%d",&c);
		if(c==1 || c==2 || c==3 || c==4 || c==5)
		{
		printf("Type how many do you want of it:\t");
		scanf("%d",&b);
		printf("please type the size you want:\n");
		printf("XS-S-M-L-XL\n\n\n");
		scanf(" %s",size);}
		if(c==1)           {total1=40*b;  }
		else if(c==2)      {total1=60*b;  }
		else if(c==3)      {total1=120*b;  }
		else if(c==4)      {total1=100*b;  }
		else if(c==5)      {total1=60*b; }
		else if(c==7) {payment(money); money=0;}
		system("cls");
		money+=total1;
		}while(c!=6 && c!=7);
		if(c==6 || c==7) MainMenu();
		}
	else if(a==2)    {
		              int   i,n,total2;
	printf("\t\t\t\tChoose what you want by typing its number to add it to the basket\n");
	 system("pause");
	do{
	WomensClothes();
		scanf("%d",&i);
		if(i==1 || i==2 || i==3 || i==4 || i==5 || i==6 || i==7 )
		{
		printf("Type how many do you want of it:\t");
		scanf("%d",&n);
		printf("please type the size you want:\n");
			printf("XS-S-M-L-XL\n\n\n");
		scanf(" %s",size);}
		if(i==1)           {total2=45*n;  }
		else if(i==2)      {total2=50*n;  }
		else if(i==3)      {total2=70*n;  }
		else if(i==4)      {total2=150*n;  }
		else if(i==5)      {total2=70*n; }
		else if(i==6)      {total2=60*n; }
		else if(i==7)      {total2=50*n; }
		else if(i==9) {payment(money); money=0;}
		system("cls");
		money+=total2;
		}while(i!=8 && i!=9);
		if(i==8 || i==9) MainMenu();
	                 }
	else if(a==3)  {int d,z,m,total3;
	system("COLOR 4");
		         printf("Choose what you want by typing its number.\n");
		         system("pause");
		         printf("\n\n\n\t\t\t1-MensPerfumes                      2-WomensPerfumes\n");
		         scanf("%d",&d);
		         system("cls");
		         if(d==1)
		         {
		         	do{
		         		MensPerfumes();
		         		scanf("%d",&z);
		if(z==1 || z==2 || z==3 || z==4 || z==5  )
		{
		printf("Type how many do you want of it:\t");
		scanf("%d",&m);}
		         		if(z==1) {total3=15*m;}
						else if(z==2) {total3=20*m;}
						else if(z==3) {total3=20*m;}
						else if(z==4) {total3=18*m;}
						else if(z==5) {total3=25*m;}
						else if(z==7) {payment(money); money=0;}
						money+=total3;
					    system("cls");}while(z!=6 && z!=7);
					    if(z==6 || z==7) MainMenu();
				 }
				 else if(d==2)
				 {
				 	do{
				 		WomensPerfumes();
				 		scanf("%d",&z);
				 			if(z==1 || z==2 || z==3 || z==4 || z==5  )
		{
		printf("Type how many do you want of it:\t");
		scanf("%d",&m);}
		         		if(z==1) {total3=15*m;}
						else if(z==2) {total3=20*m;}
						else if(z==3) {total3=10*m;}
						else if(z==4) {total3=15*m;}
						else if(z==5) {total3=25*m;}
						else if(z==7) {payment(money); money=0;}
						money+=total3;
					    system("cls");}while(z!=6 && z!=7);
					    if(z==6 || z==7) MainMenu();
				 }
	              } 
	else if(a==4) {
		          end();
	              }
	system("COLOR B");
	system("pause");
	system("cls"); 
}

int main()
{int money=0,end=0;
char size[100];
	HomePage();
	system("cls");
	MainMenu();
	return 0;
}
