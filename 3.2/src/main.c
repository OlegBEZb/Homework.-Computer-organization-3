#include <stdint.h>
#include <stdbool.h> 
#include <math.h>
#include <string.h>

	uint8_t countSetBits(uint32_t n);
 
int main(void)
{
	volatile uint32_t example=0xffff1fff;
	volatile uint8_t answer=countSetBits(example);
	
	while(1);
	return 0;
}

	uint8_t countSetBits(uint32_t n)
{
	return ((n&1)==1)+((n&2)==2)+((n&4)==4)+((n&8)==8)+((n&16)==16)+((n&32)==32)+
	((n&1<<6)==(1<<6))+((n&1<<7)==(1<<7))+((n&1<<8)==(1<<8))+((n&1<<9)==(1<<9))+
	((n&1<<10)==(1<<10))+((n&1<<11)==(1<<11))+((n&1<<12)==(1<<12))+
	((n&1<<13)==(1<<13))+((n&1<<14)==(1<<14))+((n&1<<15)==(1<<15))+
	((n&1<<16)==(1<<16))+((n&1<<17)==(1<<17))+((n&1<<18)==(1<<18))+
	((n&1<<19)==(1<<19))+((n&1<<20)==(1<<20))+((n&1<<21)==(1<<21))+
	((n&1<<22)==(1<<22))+((n&1<<23)==(1<<23))+((n&1<<24)==(1<<24))+
	((n&1<<25)==(1<<25))+((n&1<<26)==(1<<26))+((n&1<<27)==(1<<27))+
	((n&1<<28)==(1<<28))+((n&1<<29)==(1<<29))+((n&1<<30)==(1<<30))+
	((n&1u<<31)==(1u<<31));
}
