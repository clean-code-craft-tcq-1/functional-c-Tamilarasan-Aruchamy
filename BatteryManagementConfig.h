typedef struct
{
	float min_range;
	float max_range;
	char Alartmessage[50];
}BatteryManageConfig;


BatteryManageConfig temperature_config={0,45,"Temperature out of range!"};
BatteryManageConfig soc_config={20,80,"State of Charge out of range!"};
BatteryManageConfig chargeRate_config={0,0.8,"Charge Rate out of range!"};


enum BatteryHealth{
	HEALTH_NOT_OK,
	HEALTH_OK
};
