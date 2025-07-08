#include<stdio.h>
#include<conio.h>
int main(){
    int sec=0,min=0,hour=0,minisec=0;
     goto(10,15);
     printf("Stop\n");
      while(!kbhit()){
          gotoxy(10, 7);
         printf("Stopwatch: %02d:%02d:%02d:%02d", hour, min, sec, minisec);
         minisec+=1;
         if(minisec==100){
                minisec=0;
                sec+=1;
         }
         if(sec==60){
                sec=0;      
                min+=1;
            }
            if(min==60){
                min=0;
                hour+=1;
            }
            delay(10); // Assuming a delay function is available    
            if(hour==24){
                hour=0;
                hour++;

            }
            delay(10);

      }
       gotoxy(10, 9);
    printf("Stopwatch Stopped at: %02d:%02d:%02d:%02d\n", hour, min, sec, minisec);
return 0;

}