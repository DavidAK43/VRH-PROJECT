#define CT_STATIC           0
#define CT_BUTTON           1
#define CT_STRUCTURED_TEXT  13
#define CT_LINEBREAK        98
#define CT_LISTBOX          5
#define CT_Slider           43
#define CT_ACTIVETEXT		11
#define CT_PROGRESSBAR      8

#define LB_TEXTURES       0x10
#define SL_HORZ           0x400 
#define SL_VERT           0
#define ST_LEFT           0x00
#define ST_RIGHT          0x01
#define ST_CENTER         0x02
#define ST_DOWN           0x04
#define ST_UP             0x08
#define ST_PICTURE        0x30
#define ST_SINGLE         0
#define ST_MULTI          16
#define ST_KEEPASPECT     0x30 + 0x800

#define Color75 "(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",0.75
#define Color50 "(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",0.50
#define Color25 "(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",0.25


class IGUIBack

{
	access = 0;
	background = 1;
	type = CT_STATIC;
	style = 0;
	idc = -1;
	colorBackground[] = {0,0,0,0.5};
	colorShadow[] = {0,0,0,0.5};
	colorText[] = {1,1,1,0.5};
	text = "";
	fixedWidth = 0;
	x = 0;
	y = 0;
	h = 0;
	w = 0;
	shadow = 1;
	font = "puristaMedium";
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	moving = 1;
};


class RscButton
{
	access = 0;
	type = CT_BUTTON;
	style = ST_CENTER;
	text = "";
	colorText[] = {1,1,1,0.75};
	colorDisabled[] = {1,1,1,0.1};
	colorBackground[] = {Color75};
	colorBackgroundDisabled[] = {0.5,0.5,0.5,0.5};
	colorBackgroundActive[] = {Color50};
	colorFocused[] = {Color75};
	colorShadow[] = {0,0,0,0};
	colorBorder[] = {0,0,0,0};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1};
	soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};
	x = 0;
	y = 0;
	w = 0;
	h = 0;
	shadow = 2;
	font = "puristaMedium";
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.75)";
	offsetX = 0;
	offsetY = 0;
	offsetPressedX = 0.001;
	offsetPressedY = 0.001;
	borderSize = 1;
	moving = 1;
};

class RscText
{
	access = 0;
	type = CT_STATIC;
	style = ST_CENTER;
	idc = -1;
	colorBackground[] = {1,1,1,0};
	colorText[] = {1,1,1,0.8};
	text = "";
	fixedWidth = 0;
	x = 0;
	y = 0;
	h = 0;
	w = 0;
	shadow = 2;
	font = "puristaMedium";
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.75)"; 
	moving = 1;	 
};

class RscProgress 
{ 
	type = CT_PROGRESSBAR; 
	style = ST_SINGLE; 
	colorFrame[] = {0,0,0,0}; 
	colorBar[] = {1,1,1,1};
	texture = "#(argb,8,8,3)color(1,1,1,1)";
	shadow = 0;
	x = 0;
	y = 0;
	w = 0;
	h = 0;	
}; 

class RscListBox
{ 
	type = CT_LISTBOX;
	style = LB_TEXTURES;
	idc=-1;
	font = "puristaMedium";
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.75)";
	rowHeight=0.025;
	lineSpacing = 1;
	idcRight = -1;
	idcLeft = -1;
	drawSideArrows = 1;
	columns[] = {0.937500,0.968750,1.000000,0.7};
	colorText[] = {1,1,1,0.7};
	colorDisabled[] = {1, 1, 1, 0.6};
	colorScrollBar[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",0.85};
	colorSelect[] = {0.937500,0.968750,1.000000,0.7};
	colorSelect2[] = {0.937500,0.968750,1.000000,0.7};
	colorSelectBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",0.85};
	colorSelectBackground2[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",0.85};
	colorBackground[] = {1,1,1,0.05};
	maxHistoryDelay = 1.0;
	soundSelect[] = {"",0.1,1};
	period = 1;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
	arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
	arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
	shadow = 0;

    class listScrollBar
	{
		color[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",0.85};
		colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",0.85};
	    colorDisabled[] = {1, 1, 1, 1};
		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
        arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
        border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
        thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
        soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1};
		shadow = 1;
		width = 0.021;
	};	
};

#include "dialog.hpp"
		