/*
* Byte-Ordering Endianness refers to the order of the bytes comprising a digital word in computer memory. 
* It also describes the order of byte transmission over a digital link. 
* Words may be represented in big-endian or little-endian format. 
* When storing a word in big-endian format the most significant byte, which is the byte containing the most significant bit, 
* is stored first and the following bytes are stored in decreasing significance order with the least significant byte, 
* which is the byte containing the least significant bit, thus being stored at last place. 
* Little-endian format reverses the order of the sequence and stores the least significant byte at the first location 
* with the most significant byte being stored last.[1] The order of bits within a byte can also have endianness
* however, a byte is typically handled as a numerical value or character symbol and so bit sequence order is obviated.
* 
*   int x = 0x00000001;
*   char *addr = (char*) &x;
*
*   Big endian format:
*   ------------------
*   Byte address  | 0x01 | 0x02 | 0x03 | 0x04 | 
*                 +++++++++++++++++++++++++++++
*   Byte content  | 0x00 | 0x00 | 0x00 | 0x01 |
*			 
*   Little endian format:
*   ---------------------
*   Byte address  | 0x01 | 0x02 | 0x03 | 0x04 | 
*                 +++++++++++++++++++++++++++++
*   Byte content  | 0x01 | 0x00 | 0x00 | 0x00 |
*
*
*/

#include <stdio.h>
int byte_ordering();
int main ()
{
  if (byte_ordering())
  {
    printf ("Byte ordering - little endian \n");
  }
  else
  {
     printf ("Byte ordering - big endian. \n");
  }
  return 0;
}

int byte_ordering()
{
  unsigned int x = 0x00000001;
  char *addr = (char*) &x;
  
  // returns 0 if big endian and 1 if little endian
  return (int)*addr;
}

