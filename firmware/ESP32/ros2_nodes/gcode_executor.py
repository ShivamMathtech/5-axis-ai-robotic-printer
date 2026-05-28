import serial

ser = serial.Serial(
    '/dev/ttyUSB0',
    115200
)

def send_gcode(command):

    ser.write(
        (command + '\n').encode()
    )

    print(f"Sent: {command}")

gcode_commands = [
    "G28",
    "G1 X50 Y50 Z20 F3000",
    "G1 X100 Y100 Z30 F3000"
]

for cmd in gcode_commands:

    send_gcode(cmd)