#include <stdio.h>
#include <assert.h>
#include "BatteryManagementConfig.h"

int alertIfBatteryIsUnHealthy(float variable, BatteryManageConfig MinMaxMessage)
{
	if(variable < MinMaxMessage.min_range) 
	{
    printf("%s\n", MinMaxMessage.Min_Alertmessage);
	return HEALTH_NOT_OK;
	}
	else if(variable > MinMaxMessage.max_range) 
	{
    printf("%s\n", MinMaxMessage.Max_Alertmessage);
	return HEALTH_NOT_OK;
	}
    return HEALTH_OK;

}

int batteryIsOk(float temperature, float soc, float chargeRate) 
{
	return 	alertIfBatteryIsUnHealthy(temperature, temperature_config) && \
			alertIfBatteryIsUnHealthy(soc, soc_config) && \
			alertIfBatteryIsUnHealthy(chargeRate, chargeRate_config);
}

int main() {
//temp,soc,charge rate, discharge voltage
  batteryIsOk(25, 70, 0.7, );
  batteryIsOk(50, 85, 0);
  
}
