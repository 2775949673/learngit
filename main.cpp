#include <graphics.h>
#include <conio.h>
#include <math.h>
#define PI 3.1415926
int main()
{
	int high=500;
	int width=500;
	initgraph(width,high);	
	
	setbkcolor(WHITE);
	cleardevice;
		
	IMAGE img;					
	loadimage(&img,"D:\\code\\time.jpg");		//加载图片
	putimage(0,0,&img);	
	
	SYSTEMTIME ti;
	float angle_s = 0;				//秒针偏转角度
	float angle_m = 0;				//分针偏转角度
	float angle_h = 0;				//时针偏转角度
	BeginBatchDraw();				//这个函数用于开始批量绘图。执行后，任何绘图操作都将暂时不输出到绘图窗口上，直到执行 FlushBatchDraw 或 EndBatchDraw 才将之前的绘图输出
	settextcolor(BLUE);
	outtextxy(width/2-40,10,"lk设计最帅钟表");	//输出文字
	settextcolor(BLACK);
	outtextxy(width/2-5,110,"12");	//输出文字	
	outtextxy((width)*2/3-20,125,"1");
	outtextxy((width)*2/3+25,175,"2");
	outtextxy((width)*3/4,240,"3");
	outtextxy((width)*2/3+30,305,"4");
	outtextxy((width)*2/3-20,355,"5");
	outtextxy(width/2,380,"6");
	outtextxy(180,360,"7");
	outtextxy(130,310,"8");
	outtextxy((width)*1/4-10,240,"9");
	outtextxy(130,180,"10");
	outtextxy(183,124,"11");
	
	while(1)
	{
		GetLocalTime(&ti);					//获得系统时间
		//根据系统时间获取时针、分针、秒针偏转角度
		/*angle_s = ti.wSecond*2*PI/60;  //ti.wSecond  秒		
		angle_m = ti.wMinute*2*PI/60;
		angle_h = ti.wHour*2*PI/12;*/
		angle_s = ti.wSecond*PI/30;
		angle_m = ti.wMinute*PI/30;
		angle_h = ti.wHour*30*PI/180+ti.wMinute*PI/360;
		//绘制秒针
		setcolor(RED);
		setlinestyle(PS_SOLID,2);
		line(width/2,high/2,width/2+120*sin(angle_s),high/2-120*cos(angle_s));
		setcolor(GREEN);
		//绘制分针
		setlinestyle(PS_SOLID,3);
		line(width/2,high/2,width/2+80*sin(angle_m),high/2-80*cos(angle_m));
		setcolor(BLACK);
		//绘制时针
		setlinestyle(PS_SOLID,4);
		line(width/2,high/2,width/2+50*sin(angle_h),high/2-50*cos(angle_h));
		FlushBatchDraw();
		Sleep(50);
		//清除前一帧的绘图
		setcolor(WHITE);
		line(width/2,high/2,width/2+120*sin(angle_s),high/2-120*cos(angle_s));
		line(width/2,high/2,width/2+80*sin(angle_m),high/2-80*cos(angle_m));
		line(width/2,high/2,width/2+50*sin(angle_h),high/2-50*cos(angle_h));

	}
	
	getch();
	closegraph();
	return 0;			//显示图片
	

}