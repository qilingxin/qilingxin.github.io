#include "LPC11xx.h"                    // Device header

int main(void){
	LPC_GPIO2->DIR =0xff;   //将GPIO2低八位引脚设置成输出
	LPC_GPIO2->DATA =0x55; //01010101  
	
}

