#include "stm32f10x.h"                  // Device header
#include "OLED.h"
#include "delay.h"
//编码格式：UTF-8

int main(void)
{
	OLED_Init();
	uint8_t i=0;
	
//	//OLED_ShowNum(0,0,3,2,OLED_8X16);      //X,Y,数字,长度,字符大小8*16
//	OLED_ShowChinese(0,40,"小花生大帅比");
//	//OLED_ShowString(0,36,"HELLO WORLD",OLED_8X16);
//	OLED_ShowImage(110,0,12,6,dainchi);
//	OLED_ShowImage(0,0,30,20,yunduo);
	while (1)
	{
		
	OLED_ShowImage(0,0,128,64,ikun1);
	OLED_Update();
	Delay_ms(200);
	OLED_ShowImage(0,0,128,64,ikun2);
	OLED_Update();
	Delay_ms(200);
	OLED_ShowImage(0,0,128,64,ikun3);
	OLED_Update();
	Delay_ms(200);
	OLED_ShowImage(0,0,128,64,ikun4);
	OLED_Update();
	Delay_ms(200);
	OLED_ShowImage(0,0,128,64,ikun5);
	OLED_Update();
	Delay_ms(200);
	OLED_ShowImage(0,0,128,64,ikun6);
	OLED_Update();
	Delay_ms(200);
	OLED_ShowImage(0,0,128,64,ikun7);
	OLED_Update();
	Delay_ms(200);
	OLED_ShowImage(0,0,128,64,ikun8);
	OLED_Update();
	Delay_ms(200);
	OLED_ShowImage(0,0,128,64,ikun9);
	OLED_Update();
	Delay_ms(200);
	OLED_ShowImage(0,0,128,64,ikun10);
	OLED_Update();
	Delay_ms(200);
	OLED_ShowImage(0,0,128,64,ikun11);
	OLED_Update();
	Delay_ms(200);
	OLED_ShowImage(0,0,128,64,ikun12);
	OLED_Update();
	Delay_ms(200);
	OLED_ShowImage(0,0,128,64,ikun13);
	OLED_Update();
	Delay_ms(200);
	OLED_ShowImage(0,0,128,64,ikun14);
	OLED_Update();
	Delay_ms(200);
	OLED_ShowImage(0,0,128,64,ikun15);
	OLED_Update();
	Delay_ms(200);
	OLED_ShowImage(0,0,128,64,ikun16);
	OLED_Update();
	Delay_ms(200);
	OLED_ShowImage(0,0,128,64,ikun17);
	OLED_Update();
	Delay_ms(200);
	OLED_ShowImage(0,0,128,64,ikun18);
	OLED_Update();
	Delay_ms(200);
	OLED_ShowImage(0,0,128,64,ikun19);
	OLED_Update();
	Delay_ms(200);
	OLED_ShowImage(0,0,128,64,ikun20);
	OLED_Update();
	Delay_ms(200);
	OLED_ShowImage(0,0,128,64,ikun21);
	OLED_Update();
	Delay_ms(200);
	OLED_ShowImage(0,0,128,64,ikun22);
	OLED_Update();
	Delay_ms(200);
	OLED_ShowImage(0,0,128,64,ikun21);
	OLED_Update();
	Delay_ms(200);
	OLED_ShowImage(0,0,128,64,ikun24);
	OLED_Update();
	Delay_ms(200);
	OLED_ShowImage(0,0,128,64,ikun25);
	OLED_Update();
	Delay_ms(200);
	OLED_ShowImage(0,0,128,64,ikun26);
	OLED_Update();
	Delay_ms(200);
	OLED_ShowImage(0,0,128,64,ikun27);
	OLED_Update();
	Delay_ms(200);
	OLED_ShowImage(0,0,128,64,ikun28);
	OLED_Update();
	Delay_ms(200);
	OLED_ShowImage(0,0,128,64,ikun29);
	OLED_Update();
	Delay_ms(200);
	OLED_ShowImage(0,0,128,64,ikun30);
	OLED_Update();
	Delay_ms(200);
	OLED_ShowImage(0,0,128,64,ikun31);
	OLED_Update();
	Delay_ms(200);
	
	
	}
}
