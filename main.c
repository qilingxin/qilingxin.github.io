#include "LPC11xx.h"                    // Device header

int main(void){
	LPC_GPIO2->DIR =0xff;   //��GPIO2�Ͱ�λ�������ó����
	LPC_GPIO2->DATA =0x55; //01010101  
	
}

