#include <stdio.h>
#include <assert.h>
#include "BatteryManagementConfig.h"

int alartIfBatteryIsUnHealthy(float variable, BatteryManageConfig MinMaxMessage)
{
	if(variable < MinMaxMessage.min_range) 
	{
    printf("%s\n", MinMaxMessage.Alartmessage);
	return HEALTH_NOT_OK;
	}
	else if(ariable > MinMaxMessage.max_range) 
	{
    printf("%s\n", MinMaxMessage.Alartmessage);
	return HEALTH_NOT_OK;
	}
    return HEALTH_OK;

}


int batteryIsOk(float temperature, float soc, float chargeRate) 
{
	return 	alartIfBatteryIsUnHealthy(temperature, temperature_config) && \
			alartIfBatteryIsUnHealthy(soc, soc_config) && \
			alartIfBatteryIsUnHealthy(chargeRate, chargeRate_config);
}

int main() {
	
  batteryIsOk(25, 70, 0.7);
  batteryIsOk(50, 85, 0);
  
}
