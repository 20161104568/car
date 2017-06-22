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
    char str1[70];
    char str2[70];
    char time[7];
    char lat[9];
    char longitute[10];
    int i;
    fr=fopen("//Users//a20161104568//Desktop//car//GPS170510.log","r+");
    fscanf(fr,"%s%s",str1,str2);
    printf("结果: %s\n%s\n",str1,str2);
    for(i=0;i<6;i++)
        time[i]=str1[i+7];
    time[7]='\0';
    printf("时间: %s\n",time);
    for(i=0;i<8;i++)
        lat[i]=str1[i+16];
    lat[8]='\0';
    printf("纬度: %s\n",lat);
    for(i=0;i<10;i++)
        longitute[i]=str1[i+27];
    longitute[10]='\0';
    printf("经度: %s\n",longitute);
    fclose(fr);
    return 0;
    
}
