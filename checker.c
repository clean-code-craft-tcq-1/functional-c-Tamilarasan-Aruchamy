#include <stdio.h>
#include <assert.h>
#include "BatteryManagementConfig.h"

int alertIfBatteryIsUnHealthy(float MeasuredValue, BatteryManageConfig MinMaxMessage)
{
	if(MeasuredValue < MinMaxMessage.min_range) 
	{
    printf("%s\n", MinMaxMessage.Min_Alertmessage);
	return HEALTH_NOT_OK;
	}
	else if(MeasuredValue > MinMaxMessage.max_range) 
	{
    printf("%s\n", MinMaxMessage.Max_Alertmessage);
	return HEALTH_NOT_OK;
	}
    return HEALTH_OK;

}

int batteryIsOk(float temperature, float soc, float chargeRate,float dischargeVolt) 
{
	return 	alertIfBatteryIsUnHealthy(temperature, temperature_config) && \
			alertIfBatteryIsUnHealthy(soc, soc_config) && \
			alertIfBatteryIsUnHealthy(chargeRate, chargeRate_config) && \
			alertIfBatteryIsUnHealthy(dischargeVolt, discharge_volt_config);
}

int main() {
			//temperature,State-of-Charge,charge rate, Discharging voltage control
  assert(batteryIsOk(25, 70, 0.7, 4));
  assert(!batteryIsOk(50, 85, 0, 4));
  
}
