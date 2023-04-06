#pragma config(StandardModel, "EV3_REMBOT")
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

void armconfig()
{
setMotorTarget(motorA, 165, 50);
sleep(2000);
resetMotorEncoder(motorA);

}


void armdown()
{
setMotorTarget(motorA, -137, 50);
waitUntilMotorStop(motorA);
sleep(2000);
setMotorTarget(motorA, 0, 50);
waitUntilMotorStop(motorA);
}

task main()
{
armconfig();
resetMotorEncoder(motorB);
resetMotorEncoder(motorC);

setMotorTarget(motorB, 500, 50);
setMotorTarget(motorC, 500, 50);

waitUntilMotorStop(motorB);
armdown();
sleep(200);
resetMotorEncoder(motorB);
resetMotorEncoder(motorC);

setMotorTarget(motorB, 700, 50);
setMotorTarget(motorC, 700, 50);

waitUntilMotorStop(motorB);
armdown();
sleep(200);

resetMotorEncoder(motorB);
resetMotorEncoder(motorC);

setMotorTarget(motorB, 700, 50);
setMotorTarget(motorC, 700, 50);

waitUntilMotorStop(motorB);
armdown();
sleep(200);
resetMotorEncoder(motorB);
resetMotorEncoder(motorC);

setMotorTarget(motorB, -1700, 50);
setMotorTarget(motorC, -1700, 50);
waitUntilMotorStop(motorB);

sleep(200);
}