                +-----------------------+
                |       ESP32           |
                |                       |
                |    3.3V --------------|---- VCC (MPU6050)
                |    GND ---------------|---- GND (MPU6050)
                |    GPIO22 (SCL) ------|---- SCL (MPU6050)
                |    GPIO21 (SDA) ------|---- SDA (MPU6050)
                |                       |
                |    3.3V --------------|---- VCC (GPS)
                |    GND ---------------|---- GND (GPS)
                |    GPIO17 (UART TX) --|---- RX (GPS)
                |    GPIO16 (UART RX) --|---- TX (GPS)
                |                       |
                |    GPIO32 (PWM) ------|---- Motor 1
                |    GPIO33 (PWM) ------|---- Motor 2
                |    GPIO25 (PWM) ------|---- Motor 3
                |    GPIO26 (PWM) ------|---- Motor 4
                |    GPIO27 (PWM) ------|---- Motor 5
                |    GPIO14 (PWM) ------|---- Motor 6
                |                       |
                |    5V --------------|---- VCC (Receiver)
                |    GND ---------------|---- GND (Receiver)
                |    GPIOXX (PWM) ------|---- PWM signal pins from Receiver
                |                       |
                |    GPIO22 (SCL) ------|---- SCL (Pi)
                |    GPIO21 (SDA) ------|---- SDA (Pi)
                +-----------------------+
