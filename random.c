//gcc x.c -o x -lwiringPi

//Warning ! This will use all part of this matrix !

#include <stdio.h>
#include <wiringPi.h>
#include <stdlib.h>
#include <time.h>

#define random(x) (rand()%x)//random with seed

#define A 6
#define B 10
#define C 14
#define D 4
#define E 13
#define F 9
#define G 11
#define H 8

#define AA 1
#define BB 5
#define CC 0
#define DD 12
#define EE 7
#define FF 3
#define GG 2
#define HH 15//no more pin for last line

#define ms 1000

void initXState();//init first statement
void initYState();//init y line statement
void lightx(int num);//the no.num led will be light
void lighty(int num);//the y line

int main()
{
        int times=0;//setup number

        if(wiringPiSetup() == -1)
                return -1;

        initXState();//init
        initYState();

        srand((int)time(0));//time seed

        for(;;)
        {
                for(times = 0;;times++)
                {
                        lighty(random(8) + 1);
                }
        }
        return 0;
}

void initXState()
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

void initYState()
{
        //pin mode
        pinMode(AA , OUTPUT);
        pinMode(BB , OUTPUT);
        pinMode(CC , OUTPUT);
        pinMode(DD , OUTPUT);
        pinMode(EE , OUTPUT);
        pinMode(FF , OUTPUT);
        pinMode(GG , OUTPUT);
//        pinMode(HH , OUTPUT);

        //digital
        digitalWrite(AA,1);
        digitalWrite(BB,1);
        digitalWrite(CC,1);
        digitalWrite(DD,1);
        digitalWrite(EE,1);
        digitalWrite(FF,1);
        digitalWrite(GG,1);
//        digitalWrite(HH,1);

}

void lightx(int led)
{
        switch(9-led)
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

void lighty(int led)
{
        srand((int)time(0));
        switch(9-led)
        {
        case 8:
                digitalWrite(AA,1);
                lightx(random(8) + 1);
                digitalWrite(AA,0);
                break;
        case 7:
                digitalWrite(BB,1);
                lightx(random(8) + 1);
                digitalWrite(BB,0);
                break;
        case 6:
                digitalWrite(CC,1);
                lightx(random(8) + 1);
                digitalWrite(CC,0);
                break;
        case 5:
                digitalWrite(DD,1);
                lightx(random(8) + 1);
                digitalWrite(DD,0);
                break;
        case 4:
                digitalWrite(EE,1);
                lightx(random(8) + 1);
                digitalWrite(EE,0);
                break;
        case 3:
                digitalWrite(FF,1);
                lightx(random(8) + 1);
                digitalWrite(FF,0);
                break;
        case 2:
                digitalWrite(GG,1);
                lightx(random(8) + 1);
                digitalWrite(GG,0);
                break;
        case 1:
              //  digitalWrite(HH,0);
              //  delay(ms);
              //  digitalWrite(HH,1);
                break;
        default:
                break;
        }

}
