<h1><strong> ตู้ยาเจ๋งแจ๋วสุดจ๊าบ </strong></h1>
<hr>
โครงงานนี้เป็นส่วนหนึ่งของรายวิชา 01204322 ระบบฝังตัว (Embedded Systems) ภาคปลาย ปีการศึกษา 2566 หมู่ 1
ภาควิชาวิศวกรรมคอมพิวเตอร์ คณะวิศวกรรมศาสตร์ มหาวิทยาลัยเกษตรศาสตร์


<b><font size='4'>สมาชิก</font></b><br>
1.	6410500190 นางสาวชนากานต์ ศรีอุดม
2.	6410500203 นางสาวปริยากร กัมมารังกูร
3.	6410504055 นางสาวชาลิสา สกุลวิจิตร์สินธุ
4.	6410504276 นางสาวรัสรินทร์ นิธิเจริญอริยะ

<b><font size='4'>ที่มาและความสำคัญ</font></b><br>
<span class="tab"></span>ในปัจจุบัน ผู้สูงอายุจำนวนมากต้องรับประทานยาอย่างสม่ำเสมอ ไม่ว่าเพื่อรักษาโรคประจำตัวหรือเพื่อบำรุงร่างกาย แต่ในการรับประทานยานั้นมีความจำเพาะเจาะจงในแต่ละตัวยาในเรื่องของเวลาในการรับประทาน ทำให้ผู้สูงอายุบางท่านมักทานยาไม่ตรงตามเวลาที่กำหนด และอาจมีความสับสนในตัวยา และด้วยปัจจัยหลาย ๆ ด้านทำให้ไม่มีผู้ช่วยในการบริหารจัดการการรับประทานยา  ดังนั้น เพื่อเป็นการพัฒนาคุณภาพการดูแลผู้สูงอายุให้รับประทานยาอย่างตรงเวลา คณะผู้จัดทำจึงนำระบบเครื่องจ่ายยาอัตโนมัติ มาใช้ในการจ่ายยาให้แก่ผู้สูงอายุอย่างมีประสิทธิภาพ และทำการแจ้งเตือนให้ผู้สูงอายุที่มีปัญหาในด้านความทรงจำได้รับยาที่ถูกต้อง และรับประทานยาในเวลาที่เหมาะสม

<b><font size='4'>รายละเอียด</font></b><br>
<span class="tab"></span>ตู้ยาเจ๋งแจ๋วสุดจ๊าบ เป็นเครื่องจ่ายยาอัตโนมัติ โดยผู้ใช้งานใส่ยาในช่องที่ต้องการพร้อมตั้งเวลาผ่านแอปพลิเคชัน เมื่อถึงเวลาที่กำหนดเครื่องจ่ายยาจะทำการจ่ายยาอัตโนมัติพร้อมส่งเสียงแจ้งเตือนให้รับประทานยา สามารถกดปิดเสียงการแจ้งเตือนเมื่อรับประทานยาเสร็จแล้ว และมีการแสดงค่าความชื้นและอุณหภูมิของที่เก็บรักษายาเพื่อให้ยามีประสิทธิภาพที่ดีอยู่เสมอ

<b><font size='4'>FEATURES</font></b><br><UL type = "circle">
<LI>จ่ายยาตามช่วงเวลาที่กำหนด โดยมีแบ่งประเภทการจ่ายยาออกเป็นยาก่อนอาหารและยาหลังอาหาร โดยมีรอบการจ่ายยา ดังนี้ เช้า กลางวัน เย็น และก่อนนอน
<LI>มีการแจ้งเตือนในทุกรอบของการรับประทานยา โดยจะมีเสียงแจ้งเตือนเมื่อถึงเวลาที่กำหนด หากผู้ใช้งานรับประทานยา/หยิบยาออกแล้ว สามารถกดปุ่มเพื่อปิดเสียงการแจ้งเตือนได้
<LI>วัดความชื้นและอุณหภูมิ จะแสดงค่าความชื้นและอุณหภูมิของพื้นที่ที่ทำการเก็บรักษายาเพื่อรักษาประสิทธิภาพของยาไว้
</UL>

<b><font size='4'>Hardware</font></b><br><UL type = "circle">
<LI> 4 NodeMCU ESP32
<LI> 2 MG90S Servo motor
<LI> 1 Active Buzzer Module
<LI> 1 Button
<LI> 1 DHT11 Digital Temperature and Humidity Sensor
<LI> 1 OLED 128x64 I2C
<LI> Battery 12V
</UL>

<b><font size='4'>Software</font></b><br><UL type = "circle">
<LI> Arduino IDE
<LI> Blynk
</UL>

<b><font size='4'>Library list in used</font></b><br><UL type = "circle">
<LI> WiFi.h
<LI> WiFiClient.h
<LI> BlynkSimpleEsp32.h
<LI> ESP32Servo.h
</UL>

<b><font size='4'>แนวคิดและหลักการทำงาน</font></b><br>
<b><font size='3'>บอร์ด 1 และ 2</font></b><br>
<center><IMG SRC=https://media.discordapp.net/attachments/1007926533123485739/1214445541627404318/messageImage_1709539225767.jpg?ex=65f9238c&is=65e6ae8c&hm=cf64dc3d092729482b45b1fb73292ae690968413df2b92ece6a0b18c3e685f7f&=&format=webp&width=895&height=655 width="200" height="auto"></center>
<span class="tab"></span>สำหรับระบบจ่ายยา ทำการติดตั้ง servo ยึดกับใบพัดที่หมุนเพื่อทำการจ่ายยาลงช่องตามเวลาที่กำหนดผ่านแอปพลิเคชัน Blynk โดยบอร์ด1 ใช้สำหรับการจ่ายยาก่อนอาหาร และบอร์ด 2 ใช้สำหรับการจ่ายยาหลังอาหาร servo แต่ละตัวจะทำการหมุน 4 ครั้ง ให้ตรงกับช่วงเช้า กลางวัน เย็น และก่อนนอน ซึ่งจะหมุนให้ทำมุม 45 90 135 และ 180 องศาตามลำดับ และเมื่อหมุนครบ 180 องศาจะหมุนกลับไปที่ 0 องศา สำหรับการใส่ยาในรอบถัดไป<br>
<br>
<b><font size='3'>บอร์ด 3</font></b><br>
<center><IMG SRC=https://media.discordapp.net/attachments/1007926533123485739/1214445560421941268/messageImage_1709539944804.jpg?ex=65f92390&is=65e6ae90&hm=f94dd55f96bac66c56001fd83c43aef393a585ed820cbcc6c4da452105932b2e&=&format=webp&width=1075&height=510 width="200" height="auto"></center>
<span class="tab"></span>ระบบแจ้งเตือน โดยทำการติดตั้ง buzzer และ button เมื่อถึงเวลาที่กำหนด จะทำการส่งเสียงแจ้งเตือนให้ผู้ใช้งานทราบถึงเวลารับประทานยา และเมื่อรับประทานยาเสร็จผู้ใช้งานสามารถกดปุ่มเพื่อปิดการแจ้งเตือนได้<br>
<br>
<b><font size='3'>บอร์ด 4</font></b><br>
<center><IMG SRC=https://media.discordapp.net/attachments/1007926533123485739/1214445580542156800/messageImage_1709538455028.jpg?ex=65f92395&is=65e6ae95&hm=49efcdc441abdc4953042e7412be085295c38e6126e0d34a3388085717066d73&=&format=webp&width=549&height=655 width="200" height="auto"></center>
<span class="tab"></span>ระบบแสดงค่าความชื้นและอุณหภูมิ ทำการติดตั้ง DHT11 Digital Temperature and Humidity Sensor เพื่อวัดค่าความชื้นและอุณหภูมิของพื้นที่ที่ทำการเก็บรักษายา และแสดงค่าผ่านจอ OLED 128x64 I2C ตลอดเวลา
<br>
<br>

<b><font size='3'>Github : </b> <a href="https://github.com/beambyp/jengjeaw">jengjeaw</a></font>
