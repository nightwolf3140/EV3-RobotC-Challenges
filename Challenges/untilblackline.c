#pragma config(StandardModel, "RVW Anemobot")
#pragma config(RenamedStdModelMotor, motorA, armMotor)
#pragma config(RenamedStdModelSensor, S3, colorSensor)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	repeat(forever){
		while(SensorValue[S3]>50){
			motor[motorB]=30;
			motor[motorC]=30;
		}
		motor[motorB]=0;
		motor[motorC]=0;
	}
}
