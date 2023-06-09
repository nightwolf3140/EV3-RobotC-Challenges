#pragma config(Sensor, S1,     touchSensor,    sensorEV3_Touch)
#pragma config(Sensor, S3,     colorSensor,    sensorEV3_Color, modeEV3Color_Color)
#pragma config(Sensor, S4,     sonarSensor,    sensorEV3_Ultrasonic)
#pragma config(Motor,  motorA,          armMotor,      tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorB,          leftMotor,     tmotorEV3_Large, PIDControl, driveLeft, encoder)
#pragma config(Motor,  motorC,          rightMotor,    tmotorEV3_Large, PIDControl, driveRight, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//
void motorstop()
{
motor[motorB] = 0;
motor[motorC] = 0;
sleep(500);
}
void turnright()
{
motorstop();
resetMotorEncoder(motorB);
resetMotorEncoder(motorC);
setMotorTarget(motorC, -178, 5);
setMotorTarget(motorB, 178, 5);
waitUntilMotorStop(motorC);

sleep(500);
//DOUBLE TURN
resetMotorEncoder(motorB);
resetMotorEncoder(motorC);
setMotorTarget(motorC, -178, 5);
setMotorTarget(motorB, 178, 5);
waitUntilMotorStop(motorC);

sleep(500);
}
void turnleft()
{
motorstop();
resetMotorEncoder(motorB);
resetMotorEncoder(motorC);
setMotorTarget(motorC, 178, 5);
setMotorTarget(motorB, -178, 5);
waitUntilMotorStop(motorC);

sleep(500);
//double turn
}
void forward()
{
motor[motorC] = 20;
motor[motorB] = 20;
}

void thinky()
{
	turnleft();
	sleep(500);
	if(SensorValue[S4]<12)
	{
		turnright();
	}

	else
	{
		sleep(500);
	}
}
task main()
{
	repeat(forever)
	{
		if(SensorValue[S4]>12)
		{
			forward();

		}
		else
		{
			thinky();
		}
	}
	sleep(500);
}
