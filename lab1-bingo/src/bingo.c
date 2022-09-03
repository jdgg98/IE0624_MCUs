#include <pic14/pic12f675.h>
#include <math.h> 
#include <stdbool.h>

typedef unsigned int word; 
word __at 0x2007 __CONFIG = (_WDTE_OFF & _WDT_OFF & _MCLRE_OFF);  // WDT y MCLR OFF 

void delay (unsigned int tiempo);
int counter;
int binary0;
int binary1;
int binary2;
int binary3;

void main(){

    ANSEL = 0;
    CMCON = 7;
    TRISIO=0b00001000;      
    GPIO = 0x00;
	counter = 0;
	
	while(1)
	{
		counter = counter + 1;

		if(GP3 == 0){
			if(counter == 0){
				binary0 = 0;
				binary1 = 0;
				binary2 = 0;
				binary3 = 0;
				// delay(50);
				continue;
			}

			if(counter == 1){
				binary0 = 1;
				binary1 = 0;
				binary2 = 0;
				binary3 = 0;
				// delay(50);
				continue;
			}
			if(counter == 2){
				binary0 = 0;
				binary1 = 1;
				binary2 = 0;
				binary3 = 0;
				// delay(50);
				continue;
			}
			if(counter == 3){
				binary0 = 1;
				binary1 = 1;
				binary2 = 0;
				binary3 = 0;
				// delay(50);
				continue;
			}
			if(counter == 4)
			{
				binary0 = 0;
				binary1 = 0;
				binary2 = 1;
				binary3 = 0;
				// delay(50);
				continue;
			}
			if(counter == 5)
			{
				binary0 = 1;
				binary1 = 0;
				binary2 = 1;
				binary3 = 0;
				// delay(50);
				continue;
			}
			if(counter == 6)
			{
				binary0 = 0;
				binary1 = 1;
				binary2 = 1;
				binary3 = 0;
				// delay(50);
				continue;
			}

			if (counter == 7){
				binary0 = 1;
				binary1 = 1;
				binary2 = 1;
				binary3 = 0;
				// delay(50);
				continue;
			}

			if (counter == 8){
				binary0 = 0;
				binary1 = 0;
				binary2 = 0;
				binary3 = 1;
				// delay(50);
				continue;
			}

			if (counter == 9){
				binary0 = 1;
				binary1 = 0;
				binary2 = 0;
				binary3 = 1;
				// delay(50);
				continue;
			}
		}

		if(counter > 9){
			counter = 0;
		}

		GP0 = binary0;
		GP1 = binary1;
		GP2 = binary2;
		GP4 = binary3;
	}
}

void delay(unsigned int tiempo)
{
	unsigned int i;
	unsigned int j;

	for(i=0;i<tiempo;i++)
	  for(j=0;j<1275;j++);
}
