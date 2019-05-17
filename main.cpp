#include <stdio.h>
#include<stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct phone
{
	unsigned char a[20];
	unsigned char b[30];
	long int c;
	 int d;
};

int main(void) {
	
	struct phone phone1={"APPLE","A12 Bionic",2018,20564};
	struct phone phone2={"SAMSUNG","Exynos 9810",2018,21804};
	struct phone phone3={"ASUS","Snapdragon 821",2016,23000};
	struct phone phone4={"OPPO","Snapdragon 710",2019,15282};
	struct phone phone5={"HTC","Snapdragon 845",2018,16788};
	
	printf("珇礟:%s\n",phone1.a);	
	printf("腹:%s\n",phone1.b);	
	printf(":%d\n",phone1.c);	
	printf("基:%d\n\n",phone1.d);	
	
	printf("珇礟:%s\n",phone2.a);	
	printf("腹:%s\n",phone2.b);	
	printf(":%d\n",phone2.c);	
	printf("基:%d\n\n",phone2.d);	
	
	printf("珇礟:%s\n",phone3.a);	
	printf("腹:%s\n",phone3.b);	
	printf(":%d\n",phone3.c);	
	printf("基:%d\n\n",phone3.d);	
	
	printf("珇礟:%s\n",phone4.a);	
	printf("腹:%s\n",phone4.b);	
	printf(":%d\n",phone4.c);	
	printf("基:%d\n\n",phone4.d);	
	
	printf("珇礟:%s\n",phone5.a);	
	printf("腹:%s\n",phone5.b);	
	printf(":%d\n",phone5.c);	
	printf("基:%d\n\n",phone5.d);	
	
							
	return 0;
}
