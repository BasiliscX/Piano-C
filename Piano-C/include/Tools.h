#ifndef TOOLS_H_INCLUDED
#define TOOLS_H_INCLUDED

#include<iostream>

int ReturnKey(int key){

switch(key){
case 97 :return 0;break;//DO
case 119:return 1;break;//DO#
case 115:return 2;break;//RE
case 101:return 3;break;//RE#
case 100:return 4;break;//MI
case 102:return 5;break;//FA
case 116:return 6;break;//FA#
case 103:return 7;break;//SOL
case 121:return 8;break;//SOL#
case 104:return 9;break;//LA
case 117:return 10;break;//LA#
case 106:return 11;break;//SI
case 32 :return 12;break;//space -Increment duration.
case 110:return 13;break;//'N'    -Default duration.
case 108:return 14;break;//'L'   -Low duration.
case 0  :return 15;break;//End program.
default :return 16;break;
}
}

#endif // TOOLS_H_INCLUDED
