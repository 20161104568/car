//
//  main.c
//  car
//
//  Created by 20161104568 on 17/6/22.
//  Copyright © 2017年 20161104568. All rights reserved.
//

#include <stdio.h>
int main(int argc, const char * argv[]) {

    FILE *fr;
    FILE *fw;
    char str1[70],str2[70];
    char time[7],lat[15],longitute[15],date[7],high[5],rate[7],course[7];
    int i;
    fr=fopen("//Users//a20161104568//Desktop//car//GPS170510.log","r+");
    fw=fopen("//Users//a20161104568//Desktop//car//output.txt","w+");
    fscanf(fr,"%s%s",str1,str2);
    printf("结果: %s\n%s\n",str1,str2);
    fprintf(fw,"结果: %s\n%s\n",str1,str2);

    for(i=0;i<6;i++)
        time[i]=str1[i+7];
    time[6]='\0';
    printf("时间: %s\n",time);
    fprintf(fw,"时间: %s\n",time);

    for(i=0;i<10;i++)
        lat[i]=str1[i+16];
    lat[10]='\0';
    printf("纬度: %s\n",lat);
    fprintf(fw,"纬度: %s\n",lat);

    for(i=0;i<11;i++)
        longitute[i]=str1[i+27];
    longitute[11]='\0';
    printf("经度: %s\n",longitute);
    fprintf(fw,"经度: %s\n",longitute);
    
    for(i=0;i<6;i++)
        date[i]=str1[i+51];
    date[6]='\0';
    printf("日期: %s\n",date);
    fprintf(fw,"日期: %s\n",date);
    
    for(i=0;i<4;i++)
        high[i]=str2[i+43];
     high[4]='\0';
    printf("海拔: %sm\n",high);
    fprintf(fw,"海拔: %sm\n",high);
    
    for(i=0;i<5;i++)
        rate[i]=str1[i+39];
    rate[5]='\0';
    printf("地面速率: %s\n",rate);
    fprintf(fw,"地面速率: %s\n",rate);
    
    for(i=0;i<5;i++)
        course[i]=str1[i+45];
    course[5]='\0';
    printf("地面航向: %s\n",course);
    fprintf(fw,"地面航向: %s\n",course);
    fclose(fr);
    return 0;
    
}
