#include <Arduino.h>
#include <Wire.h>
//Step  1  :  Add the Header Files
#include <Drv_Rtc.h>
#include <Drv_i2c.h>
#include <Inno3Pro.h>
#include <Config.h>
#define NO_RESPONSE 0x00
#define AUTO_RESTART 0x02
//Step  2  :  Create the class instance
Inno3Pro_Application Inno3ProApp;

//Step 3 :  Write Initial Commands to Inno Pro
void setup() 
{ 
  Wire.begin();
	Inno3ProApp.Inno3Pro_Initialization(); 
  Inno3ProApp.Inno3Pro_Write_CCSC_Fault_Response(NO_RESPONSE);
  Inno3ProApp.Inno3Pro_Write_CVOL_Fault_Timer(0x03);
  // 5V, 5.1A , Voltage and Constant Current
  Inno3ProApp.Inno3Pro_Write_VI(24 , 3.4);   
  // ON       , Vbus Enable
  Inno3ProApp.Inno3Pro_Vbus_Switch_Control(1);     

}

//Step 4 :  Call the Functions on the Main Loop 
void loop()
{
      //Control Functions Set-Up
      
                  
}