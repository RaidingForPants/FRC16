#ifndef BallCollector_H
#define BallCollector_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class BallCollector: Subsystem {

public:
	std::unique_ptr<Talon> motor;

	BallCollector();
	void Start();
	void Stop();
	~BallCollector();
};

#endif
