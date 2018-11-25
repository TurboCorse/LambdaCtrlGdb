//This file is generated by VisualGDB and is used to get accurate IntelliSense
#pragma once
#include <Arduino.h>

#define SYSPROGS_ARDUINO_EXPAND_GENERATED_PROTOTYPES \
	void setup(); \
	void loop(); \
	void Inputs(tInputs* In); \
	void Outputs(tOutputs* Out); \
	uint16_t ComCj(uint16_t data); \
	void ComDac(uint8_t addr, uint16_t data); \
	int16_t CalcLambda(void); \
	int16_t Interpolate(int16_t Ip); \
	void Preset(void); \
	void Start(void); \
	void Calibrate(void); \
	void Idle(void); \
	void Condensate(void); \
	void Preheat(void); \
	void Running(void); \
	void Error(void); \
