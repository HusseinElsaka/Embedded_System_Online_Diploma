
#include "Platform_Types.h"

#define SET_BIT(reg,position) (reg |= (1 << position))
#define CLR_BIT(reg,position) (reg &= ~(1 << position))
#define TGL_BIT(reg,position) (reg ^= (1 << position))

/*
 * RCC (reset and clock control)
 * GPIOx (general purpose input/output).
 *  */
#define RCC_BASE 			0x40021000
#define GPIO_PORTA_BASE 	0x40010800

#define RCC_APB2ENR 		*((vuint32_t*)(RCC_BASE + 0x18 ))
#define GPIO_PORTA_CRH 		*((vuint32_t*)(GPIO_PORTA_BASE + 0x04))
#define GPIO_PORTA_ODR 		*((vuint32_t*)(GPIO_PORTA_BASE + 0x0C))

#define RCC_APB2ENR_IOPAEN 	2

typedef union
{
	vuint32_t allfields;
	struct
	{
		vuint32_t reserved :13;
		vuint32_t B_13 :1;
		vuint32_t reserved2 :5;
		vuint32_t B_20_24 :5;
	} PIN;
} GPIO_PA_t;

volatile int sss [20];
volatile int const zz[2];
volatile int var[] = {1,2,3}; 
static int a;
int main(void)
{
	volatile GPIO_PA_t *p_CRH_PortA = (volatile GPIO_PA_t*) (GPIO_PORTA_BASE + 0x04);
	volatile GPIO_PA_t *p_ODR_PortA = (volatile GPIO_PA_t*) (GPIO_PORTA_BASE + 0x0C);
	SET_BIT(RCC_APB2ENR, RCC_APB2ENR_IOPAEN);
	p_CRH_PortA->PIN.B_20_24 = 0;
	p_CRH_PortA->PIN.B_20_24 = 2;
	while (1)
	{
		p_ODR_PortA->PIN.B_13 = 1;
		for (int i = 0; i < 5000; i++);
		p_ODR_PortA->PIN.B_13 = 0;
		for (int i = 0; i < 5000; i++);
	}
}

