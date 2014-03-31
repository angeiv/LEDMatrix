#include<stdio.h>
#include<stdlib.h>
int Leap(int year)//判断是否闰年，是返回1，不是返回0;
{
    if((year%100!=0)&&(year%4==0)||(year%400==0))
    {
        return(1);
    }
    else
    {
        return(0);
    }
}
int DateOfYear(int year,int month,int day)//输入年月日，计算该日是该年的第几天;
{
    int EveryYear[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int sum=0,i;
    if(Leap(year))
    {
        EveryYear[1]++;
    }
    for(i=1;i<month;i++)
    {
        sum=sum+EveryYear[i-1];
    }
    sum=sum+day;
    return(sum);
}
int CountYear(long date)//从输入格式中得出年的数值;
{
    int n=0;
    date=(date-date%10000)/10000;
    n=(int)date;
    return(n);
}
int CountMonth(long date)//从输入格式中得出月的数值;
{
    int m=0;
    date=date%10000;
    date=(date-date%100)/100;
    m=(int)date;
    return(m);
}
int CountDay(long date)//从输入格式中得出日的数值;
{
    int d=0;
    date=date%100;
    d=(int)date;
    return(d);
}
int main()
{
    long date1=0,date2=0,t=0;
    int year1=0,year2=0,month1=0,month2=0,day1=0,day2=0,lastnum=0;
    int i;
    printf("请输入第一个年月日，按照20120424的格式\n");//按此格式输入，可以省去分别比较年、月、日的开销;
    scanf("%ld",&date1);
    printf("请输入第二个年月日，按照20120424的格式\n");
    scanf("%ld",&date2);
    if(date1>date2)//为计算方便，始终将大数放在date2中;
    {
        t=date1;
        date1=date2;
        date2=t;
    }
    year1=CountYear(date1);
    month1=CountMonth(date1);
    day1=CountDay(date1);
    year2=CountYear(date2);
    month2=CountMonth(date2);
    day2=CountDay(date2);
    for(i=year1;i<year2;i++)
    {
        if(Leap(i))
        {
            lastnum++;
        }
    }
    lastnum=lastnum+365*(year2-year1)-DateOfYear(year1,month1,day1)+DateOfYear(year2,month2,day2);
    printf("两个日期之间相隔%d天\n",lastnum);
    return(0);
}
