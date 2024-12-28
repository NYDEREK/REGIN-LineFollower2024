/*
 * Turbine.h
 *
 *  Created on: Dec 27, 2024
 *      Author: Szymon
 */

#ifndef INC_TURBINE_H_
#define INC_TURBINE_H_


typedef struct
{
	TIM_HandleTypeDef *Timer;
		uint32_t Channel;

	 	uint16_t Speed;
	 	uint32_t delay;

} Turbine_t;

/*Functions*/
void Turbine_init(Turbine_t *turbine, TIM_HandleTypeDef *Timer, uint32_t Channel, uint32_t delay);
void Turbine_Start(Turbine_t *turbine);
void Turbine_Stop(Turbine_t *turbine);

#endif /* INC_TURBINE_H_ */
