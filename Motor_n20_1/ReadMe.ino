void ReadMe()
  {
    
    fw( 55, 56, 300, "line");  //เดินหาหน้าเข้าหาเส้นความเร็ว 50, 50 เวลาการวิ่ง 250    
    fw( 55, 56, 300, "non_line"); //เดินหน้าจนกว่าเวลาหมดความเร็ว 50, 50 เวลาการวิ่ง 250
    bw( 55, 56, 300, "line"); //ถอยหลังเข้าหาเส้นความเร็ว 50, 50 เวลาการวิ่ง 250
    bw( 55, 56, 300, "non_line"); //ถอยหลังจนกว่าเวลาหมดความเร็ว 50, 50 เวลาการวิ่ง 250
    tr(80, 170); //เลี้ยวซ้ายความเร็วในการหมุน 90 เวลาในการหมุน 250
    tl(80, 170); //เลี้ยวขวาความเร็วในการหมุน 90 เวลาในการหมุน 250
    set_f(1); //การทำให้หุ่นยนต์ตรงโดยการเช็กเส้นข้างหน้า
    set_b(2); //การทำให้หุ่นยนต์ตรงโดยการเช็กเส้นข้างหลัง
    mission(); //ปล่อยกล่อง

   
  }
