#LEDMatrix

Raspberry Pi LED Matrix test with wiringPi in C program language.

#Raspberry Pi

Rev 2.0

#LED Matrix

8X8 LED Matrix

   A B C D E F G H
Y0 O O O O O O O O 
Y1 O O O O O O O O
Y2 O O O O O O O O
Y3 O O O O O O O O
Y4 O O O O O O O O
Y5 O O O O O O O O
Y6 O O O O O O O O
Y7 O O O O O O O O

PIN

	H   G   1   A   3   F   D   0
	灰1 黄  灰2 红  绿  白1 紫1 蓝1
	黑1 黑2 橙  紫  空  蓝2 棕  白
	4   6   B   C   7   E   5   2
	
	//no more pins for 7

#Connect
==========

	|-------------------------------------------------------------------------------------------------------|
	|					 	    GPIO								|
	|-------------------------------------------------------------------------------------------------------|
	| Pin | Color | wiringPi Pin | BCM GPIO | Name ||   Header  || Name | BCM GPIO | wiringPi | Color | Pin |
	|-------------------------------------------------------------------------------------------------------|
	|     |       |              |          | 3.3v ||   1  |  2 ||  5v  |          |          |       |     |
	|-------------------------------------------------------------------------------------------------------|
	|  H  |  灰1  |       8      |     2    | SDA  ||   3  |  4 ||  5v  |          |          |       |     |
	|-------------------------------------------------------------------------------------------------------|
	|  F  |  白1  |       9      |     3    | SLC  ||   5  |  6 ||  GND |          |          |       |     |
	|-------------------------------------------------------------------------------------------------------|
	|  4  |  黑1  |       7      |     4    |   7  ||   7  |  8 ||  TxD |    14    |    15    |       |     |
	|-------------------------------------------------------------------------------------------------------|
	|     |       |              |          | GND  ||   9  | 10 ||  RxD |    15    |    16    |       |     |
	|-------------------------------------------------------------------------------------------------------|
	|  2  |  白2  |      17      |    17    |   0  ||  11  | 12 ||   1  |    18    |     1    |  蓝1  |  0  |
	|-------------------------------------------------------------------------------------------------------|
	|  6  |  黑2  |      27      |    27    |   2  ||  13  | 14 ||  GND |          |          |       |     |
	|-------------------------------------------------------------------------------------------------------|
	|  5  |  棕   |      22      |    22    |   3  ||  15  | 16 ||   4  |    23    |     4    |  紫1  |  D  |
	|-------------------------------------------------------------------------------------------------------|
	|     |       |              |          | 3.3V ||  17  | 18 ||   5  |    24    |     5    |  灰2  |  1  |
	|-------------------------------------------------------------------------------------------------------|
	|  3  |  绿   |      10      |    10    | MOSI ||  19  | 20 ||  GND |          |          |       |     |
	|-------------------------------------------------------------------------------------------------------|
	|  E  |  蓝2  |      9       |     9    | MISO ||  21  | 22 ||   6  |    25    |     6    |  红   |  A  |
	|-------------------------------------------------------------------------------------------------------|
	|  C  |  紫2  |      11      |    11    | SCLK ||  23  | 24 ||  CE0 |     8    |    10    |  橙   |  B  |
	---------------------------------------------------------------------------------------------------------
	|     |       |              |          |  GND ||  25  | 26 ||  CE1 |     7    |    11    |  黄   |  G  |
	--------------------------------------------------------------------------------------------------------|
