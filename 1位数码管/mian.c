
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

/*************	����˵��	**************

	��������ʾ��������ܵľ�̬��ʾ

******************************************/

/*************	���س�������	**************/


/*************	���ر�������	**************/


/*************	���غ�������	**************/



/*************  �ⲿ�����ͱ������� *****************/

#define	Smg_A		10	//�������ʾ A
#define	Smg_B		11	//�������ʾ B
#define	Smg_C		12	//�������ʾ C
#define	Smg_D		13	//�������ʾ D
#define	Smg_E		14	//�������ʾ E
#define	Smg_F		15	//�������ʾ F
#define	Smg_empty		17	//����ܲ���ʾ


/******************** IO���ú��� **************************/
void	GPIO_config(void)
{
	GPIO_InitTypeDef	GPIO_InitStructure;		//�ṹ����
	GPIO_InitStructure.Pin  = GPIO_Pin_All;		//ָ��Ҫ��ʼ����IO, GPIO_Pin_0 ~ GPIO_Pin_7, �����
	GPIO_InitStructure.Mode = GPIO_OUT_PP;		//ָ��IO�����������ʽ,GPIO_PullUp,GPIO_HighZ,GPIO_OUT_OD,GPIO_OUT_PP
	GPIO_Inilize(GPIO_P0,&GPIO_InitStructure);	//��ʼ��
}



/******************** ������ **************************/
void main(void)
{
	//u8	i,tmp;
	
	GPIO_config();
	

	while(1)
	{
		/**********�������������ֶ�************/
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
/**************1~9˳����ʾ**************/
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




