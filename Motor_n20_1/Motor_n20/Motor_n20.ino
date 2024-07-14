#include <my_rp_4wd.h>
#include<Wire.h>
#include <EEPROM.h>
#define EEPROM_ADDR 0x50

unsigned long last_time = millis();
int sensor_maxs[] = {567, 561, 563, 800, 583, 633};
int sensor_mins[] = {150, 150, 109, 150, 150, 140};

bool line;
bool ch_lr = false;
bool ch_set_fb = false;
bool ch_bw = false;

int line_set_fb = 150;          //------> ตั้งค่า เดินหน้า ถอบหลัง ก่อนเลี้ยว  (เซตบัลล้านเส้น)
int line_none_set_fb = 170;     //------> ตั้งค่า เดินหน้า ถอบหลัง ก่อนเลี้ยว  (ไม่เซตบัลล้านเส้น)

void setup()
  {
    Serial.begin(9560);
    sensor_set();
    mydisplay_background(black);
    mydisplay("MY-PIPER", 20, 50 ,2, white);
    
    servo(23, 90);
    
    _sw();
/*
    fw( 50,60, 500, "line");
    set_f(2);
    tr(90, 240);
    set_b(3);

    _sw();
    
    fw( 50,60, 200, "line");
    set_f(2);
    tl(90, 240);
    set_b(3);

    _sw();
    
    fw( 50,60, 500, "line");
    set_f(2);
    tr(90, 240);
    set_b(3);

    _sw();
    
    fw( 50,60, 200, "line");
    set_f(2);
    tr(90, 240);
    set_b(3);

    _sw();
    
    fw( 50,60, 800, "line");
    set_f(2);
    tr(90, 240);
    set_b(3);

    _sw();
    
    fw( 50,60, 200, "line");
    set_f(2);

    mission();
    */
    fw( 80,90, 600, "line");
    set_f(3);
    tr(90, 240);
    set_b(3);
    fw( 80,90, 500, "line");
    set_f(1);
    tr(90, 240);
    set_b(3);
    fw( 80,90, 100, "line");
    tr(90, 240);
    set_b(3);
    fw( 80,90, 100, "line");
    set_f(2);
    tl(90, 240);
    set_b(3);
    fw( 80,90, 600, "line");

    mission();
 ///---------------------------------------------------->>
  }
void loop()
  {
    _en();  // จบภาระกิจ
    Serial.println(md_sensors(3));
  }
