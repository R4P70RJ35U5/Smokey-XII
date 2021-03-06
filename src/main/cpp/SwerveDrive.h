
#ifndef SRC_SWERVEDRIVE_H_
#define SRC_SWERVEDRIVE_H_

#include <frc/WPILib.h>
// #include <CAN.h>
#include "ctre\Phoenix.h"
#include <SwerveModule.h>

class SwerveDrive
{
public:

	SwerveDrive(void);
	~SwerveDrive(void);

	void CrabDrive(double xIn, double yIn, double zIn); // Crab - Can drive in any X-Y Direction
	void CrabDrivePID(double xIn, double yIn, double zIn); // (No Rotation)
	void CrabGyro(double xIn, double yIn, double zIn, double gyroValue);
	void SwerveDriveUpdate(double xIn, double yIn, double zIn, double gyroValue);
	void SwerveRobotOriented(double xIn, double yIn, double zIn);

	void MakeshiftRotate(float input);
	void SetRobotAngle(float target, float current);
	void AngleLock(float xIn, float yIn, float target, float gyroValue, bool fieldOriented);

	void DriveDistanceRaw(float target, float gyroValue);
	float XForCenter(float current);
private:
	float integral;
	SwerveModule FL_SwerveModule;
	SwerveModule FR_SwerveModule;
	SwerveModule BL_SwerveModule;
	SwerveModule BR_SwerveModule;

	// frc::CAN a_Feather;
};

#endif /* SRC_SWERVEDRIVE_H_ */
