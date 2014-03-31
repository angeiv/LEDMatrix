//gcc x.c -o x -lwiringPi

#include <stdio.h>
#include <wiringPi.h>

#define A 6
#define B 10
#define C 14
#define D 4
#define E 13
#define F 9
#define G 11
#define H 8

#define ms 1000

void initState();//init first statement
void light(int num);//the no.num led will be light

int main()
{
        int times=0;//setup number
        int pin=6;//pin number

        if(wiringPiSetup() == -1)
                return -1;
        pinMode(2 , OUTPUT);//GPIO27,y6
        digitalWrite(2,1);

        initState();//init

        for(;;)
        {
                for(times = 0;;times++)
                {
                        light(times % 8 + 1);
                }
        }
        return 0;
}

void initState()
{
        //pin mode
        pinMode(A , OUTPUT);
        pinMode(B , OUTPUT);
        pinMode(C , OUTPUT);
        pinMode(D , OUTPUT);
        pinMode(E , OUTPUT);
        pinMode(F , OUTPUT);
        pinMode(G , OUTPUT);
        pinMode(H , OUTPUT);

        //digital
        digitalWrite(A,1);
        digitalWrite(B,1);
        digitalWrite(C,1);
        digitalWrite(D,1);
        digitalWrite(E,1);
        digitalWrite(F,1);
        digitalWrite(G,1);
        digitalWrite(H,1);

}

void light(int led)
{
        switch(led)
        {
        case 8:
                digitalWrite(A,0);
                delay(ms);
                digitalWrite(A,1);
                break;
        case 7:
                digitalWrite(B,0);
                delay(ms);
                digitalWrite(B,1);
                break;
        case 6:
                digitalWrite(C,0);
                delay(ms);
                digitalWrite(C,1);
                break;
        case 5:
                digitalWrite(D,0);
                delay(ms);
                digitalWrite(D,1);
                break;
        case 4:
                digitalWrite(E,0);
                delay(ms);
                digitalWrite(E,1);
                break;
        case 3:
                digitalWrite(F,0);
                delay(ms);
                digitalWrite(F,1);
                break;
        case 2:
                digitalWrite(G,0);
                delay(ms);
                digitalWrite(G,1);
                break;
        case 1:
                digitalWrite(H,0);
                delay(ms);
                digitalWrite(H,1);
                break;
        default:
                break;
        }

}

