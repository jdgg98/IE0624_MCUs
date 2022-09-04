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
int binary4;
int binary5;
int binary6;
int binary7;
int tens;
int units;
 
void main(){

    ANSEL = 0;
    CMCON = 7;
    TRISIO=0b00001000;      
    GPIO = 0x00;
	counter = 0;
	tens = 0;
	units = 0;
	
	while(1)
	{

		if(units == 9){
			tens = tens + 1;
		}

		if (tens > 9){
			tens = 0;
		}

		else if(GP3 == 0){
			if(units == 0){
				binary0 = 0;
				binary1 = 0;
				binary2 = 0;
				binary3 = 0;
				// delay(50);
				continue;
			}

			if(units == 1){
				binary0 = 1;
				binary1 = 0;
				binary2 = 0;
				binary3 = 0;
				// delay(50);
				continue;
			}
			if(units == 2){
				binary0 = 0;
				binary1 = 1;
				binary2 = 0;
				binary3 = 0;
				// delay(50);
				continue;
			}
			if(units == 3){
				binary0 = 1;
				binary1 = 1;
				binary2 = 0;
				binary3 = 0;
				// delay(50);
				continue;
			}
			if(units == 4)
			{
				binary0 = 0;
				binary1 = 0;
				binary2 = 1;
				binary3 = 0;
				// delay(50);
				continue;
			}
			if(units == 5)
			{
				binary0 = 1;
				binary1 = 0;
				binary2 = 1;
				binary3 = 0;
				// delay(50);
				continue;
			}
			if(units == 6)
			{
				binary0 = 0;
				binary1 = 1;
				binary2 = 1;
				binary3 = 0;
				// delay(50);
				continue;
			}

			if (units == 7){
				binary0 = 1;
				binary1 = 1;
				binary2 = 1;
				binary3 = 0;
				// delay(50);
				continue;
			}

			if (units == 8){
				binary0 = 0;
				binary1 = 0;
				binary2 = 0;
				binary3 = 1;
				// delay(50);
				continue;
			}

			if (units == 9){
				binary0 = 1;
				binary1 = 0;
				binary2 = 0;
				binary3 = 1;
				// delay(50);
				continue;
			}
			if(tens == 0){
				binary4 = 0;
				binary5 = 0;
				binary6 = 0;
				binary7 = 0;
				// delay(50);
				continue;
			}

			if(tens == 1){
				binary4 = 1;
				binary5 = 0;
				binary6 = 0;
				binary7 = 0;
				// delay(50);
				continue;
			}
			if(tens == 2){
				binary4 = 0;
				binary5 = 1;
				binary6 = 0;
				binary7 = 0;
				// delay(50);
				continue;
			}
			if(tens == 3){
				binary4 = 1;
				binary5 = 1;
				binary6 = 0;
				binary7 = 0;
				// delay(50);
				continue;
			}
			if(tens == 4)
			{
				binary4 = 0;
				binary5 = 0;
				binary6 = 1;
				binary7 = 0;
				// delay(50);
				continue;
			}
			if(tens == 5)
			{
				binary4 = 1;
				binary5 = 0;
				binary6 = 1;
				binary7 = 0;
				// delay(50);
				continue;
			}
			if(tens == 6)
			{
				binary4 = 0;
				binary5 = 1;
				binary6 = 1;
				binary7 = 0;
				// delay(50);
				continue;
			}

			if (tens == 7){
				binary4 = 1;
				binary5 = 1;
				binary6 = 1;
				binary7 = 0;
				// delay(50);
				continue;
			}

			if (tens == 8){
				binary4 = 0;
				binary5 = 0;
				binary6 = 0;
				binary7 = 1;
				// delay(50);
				continue;
			}

			if (tens == 9){
				binary4 = 1;
				binary5 = 0;
				binary6 = 0;
				binary7 = 1;
				// delay(50);
				continue;
			}
		}

		delay(10);
		GP5 = ~GP5;

		GP0 = binary0;
		GP1 = binary1;
		GP2 = binary2;
		GP4 = binary3;

		delay(10);
		GP5 = ~GP5;

		GP0 = binary4;
		GP1 = binary5;
		GP2 = binary6;
		GP4 = binary7;

		if (units > 9){
			units = 0;
		}

		units = units + 1;
	}
}

void delay(unsigned int tiempo)
{
	unsigned int i;
	unsigned int j;

	for(i=0;i<tiempo;i++)
	  for(j=0;j<1275;j++);
}
