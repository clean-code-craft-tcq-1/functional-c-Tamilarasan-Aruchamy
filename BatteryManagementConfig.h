typedef struct
{
	float min_range;
	float max_range;
	char Min_Alertmessage[50];
	char Max_Alertmessage[50];
}BatteryManageConfig;


BatteryManageConfig temperature_config={0,45,"Temperature is very low!","Temperature is very High!"};
BatteryManageConfig soc_config={20,80,"State of Charge is very low!","State of Charge is very High!"};
BatteryManageConfig chargeRate_config={0,0.8,"Charge Rate is very low!","Charge Rate is very low!"};


enum BatteryHealth{
	HEALTH_NOT_OK,
	HEALTH_OK
};
