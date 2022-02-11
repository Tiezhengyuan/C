#include <stdio.h>

int main()
{   
    int day,month, year, total;
    scanf("%d", &day);
    scanf("%d", &month);
    scanf("%d", &year);
    
    //
    int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if (year % 400 == 0){
        puts("Leap\n");
        days[1]=29;
    }else if (year % 100 == 0){
        puts("Not leap");
    }else if (year % 4 == 0){
        puts("Leap");
        days[1]=29;
    }

    int acc_days[12];
    int i,b;
    for(i=0;i<12;i++){
        int acc=0;
        for(b=0;b<=i;b++){
            acc+=days[b];
        }
        acc_days[i]=acc;
        //printf("%d: %d,", i, acc);
    }
    if(month==1){
        total = day;
    }else if (month<=12){
        total = day + acc_days[(month-2)];    
    }else{
        total = acc_days[11];
    }
    
    printf("The day of the year: %d", total);
	return 0;
}