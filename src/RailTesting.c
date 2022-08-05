#include "JMLib.c"
#include <GetLightSensorData.h>
#include <SetMotor.h>
#include <Set3CLed.h>
#include <SetInBeep.h>
#include <SetWaitForTime.h>

volatile double GV_945d5e233cf7d6240f6b783b36a374ff = 0;
volatile double GV_92b09c7c48c520c3c55e497875da437c = 0;
volatile double GV_b1ca34f82e83c52b010f86955f264e05 = 0;

int main(void)
{
	for (;;) {
		GV_945d5e233cf7d6240f6b783b36a374ff = GetLightSensorData(1);
		
		GV_b1ca34f82e83c52b010f86955f264e05 = GetLightSensorData(2);
		
		GV_92b09c7c48c520c3c55e497875da437c = GetLightSensorData(3);
		
		if ((GV_945d5e233cf7d6240f6b783b36a374ff)==(1)) {
			SetMotor(1,10);
			
			SetMotor(2,40);
			
		}
		
		if ((GV_b1ca34f82e83c52b010f86955f264e05)==(1)) {
			SetMotor(1,30);
			
			SetMotor(2,40);
			
		}
		
		if ((GV_92b09c7c48c520c3c55e497875da437c)==(1)) {
			SetMotor(1,40);
			
			SetMotor(2,10);
			
		}
		
		if (((GV_945d5e233cf7d6240f6b783b36a374ff)==(1))&&(((GV_b1ca34f82e83c52b010f86955f264e05)==(1))&&((GV_92b09c7c48c520c3c55e497875da437c)==(1)))) {
			SetMotor(1,0);
			
			SetMotor(2,0);
			
			Set3CLed(1,2);
			
			SetInBeep(ON);
			
			SetWaitForTime(2);
			
			
			Set3CLed(1,0);
			
			SetInBeep(OFF);
			
			SetMotor(1,40);
			
			SetMotor(2,40);
			
			SetWaitForTime(0.5);
			
			
		} else {
			SetMotor(1,-10);
			
			SetMotor(2,10);
			
		}
		
	}
	
}