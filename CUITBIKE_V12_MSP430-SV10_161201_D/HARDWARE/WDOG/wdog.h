/*******************************************************************************
** 版权:     	xxxlzjxxx CO.,LTD
** 文件名:   	wdog.h
** 工作环境: 	IAR 6.10
** 工程大小:	
** 作者:     	xxxlzjxxx
** 生成日期:	2015年12月9日 
** 功能:       外部看门狗程序
** 相关器件:
            TPS3823
** 修改日志：
			
*******************************************************************************/
//******************************************************************************
#ifndef __WDOG_H
#define __WDOG_H

//*****************************************************************************
//** IO定义
//*****************************************************************************
#define   WDI_SEL_GPIO                       (P1SEL &=~BIT0)   //设置为GPIO
#define   WDI_DIR_OUTPUT                     (P1DIR |=BIT0)    //输出端口
#define   WDI_OUT_HIGH                       (P1OUT |=BIT0)    //输出高
#define   WDI_OUT_LOW                        (P1OUT &=~BIT0)   //输出低
#define   WDI_OUT_OVERTURN                   (P1OUT ^=BIT0)    //输出翻转
//*******************************************************************************
//** 函数声明
//*******************************************************************************
void WDOG_Init(uint watchdog_state);
//void WDOG_GPIO_Init(void); 
//*******************************************************************************

#endif
