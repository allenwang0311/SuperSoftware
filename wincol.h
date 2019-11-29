#ifndef WINCOL_H_
#define WINCOL_H_ 
#include<windows.h>
#include<iostream>
#include<assert.h>
class Color{
    public:
        WORD VALUE;
        Color(const WORD&num=0){*this=num;}
        Color(const Color&_COLOR){this->VALUE=_COLOR.VALUE;}
        Color&operator=(WORD num){
            assert(num>=0&&num<=255);
            VALUE=num;
            return*this;
        }
        Color&operator=(Color _COLOR){
            assert(_COLOR.VALUE>=0&&_COLOR.VALUE<=255);
            VALUE=_COLOR.VALUE;
            return*this;
        }
        Color operator|(const Color&_COLOR)const{
            Color tmp;
            tmp.VALUE=VALUE|_COLOR.VALUE;
            return tmp;
        }
        Color operator+(const Color&_COLOR)const{
            Color tmp;
            tmp.VALUE=VALUE|_COLOR.VALUE;
            return tmp;
        }
        Color operator*(const Color&_COLOR)const{
            Color tmp;
            tmp.VALUE=VALUE|_COLOR.VALUE;
            return tmp;
        }
};
const Color BLACK_FG=0;
const Color BLUE_FG=1;
const Color GRASS_FG=2;
const Color AZURE_FG=3;
const Color BLOOD_FG=4;
const Color VIOLET_FG=5;
const Color BROWN_FG=6;
const Color WHITE_FG=7;
const Color GREY_FG=8;
const Color INDIGO_FG=9;
const Color GREEN_FG=10;
const Color CYAN_FG=11;
const Color RED_FG=12;
const Color MAGENTA_FG=13;
const Color YELLOW_FG=14;
const Color SNOW_FG=15;
const Color BLACK=0;
const Color BLUE=1;
const Color GRASS=2;
const Color AZURE=3;
const Color BLOOD=4;
const Color VIOLET=5;
const Color BROWN=6;
const Color WHITE=7;
const Color GREY=8;
const Color INDIGO=9;
const Color GREEN=10;
const Color CYAN=11;
const Color RED=12;
const Color MAGENTA=13;
const Color YELLOW=14;
const Color SNOW=15;
const Color BLACK_BG=0;
const Color BLUE_BG=16;
const Color GRASS_BG=32;
const Color AZURE_BG=48;
const Color BLOOD_BG=64;
const Color VIOLET_BG=80;
const Color BROWN_BG=96;
const Color WHITE_BG=112;
const Color GREY_BG=128;
const Color INDIGO_BG=144;
const Color GREEN_BG=160;
const Color CYAN_BG=176;
const Color RED_BG=192;
const Color MAGENTA_BG=208;
const Color YELLOW_BG=224;
const Color SNOW_BG=240;
const Color _BLACK_FG=0;
const Color _BLUE_FG=1;
const Color _GRASS_FG=2;
const Color _AZURE_FG=3;
const Color _BLOOD_FG=4;
const Color _VIOLET_FG=5;
const Color _BROWN_FG=6;
const Color _WHITE_FG=7;
const Color _GREY_FG=8;
const Color _INDIGO_FG=9;
const Color _GREEN_FG=10;
const Color _CYAN_FG=11;
const Color _RED_FG=12;
const Color _MAGENTA_FG=13;
const Color _YELLOW_FG=14;
const Color _SNOW_FG=15;
const Color _BLACK=0;
const Color _BLUE=1;
const Color _GRASS=2;
const Color _AZURE=3;
const Color _BLOOD=4;
const Color _VIOLET=5;
const Color _BROWN=6;
const Color _WHITE=7;
const Color _GREY=8;
const Color _INDIGO=9;
const Color _GREEN=10;
const Color _CYAN=11;
const Color _RED=12;
const Color _MAGENTA=13;
const Color _YELLOW=14;
const Color _SNOW=15;
const Color _BLACK_BG=0;
const Color _BLUE_BG=16;
const Color _GRASS_BG=32;
const Color _AZURE_BG=48;
const Color _BLOOD_BG=64;
const Color _VIOLET_BG=80;
const Color _BROWN_BG=96;
const Color _WHITE_BG=112;
const Color _GREY_BG=128;
const Color _INDIGO_BG=144;
const Color _GREEN_BG=160;
const Color _CYAN_BG=176;
const Color _RED_BG=192;
const Color _MAGENTA_BG=208;
const Color _YELLOW_BG=224;
const Color _SNOW_BG=240;
const Color DARK_FG=0;
const Color SKY_FG=3;
const Color PURPLE_FG=5;
const Color GRAY_FG=8;
const Color LIGHT_FG=15;
const Color DARK=0;
const Color SKY=3;
const Color PURPLE=5;
const Color GRAY=8;
const Color LIGHT=15;
const Color DARK_BG=0;
const Color SKY_BG=48;
const Color PURPLE_BG=80;
const Color GRAY_BG=128;
const Color LIGHT_BG=240;
const Color _DARK_FG=0;
const Color _SKY_FG=3;
const Color _PURPLE_FG=5;
const Color _GRAY_FG=8;
const Color _LIGHT_FG=15;
const Color _DARK=0;
const Color _SKY=3;
const Color _PURPLE=5;
const Color _GRAY=8;
const Color _LIGHT=15;
const Color _DARK_BG=0;
const Color _SKY_BG=48;
const Color _PURPLE_BG=80;
const Color _GRAY_BG=128;
const Color _LIGHT_BG=240;
const bool FG=false;
const bool BG=true;
const bool FOREGROUND=false;
const bool BACKGROUND=true;
const bool _FG=false;
const bool _BG=true;
const bool _FOREGROUND=false;
const bool _BACKGROUND=true;
using namespace std;
void SetColor(Color COLOR){
    SetConsoleTextAttribute(GetStdHandle(-11),COLOR.VALUE);
}
void SetColor(bool MODE,Color COLOR){
    SetConsoleTextAttribute(GetStdHandle(-11),COLOR.VALUE<<(MODE<<2));
}
void SetColor(Color COLOR_FG,Color COLOR_BG){
    SetConsoleTextAttribute(GetStdHandle(-11),(COLOR_BG.VALUE<<4)|COLOR_FG.VALUE);
}
void _SetColor(Color COLOR){
    SetConsoleTextAttribute(GetStdHandle(-11),COLOR.VALUE);
}
void _SetColor(bool MODE,Color COLOR){
    SetConsoleTextAttribute(GetStdHandle(-11),COLOR.VALUE<<(MODE<<2));
}
void _SetColor(Color COLOR_FG,Color COLOR_BG){
    SetConsoleTextAttribute(GetStdHandle(-11),(COLOR_BG.VALUE<<4)|(COLOR_FG.VALUE));
}
ostream&operator<<(ostream&outStream,const Color&_COLOR){
    _SetColor(_COLOR);
    return outStream;
}
istream&operator>>(istream&inStream,const Color&_COLOR){
    _SetColor(_COLOR);
    return inStream;
}
#endif
