

#ifndef REGISTER_H_
#define REGISTER_H_

//=======================GPIO REGISTER========================//

/*====PORTA====*/

#define iDDRA  *((volatile unsigned char* const)0x3A)
#define iPORTA *((volatile unsigned char* const)0x3B)
#define iPINA  *((volatile unsigned char* const)0x39)

/*====PORTB====*/

#define iDDRB  *((volatile unsigned char* const)0x37)
#define iPORTB *((volatile unsigned char* const)0x38)
#define iPINB  *((volatile unsigned char* const)0x36)

/*====PORTC====*/

#define iDDRC  *((volatile unsigned char* const)0x34)
#define iPORTC *((volatile unsigned char* const)0x35)
#define iPINC  *((volatile unsigned char* const)0x33)

/*====PORTD====*/

#define iDDRD  *((volatile unsigned char* const)0x31)
#define iPORTD *((volatile unsigned char* const)0x32)
#define iPIND  *((volatile unsigned char* const)0x30)


//=========================Timer Registers========================
/* Timer 1 */
#define iSFIOR  *((volatile unsigned char* const)0X50)
#define PUD 2



//=========================EEPROM Registers========================
#define iEEARH  *((volatile unsigned char* const)0X3F)
#define iEEARL  *((volatile unsigned char* const)0X3E)
#define iEEDR   *((volatile unsigned char* const)0X3D)
#define iEECR   *((volatile unsigned char* const)0X3C)

/* EEPROM Control Register */
#define iEERIE   3
#define iEEMWE   2
#define iEEWE    1
#define iEERE    0
//================================================================

//=============================================================//

#endif /* REGISTER_H_ */