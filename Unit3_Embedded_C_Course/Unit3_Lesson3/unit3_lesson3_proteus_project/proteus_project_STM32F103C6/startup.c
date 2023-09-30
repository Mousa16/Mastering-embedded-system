// startup.c
// Eng. Mamoud Mousa

#include <stdint.h>
extern int main(void);

void Reset_Handler(void);
void Default_Handler(void)
{
	Reset_Handler();
}

void NMI_Handler(void)			__attribute__((weak,alias ("Default_Handler")))	;;
void H_Fault_Handler(void)		__attribute__((weak,alias ("Default_Handler")))	;;
void MM_Fault_Handler(void)		__attribute__((weak,alias ("Default_Handler")))	;;
void Bus_Fault(void)			__attribute__((weak,alias ("Default_Handler")))	;;
void Usage_Fault_Handler(void)	__attribute__((weak,alias ("Default_Handler")))	;;

extern unsigned int _stack_top;

uint32_t vectors[] __attribute__((section(".vectors"))) = {

(uint32_t) &_stack_top			,
(uint32_t) &Reset_Handler		,
(uint32_t) &NMI_Handler			,
(uint32_t) &H_Fault_Handler		,
(uint32_t) &MM_Fault_Handler	,
(uint32_t) &Bus_Fault			,
(uint32_t) &Usage_Fault_Handler	,

};

extern unsigned int _E_text;
extern unsigned int _S_Data;
extern unsigned int _E_Data;
extern unsigned int _S_Bss ;
extern unsigned int _E_Bss ;



void Reset_Handler(void)
{
	// copy data section from flash to sram
	unsigned int Data_Size = (unsigned char*)&_E_Data - (unsigned char*)&_S_Data ;
	unsigned char* P_src=(unsigned char*)&_E_text ;
	unsigned char* P_dst=(unsigned char*)&_S_Data ;
	for (int i = 0 ; i < Data_Size ; i++)
	{
		*((unsigned char*)P_dst++) = *((unsigned char*)P_src++) ;
	}
	// init bss section in sram
	unsigned int Bss_Size = (unsigned char*)&_E_Bss - (unsigned char*)&_S_Bss ;
	P_dst = (unsigned char*)&_S_Bss ;
	for (int i = 0 ; i < Bss_Size ; i++)
	{
		*((unsigned char*)P_dst++) = (unsigned char)0 ;
	}
	// jump main
	main();
}









