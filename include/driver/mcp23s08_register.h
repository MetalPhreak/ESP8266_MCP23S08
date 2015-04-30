/*
* The MIT License (MIT)
* 
* Copyright (c) 2015 David Ogilvy (MetalPhreak)
* 
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
* 
* The above copyright notice and this permission notice shall be included in all
* copies or substantial portions of the Software.
* 
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*/

#ifndef MCP23S08_REGISTER_H
#define MCP23S08_REGISTER_H

// 0b00000AD0
//        ^^ Device ADDress: 00 = Chip 0, 01 = Chip 1, 10 = Chip 2, 11 = Chip 3

#define PORT0   0x00
#define PORT1   0x02
#define PORT2   0x04
#define PORT3   0x06

//If you only have one device, you can use the below for simplicity. 
//Connect all address pins to ground, or change the below defines to match your address setting.
#define PORT    PORT0

#define GPIO0   0x0001
#define GPIO1   0x0002
#define GPIO2   0x0004
#define GPIO3   0x0008
#define GPIO4   0x0010
#define GPIO5   0x0020
#define GPIO6   0x0040
#define GPIO7   0x0080

//These control register maps are valid for MCP23S08 or when IOCON.Bank = 1 for MCP23S17!

#define IODIR      0x00
#define IPOL       0x01
#define GPINTEN    0x02
#define DEFVAL     0x03
#define INTCON     0x04
#define IOCON      0x05
#define GPPU       0x06
#define INTF       0x07
#define INTCAP     0x08
#define GPIO       0x09
#define OLAT       0x0A

#define IODIR_CTRL   0x00
#define IPOL_CTRL    0x01
#define GPINTEN_CTRL 0x02
#define DEFVAL_CTRL  0x03
#define INTCON_CTRL  0x04
#define IOCON_CTRL   0x05
#define GPPU_CTRL    0x06
#define INTF_CTRL    0x07
#define INTCAP_CTRL  0x08
#define GPIO_CTRL    0x09
#define OLAT_CTRL    0x0A


//IOCON bits
#define INTPOL  0x02
#define ODR     0x04
#define HAEN    0x08
#define DISSLW  0x10
#define SREAD   0x20 //change from SEQOP on MCP23S17
//#define MIRROR  0x40 Not Used
//#define BANK    0x80 Not Used

#endif

