/**
 * ============================================================================
 * Curso / Course: ANSI C for Embedded Systems (Udemy)
 * IDE: Code::Blocks (GCC / MinGW)
 * ----------------------------------------------------------------------------
 * ES: Estructuras de datos (struct) para telemetría de sensores en sistemas embebidos.
 * EN: Data structures (struct) for sensor telemetry in embedded systems.
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/* Definición de la estructura de sensor / Sensor struct definition */
struct SensorData {
    int   azimut;
    float pitch_above;
    long  pitch_below;
};

int main(void)
{
    struct SensorData data_step;
    struct SensorData data_sensor;

    printf("====================================================\n");
    printf("  ESTRUCTURAS DE DATOS (STRUCT) PARA SENSORES       \n");
    printf("  SENSOR TELEMETRY DATA STRUCTURES (STRUCT)         \n");
    printf("====================================================\n\n");

    /* Inicialización de miembro por miembro */
    data_step.azimut = 10;
    data_step.pitch_above = 3.1416f;
    data_step.pitch_below = 9856L;

    data_sensor.azimut = 60;
    data_sensor.pitch_above = 88.99f;
    data_sensor.pitch_below = 89656999L;

    printf("[Paso de Calibracion / Step Data]\n");
    printf("  Azimut      : %d deg\n", data_step.azimut);
    printf("  Pitch Above : %.4f\n", data_step.pitch_above);
    printf("  Pitch Below : %ld\n\n", data_step.pitch_below);

    printf("[Sensor en Tiempo Real / Live Sensor Data]\n");
    printf("  Azimut      : %d deg\n", data_sensor.azimut);
    printf("  Pitch Above : %.2f\n", data_sensor.pitch_above);
    printf("  Pitch Below : %ld\n", data_sensor.pitch_below);

    return 0;
}
