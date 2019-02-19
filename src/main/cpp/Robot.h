#include <frc/WPILib.h>
#include <SwerveModule.h>
#include <BeamBreak.h>
#include <CargoCollector.h>
#include <HatchCollector.h>
#include <SwerveDrive.h>
#include <JrimmyGyro.h>
#include <CAN.h>

#ifndef SRC_ROBOT_H_
#define SRC_ROBOT_H_

class Robot : public frc::IterativeRobot
{
public:
	Robot(void);

	void RobotInit(void);
	void RobotPeriodic(void);

	void DisabledInit(void);
	void DisabledPeriodic(void);

	void TeleopInit(void);
	void TeleopPeriodic(void);

	void AutonomousInit(void);
	void AutonomousPeriodic(void);

	void TestInit(void);
	void TestPeriodic(void);

private:
	std::string robotState;
	bool cruiseControl;
	bool crabToggle;
	bool cargoToggle;
	bool cargoLastInput;
	bool cargoDirection;
	float driveSpeed;
	float rotationSpeed;

	JrimmyGyro a_Gyro;
	frc::Joystick a_Joystick1;
	frc::Joystick a_Controller1;
	SwerveModule FL_SwerveModule;
	SwerveModule FR_SwerveModule;
	SwerveModule BL_SwerveModule;
	SwerveModule BR_SwerveModule;
	SwerveDrive a_SwerveDrive;
	CargoCollector a_CargoCollector;
	HatchCollector a_HatchCollector;
	BeamBreak a_BeamBreak;
	frc::CAN a_Feather;

};



#endif /* SRC_Robot_H_ */
