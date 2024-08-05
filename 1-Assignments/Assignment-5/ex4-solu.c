#include <stdio.h>

typedef struct
{
	int hour;
	int minutes;
	int seconds;
}time;

void difference_between_two_time_periods (time t1,time t2,time *t3);

int main(void)
{
	time start,end,diff;
	printf("Enter start time hours,minutes,seconds\n");
	fflush(stdout);
	scanf("%d %d %d",&start.hour,&start.minutes,&start.seconds);
	printf("Enter end time hours,minutes,seconds\n");
	fflush(stdout);
	scanf("%d %d %d",&end.hour,&end.minutes,&end.seconds);
	difference_between_two_time_periods(start,end,&diff);
	printf("difference between two time periods equal %d hours %d minutes %d seconds",diff.hour,diff.minutes,diff.seconds);
	fflush(stdout);
}

void difference_between_two_time_periods (time t1,time t2,time *t3)
{
	t3->hour=t2.hour-t1.hour;
	t3->minutes=t2.minutes-t1.minutes;
	if(t3->minutes<0)
	{
		t3->minutes+=60;
		t3->hour--;
	}
	t3->seconds=t2.seconds-t1.seconds;
	if(t3->seconds<0)
	{
		t3->seconds+=60;
		t3->minutes--;
	}
}

