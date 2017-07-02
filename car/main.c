//
//  main.c
//  car
//
//  Created by 20161104568 on 17/6/22.
//  Copyright © 2017年 20161104568. All rights reserved.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    FILE *fr;
    FILE *fw;
    char str1[70],str2[70];
    char time[7],lat[11],longitute[13],date[7],high[5],rate[7],course[7];
    int i;
    fr=fopen("//Users//a20161104568//Desktop//car//GPS170510.log","r+");
    fw=fopen("//Users//a20161104568//Desktop//car//output.csv","w+");
    if(fr == NULL)
    {
        printf("要打开的文件不存在");
        return 0;
    }
   
    else
    {
        printf("时间,纬度,经度,日期,海拔,地面速率,地面航向\n");
        fprintf(fw,"时间,纬度,经度,日期,海拔,地面速率,地面航向\n");
        while(fscanf(fr,"%s%s",str1,str2)!=EOF)
        {
            for(i=0;i<6;i++)
            {
                time[i]=str1[i+7];
            }
            time[6]='\0';

            for(i=0;i<8;i++)
            {
                lat[i]=str1[i+16];
            }
            lat[8]='\0';

            for(i=0;i<9;i++)
            {
                longitute[i]=str1[i+27];
            }
            longitute[9]='\0';
    
            for(i=0;i<6;i++)
            {
                date[i]=str1[i+51];
            }
            date[6]='\0';
    
            for(i=0;i<4;i++)
            {
                high[i]=str2[i+43];
            }
            high[4]='\0';
    
            for(i=0;i<5;i++)
            {
                rate[i]=str1[i+39];
            }
            rate[5]='\0';
    
            for(i=0;i<5;i++)
            {
                course[i]=str1[i+45];
            }
            course[5]='\0';
            
            printf("'%s,%s,%s,%s,%s,%s,%s\n",time,lat,longitute,date,high,rate,course);
            fprintf(fw,"'%s,%s,%s,%s,%s,%s,%s\n",time,lat,longitute,date,high,rate,course);
        }
        fclose(fr);
    }
    return 0;
}
