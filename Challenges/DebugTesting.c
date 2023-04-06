void InclineLeft(){
//turn slightly left
setMotorTarget(motorB, -20, 20);
setMotorTarget(motorC, 20, 20);
waitUntilMotorStop(motorB);
sleep(200);
}
void InclineRight(){
//turn slightly right
setMotorTarget(motorC, -20, 20);
setMotorTarget(motorB, 20, 20);
waitUntilMotorStop(motorB);
}
void motorstop(){
//stops moving fomotor
sleep(200);
motor[motorB]=0;
motor[motorC]=0;
}
task main()
{
InclineLeft();
motorstop();
InclineRight();

}
