/**
 * ============================================================================
 * Curso / Course: ANSI C for Embedded Systems (Udemy)
 * IDE: Code::Blocks (GCC / MinGW)
 * ----------------------------------------------------------------------------
 * ES: Serialización de datos de telemetría GPS a nivel de bytes mediante uniones.
 * EN: Byte-level GPS telemetry serialization using C unions.
 * 
 * Embedded Context: Las uniones son fundamentales en protocolos de comunicación
 * (UART, CAN bus, I2C, SPI) para empaquetar variables de 32 bits en buffers de 1 byte.
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/* Unión para mapear 1 entero long (32-bit) a un arreglo de 4 bytes */
/* Union to map a 32-bit long integer into an array of 4 individual bytes */
union GPS_Lat_Packet {
    long int_gps_lat;
    unsigned char byte_gps_lat[4];
};

int main(void)
{
    union GPS_Lat_Packet packet;

    printf("====================================================\n");
    printf("  SERIALIZACION TELEMETRICA GPS CON UNIONES         \n");
    printf("  GPS TELEMETRY SERIALIZATION WITH UNIONS           \n");
    printf("====================================================\n\n");

    /* Valor de coordenada GPS en formato entero escalado */
    packet.int_gps_lat = 0x12345678;

    printf("  Coordenada Entera (Hex) : 0x%08lX\n", packet.int_gps_lat);
    printf("  Coordenada Entera (Dec) : %ld\n\n", packet.int_gps_lat);

    printf("[DESGLOSE DE BYTES PARA TRANSMISION UART/CAN]\n");
    for (int i = 0; i < 4; i++)
    {
        printf("  Byte [%d]: 0x%02X (Dec: %3u)\n", i, packet.byte_gps_lat[i], packet.byte_gps_lat[i]);
    }

    return 0;
}
