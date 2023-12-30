#ifndef __OLED_DATA_H
#define __OLED_DATA_H

#include <stdint.h>

/*中文字符字节宽度*/
#define OLED_CHN_CHAR_WIDTH			3		//UTF-8编码格式给3，GB2312编码格式给2

/*字模基本单元*/
typedef struct 
{
	char Index[OLED_CHN_CHAR_WIDTH + 1];	//汉字索引
	uint8_t Data[32];						//字模数据
} ChineseCell_t;

/*ASCII字模数据声明*/
extern const uint8_t OLED_F8x16[][16];
extern const uint8_t OLED_F6x8[][6];

/*汉字字模数据声明*/
extern const ChineseCell_t OLED_CF16x16[];

/*图像数据声明*/
extern const uint8_t Diode[];
extern const uint8_t dainchi[];
extern const uint8_t ikun1[];
extern const uint8_t ikun2[];
extern const uint8_t ikun3[];
extern const uint8_t ikun4[];
extern const uint8_t ikun5[];
extern const uint8_t ikun6[];
extern const uint8_t ikun7[];
extern const uint8_t ikun8[];
extern const uint8_t ikun9[];
extern const uint8_t ikun10[];
extern const uint8_t ikun11[];
extern const uint8_t ikun12[];
extern const uint8_t ikun13[];
extern const uint8_t ikun14[];
extern const uint8_t ikun15[];
extern const uint8_t ikun16[];
extern const uint8_t ikun17[];
extern const uint8_t ikun18[];
extern const uint8_t ikun19[];
extern const uint8_t ikun20[];
extern const uint8_t ikun21[];
extern const uint8_t ikun22[];
extern const uint8_t ikun23[];
extern const uint8_t ikun24[];
extern const uint8_t ikun25[];
extern const uint8_t ikun26[];
extern const uint8_t ikun27[];
extern const uint8_t ikun28[];
extern const uint8_t ikun29[];
extern const uint8_t ikun30[];
extern const uint8_t ikun31[];
/*按照上面的格式，在这个位置加入新的图像数据声明*/
//...

#endif


/*****************江协科技|版权所有****************/
/*****************jiangxiekeji.com*****************/
