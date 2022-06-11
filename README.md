# tiny-usb-switch
A small circuit to powercycle an USB device from serial.

## Contents

 * tiny-schematic - KiCad schematic
 * tiny-switch - ATTinyx5 code (currently optimized for ATTiny25) [ATTinyCore](https://github.com/SpenceKonde/ATTinyCore)
 * tiny-script - Wrapper Bash script.

## BOM

All the materials were bought from a local supplier: [Robotron Electronika](https://www.ret.hu/) - [pdf catalogue](https://www.ret.hu/FlippingBook/files/assets/downloads/files/RETKAT2012.pdf)

### Parts list

* 1x [J2: USB-A socket](https://www.ret.hu/shop/product/assmann/usb-a-aljzat-90_53-07-97) - 249 HUF/piece
* 1x [J1: USB-B socket](https://www.ret.hu/shop/product/assmann/usb-b-aljzat-90_53-07-96) - 498 HUF/piece
* 1x [H25PR050 proto board](https://www.ret.hu/shop/product/rademacher/h25pr050_75-00-15) - 490 HUF/piece
* 1x [K1: NA5W-K relay](https://www.ret.hu/shop/product/takamisawa/na-5w-k_49-00-67) - 888 HUF/piece
* 1x [U1: ATTINY25-20PU](https://www.ret.hu/shop/product/microchip-atmel/attiny25-20pu_42-09-84) - 699 HUF/piece
* 1x [DIL8 socket](https://www.ret.hu/shop/product/assmann/dil8-lemezes-assmann_51-02-23) - 45 HUF/piece
* 2x [D2: GLED](https://www.ret.hu/shop/product/liteon/5xc-zold-ltl307ge_46-01-09) or [D1: RLED](https://www.ret.hu/shop/product/liteon/5xc-piros-ltl307ee_46-01-07) - 20 HUF/piece
* 2x [R1&R2: 1k resistor](https://www.ret.hu/shop/product/yageo/1-kohm-0-4w-1-rm2_02-06-13) - 20 HUF/piece
* 1x [Q1: NPN transistor](https://www.ret.hu/shop/product/onsemi/2n-3904g-n_21-00-78) - 75 HUF/piece
* 1x [J1: male pin header](https://www.ret.hu/shop/product/e-tec/40g-stiftleiste_53-03-25) - 199 HUF/piece
* 1x [C1: 100nF 50V +/- 10% capacitor](https://www.ret.hu/shop/product/nic-components/100-nf-50v-10-x7r-rm1-tape_10-01-45) - 149 HUF/piece

### In table format (in hungarian)

| Sorszám | Termékkód | Termék                       | Egységár (Nettó) | Egységár (Bruttó) | Mennyiség | Összesen (Nettó) | Összesen (Bruttó) |
|---------|-----------|------------------------------|------------------|-------------------|-----------|------------------|-------------------|
| 1       | 53-07-97  | USB-A aljzat 90°             | 196.06 HUF       | 249 HUF           | 1         | 196.06 HUF       | 249 HUF           |
| 2       | 53-07-96  | USB-B aljzat 90°             | 196.06 HUF       | 249 HUF           | 2         | 392.12 HUF       | 497.99 HUF        |
| 3       | 75-00-15  | H25PR050                     | 385.82 HUF       | 489.99 HUF        | 1         | 385.82 HUF       | 489.99 HUF        |
| 4       | 49-00-67  | NA 5W-K                      | 699.21 HUF       | 888 HUF           | 1         | 699.21 HUF       | 888 HUF           |
| 5       | 42-09-84  | ATTINY25-20PU                | 550.4 HUF        | 699.01 HUF        | 1         | 550.4 HUF        | 699.01 HUF        |
| 6       | 51-02-23  | DIL8 lemezes Assmann         | 35.43 HUF        | 45 HUF            | 1         | 35.43 HUF        | 45 HUF            |
| 7       | 46-01-09  | 5XC zöld LTL307GE            | 15.75 HUF        | 20 HUF            | 1         | 15.75 HUF        | 20 HUF            |
| 8       | 46-01-07  | 5XC piros LTL307EE           | 17.32 HUF        | 22 HUF            | 1         | 17.32 HUF        | 22 HUF            |
| 9       | 02-06-13  | 1 KOhm 0.4W 1% RM2           | 7.87 HUF         | 9.99 HUF          | 2         | 15.74 HUF        | 19.99 HUF         |
| 10      | 21-00-78  | 2N 3904G *N                  | 59.06 HUF        | 75.01 HUF         | 1         | 59.06 HUF        | 75.01 HUF         |
| 11      | 53-03-25  | 40G Stiftleiste              | 156.69 HUF       | 199 HUF           | 1         | 156.69 HUF       | 199 HUF           |
| 12      | 10-01-45  | 100 nF 50V ±10% X7R RM1-Tape | 117.32 HUF       | 149 HUF           | 1         | 117.32 HUF       | 149 HUF           |
|         |           |                              |                  |                   |           | Nettó összesen   | Bruttó összesen   |
|         |           |                              |                  |                   |           | 2641 HUF         | 3354 HUF          |

### USB-to-Serial

I used the CED007700 - USB to RS232 TTL PL2303HX device. It won't work on windows.

## Images

![IMG_20220610_133255](https://user-images.githubusercontent.com/4673764/173113575-d9c5e152-0246-4739-aa85-c8cc54a5d42f.jpg)
![IMG_20220610_133312](https://user-images.githubusercontent.com/4673764/173113591-6a6c8e21-f28d-45c1-9731-59ddc6f3bb97.jpg)
