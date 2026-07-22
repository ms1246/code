import serial
import matplotlib.pyplot as plt
from collections import deque

# Change COM port (Windows: COM3, Linux/Mac: /dev/ttyUSB0)
ser = serial.Serial('COM5', 9600)

data = deque(maxlen=100)
time_data = deque(maxlen=100)

plt.ion()
fig, ax = plt.subplots()

t = 0

while True:
    try:
        line = ser.readline().decode().strip()
        value = int(line)

        data.append(value)
        time_data.append(t)
        t += 1

        ax.clear()
        ax.plot(time_data, data)
        ax.set_title("LDR Light Intensity vs Time")
        ax.set_xlabel("Time (samples)")
        ax.set_ylabel("Light Intensity")

        plt.pause(0.01)

    except KeyboardInterrupt:
        break
    except:
        pass