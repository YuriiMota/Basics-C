#include<stdio.h>

struct time
{
    int hour;
    int minute;
    int second;
};
 struct time addminutes(struct time, int);
 
int main(void)
{
	struct time current_time = {17, 38, 10};
    int minutes = 21;
     
    struct time result_time = addminutes(current_time, minutes);
    printf("%d:%d:%d \n", result_time.hour, result_time.minute, result_time.second);
     
    result_time = addminutes(current_time, 23);
    printf("%d:%d:%d \n", result_time.hour, result_time.minute, result_time.second);
     
    result_time = addminutes(current_time, 382);
    printf("%d:%d:%d \n", result_time.hour, result_time.minute, result_time.second);
    return 0;	
}
struct time addminutes(struct time t, int minutes)
{
	struct time result ={t.hour, t.minute, t.second};
    int h, d;
    // прибавляем минуты
    result.minute += minutes;
    // если минут больше 59, делим на 60
    if(result.minute >=60)
    {
        h = result.minute / 60;
        // от минут вычитаем 60 * h
        result.minute -= 60 * h;
        // к часам прибавляем h
        result.hour +=h;
    }
    // если часов больше 23, делим на 24
    if(result.hour >=24)
    {
        d = result.hour / 24;
        // от часов вычитаем d * 24
        result.hour -= 24 * d;
    }
    return result;
}