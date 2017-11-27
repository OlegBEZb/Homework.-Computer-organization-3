#include <stdint.h>
#include <stdbool.h> 
#include <math.h>
#include <string.h>

char google[]="0123456789-";
volatile int lengoogle_crutch;
volatile int lenstr_crutch;

int32_t strToInt( const char * str );
 
int main(void)
{
	char str[]="-1<0k0k02";//enter some stroke
	lenstr_crutch=strlen(str);
	lengoogle_crutch=strlen(google);
	volatile int32_t answer=strToInt(str);
	
	while(1);
 
	return 0;
}
//[-99 999 999;999 999 999]
int32_t strToInt( const char * str)
{
	int64_t number=0;
	int64_t power=0;
	for(int64_t i=lenstr_crutch-1;i>=0;i--)//reading the number backwards
	{
		for(int64_t j=0;j<lengoogle_crutch;j++)
		{
			if(str[i]==google[j])
			{
				if(j==10)
				{
					return number*(-1);//expects that the number is placed after the last sign.
				}
				else
				{
					number+=j*pow(10,power);//representing number as the summ of orders of 10 with coefficients
					power++;
					if(power==9) return number;//cuts leftover digits and signs)))
				}
			}
		}
	}
	return number;
}
