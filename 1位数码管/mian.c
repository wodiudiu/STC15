
/*------------------------------------------------------------------*/
/* --- STC MCU International Limited -------------------------------*/
/* --- STC 1T Series MCU RC Demo -----------------------------------*/
/* --- Mobile: (86)13922805190 -------------------------------------*/
/* --- Fax: 86-0513-55012956,55012947,55012969 ---------------------*/
/* --- Tel: 86-0513-55012928,55012929,55012966 ---------------------*/
/* --- Web: www.GXWMCU.com -----------------------------------------*/
/* --- QQ:  800003751 ----------------------------------------------*/
/* If you want to use the program or the program referenced in the  */
/* article, please specify in which data and procedures from STC    */
/*------------------------------------------------------------------*/


#include	"config.h"
#include	"GPIO.h"
#include	"delay.h"
#include	"Nixietube.h"

/*************	功能说明	**************

	本程序演示单个数码管的静态显示

******************************************/

/*************	本地常量声明	**************/


/*************	本地变量声明	**************/


/*************	本地函数声明	**************/



/*************  外部函数和变量声明 *****************/

#define	Smg_A		10	//数码管显示 A
#define	Smg_B		11	//数码管显示 B
#define	Smg_C		12	//数码管显示 C
#define	Smg_D		13	//数码管显示 D
#define	Smg_E		14	//数码管显示 E
#define	Smg_F		15	//数码管显示 F
#define	Smg_empty		17	//数码管不显示


/******************** IO配置函数 **************************/
void	GPIO_config(void)
{
	GPIO_InitTypeDef	GPIO_InitStructure;		//结构定义
	GPIO_InitStructure.Pin  = GPIO_Pin_All;		//指定要初始化的IO, GPIO_Pin_0 ~ GPIO_Pin_7, 或操作
	GPIO_InitStructure.Mode = GPIO_OUT_PP;		//指定IO的输入输出方式,GPIO_PullUp,GPIO_HighZ,GPIO_OUT_OD,GPIO_OUT_PP
	GPIO_Inilize(GPIO_P0,&GPIO_InitStructure);	//初始化
}



/******************** 主函数 **************************/
void main(void)
{
	//u8	i,tmp;
	
	GPIO_config();
	

	while(1)
	{
		/**********逐个点亮数码管字段************/
//		P0 = 0x01;
//		delay_ms(1000);
//		delay_ms(1000);
//		P0 = 0x02;
//		delay_ms(1000);
//		delay_ms(1000);
//		P0 = 0x04;
//		delay_ms(1000);
//		delay_ms(1000);
//		P0 = 0x08;
//		delay_ms(1000);
//		delay_ms(1000);
//		P0 = 0x10;
//		delay_ms(1000);
//		delay_ms(1000);
//		P0 = 0x20;
//		delay_ms(1000);
//		delay_ms(1000);
//		P0 = 0x40;
//		delay_ms(1000);
//		delay_ms(1000);
//		P0 = 0x80;
//		delay_ms(1000);
//		delay_ms(1000);
/**************1~9顺序显示**************/
		Smg_display(1);
		delay_ms(2000);
		Smg_display(2);
		delay_ms(2000);
		Smg_display(Smg_A);
		delay_ms(4000);
		Smg_display(Smg_B);
		delay_ms(4000);
		Smg_display(Smg_C);
		delay_ms(4000);
		Smg_display(Smg_D);
		delay_ms(4000);
		Smg_display(Smg_E);
		delay_ms(4000);
		Smg_display(Smg_F);
		delay_ms(4000);
		Smg_display(Smg_empty);
		delay_ms(4000);
		
	}
	
}




