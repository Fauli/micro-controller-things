esptool.py v4.6.2
Found 3 serial ports
Serial port /dev/cu.usbserial-110
Connecting....
Detecting chip type... Unsupported detection protocol, switching and trying again...
Connecting....
Detecting chip type... ESP32
Chip is ESP32-D0WDQ6 (revision v1.0)
Features: WiFi, BT, Dual Core, 240MHz, VRef calibration in efuse, Coding Scheme None
Crystal is 40MHz
MAC: a4:cf:12:12:0a:b4
Uploading stub...
Running stub...
Stub running...
Configuring flash size...
Flash will be erased from 0x00000000 to 0x0000ffff...
Compressed 65536 bytes to 15901...
Writing at 0x00000000... (100 %)
Wrote 65536 bytes (15901 compressed) at 0x00000000 in 1.9 seconds (effective 279.5 kbit/s)...
Hash of data verified.

Leaving...
Hard resetting via RTS pin...
cmd was: python3 -m esptool write_flash 0x0 ./esp32_bootloader_v4.bin
esptool.py v4.6.2
Found 3 serial ports
Serial port /dev/cu.usbserial-110
Connecting.........
Detecting chip type... Unsupported detection protocol, switching and trying again...
Connecting.....
Detecting chip type... ESP32
Chip is ESP32-D0WDQ6 (revision v1.0)
Features: WiFi, BT, Dual Core, 240MHz, VRef calibration in efuse, Coding Scheme None
Crystal is 40MHz
MAC: a4:cf:12:12:0a:b4
Uploading stub...
Running stub...
Stub running...
Configuring flash size...
Flash will be erased from 0x00010000 to 0x00148fff...
Compressed 1278256 bytes to 848392...
Writing at 0x00010000... (1 %)
Writing at 0x0001735f... (3 %)
Writing at 0x0001b2bc... (5 %)
Writing at 0x0001f337... (7 %)
Writing at 0x0002333d... (9 %)
Writing at 0x0002733d... (11 %)
Writing at 0x0002b338... (13 %)
Writing at 0x0002f698... (15 %)
Writing at 0x00039c32... (17 %)
Writing at 0x00041ade... (19 %)
Writing at 0x00051020... (21 %)
Writing at 0x00058970... (23 %)
Writing at 0x0005e180... (25 %)
Writing at 0x00063bd3... (26 %)
Writing at 0x000696af... (28 %)
Writing at 0x0006f2de... (30 %)
Writing at 0x00074e8d... (32 %)
Writing at 0x0007a3fe... (34 %)
Writing at 0x00080437... (36 %)
Writing at 0x00086689... (38 %)
Writing at 0x0008bf89... (40 %)
Writing at 0x00091c64... (42 %)
Writing at 0x00097805... (44 %)
Writing at 0x0009db73... (46 %)
Writing at 0x000a328c... (48 %)
Writing at 0x000a9266... (50 %)
Writing at 0x000ae2c1... (51 %)
Writing at 0x000b3d60... (53 %)
Writing at 0x000ba197... (55 %)
Writing at 0x000c039c... (57 %)
Writing at 0x000c59de... (59 %)
Writing at 0x000cf0cc... (61 %)
Writing at 0x000d7936... (63 %)
Writing at 0x000ddc08... (65 %)
Writing at 0x000e3536... (67 %)
Writing at 0x000e932f... (69 %)
Writing at 0x000ef075... (71 %)
Writing at 0x000f4ba5... (73 %)
Writing at 0x000fabc2... (75 %)
Writing at 0x00100a0c... (76 %)
Writing at 0x00105bd1... (78 %)
Writing at 0x0010b0ba... (80 %)
Writing at 0x001105e9... (82 %)
Writing at 0x001159f4... (84 %)
Writing at 0x0011b537... (86 %)
Writing at 0x00120fa7... (88 %)
Writing at 0x00126766... (90 %)
Writing at 0x0012bd85... (92 %)
Writing at 0x00131920... (94 %)
Writing at 0x00136eec... (96 %)
Writing at 0x0013ccce... (98 %)
Writing at 0x00143513... (100 %)
Wrote 1278256 bytes (848392 compressed) at 0x00010000 in 82.4 seconds (effective 124.1 kbit/s)...
Hash of data verified.

Leaving...
Hard resetting via RTS pin...
cmd was: python3 -m esptool write_flash 0x10000 WLED_0.14.0_ESP32.bin
