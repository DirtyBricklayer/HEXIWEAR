#ifdef MIKROMEDIA_5_TIVA

#define __MIKROBUS1_AN_PIN_PORT         E_AHB
#define __MIKROBUS1_AN_PIN          		3
#define __MIKROBUS1_RST_PIN_PORT        D_AHB
#define __MIKROBUS1_RST_PIN         		1
#define __MIKROBUS1_CS_PIN_PORT         Q
#define __MIKROBUS1_CS_PIN          		1
#define __MIKROBUS1_PWM_PIN_PORT        L
#define __MIKROBUS1_PWM_PIN         		4
#define __MIKROBUS1_PIN_PIN_PORT        E_AHB
#define __MIKROBUS1_INT_PIN         		7

#define __MIKROBUS2_AN_PIN_PORT         E_AHB
#define __MIKROBUS2_AN_PIN          		2
#define __MIKROBUS2_RTS_PIN_PORT        D_AHB
#define __MIKROBUS2_RST_PIN         		0
#define __MIKROBUS2_CS_PIN_PORT         B_AHB
#define __MIKROBUS2_CS_PIN          		6
#define __MIKROBUS2_PWM_PIN_PORT        L
#define __MIKROBUS2_PWM_PIN         		5
#define __MIKROBUS2_INT_PIN_PORT        P
#define __MIKROBUS2_INT_PIN         		4

#define __MIKROBUS3_AN_PIN_PORT         E_AHB
#define __MIKROBUS3_AN_PIN          		1
#define __MIKROBUS3_RST_PIN_PORT        F_AHB
#define __MIKROBUS3_RST_PIN         		2
#define __MIKROBUS3_CS_PIN_PORT         G_AHB
#define __MIKROBUS3_CS_PIN          		6
#define __MIKROBUS3_PWM_PIN_PORT        M
#define __MIKROBUS3_PWM_PIN         		4
#define __MIKROBUS3_INT_PIN_PORT        P
#define __MIKROBUS3_INT_PIN         		0

#define __MIKROBUS4_AN_PIN_PORT         E_AHB
#define __MIKROBUS4_AN_PIN          		0
#define __MIKROBUS4_RST_PIN_PORT        F_AHB
#define __MIKROBUS4_RST_PIN         		3
#define __MIKROBUS4_CS_PIN_PORT         B_AHB
#define __MIKROBUS4_CS_PIN          		7
#define __MIKROBUS4_PWM_PIN_PORT        M
#define __MIKROBUS4_PWM_PIN         		5
#define __MIKROBUS4_INT_PIN_PORT        P
#define __MIKROBUS4_INT_PIN         		1

#define MIKROBUS1_PIN_AN_INPUT          GPIO_PORTE_AHB_DATA.B3
#define MIKROBUS1_PIN_AN_OUTPUT         GPIO_PORTE_AHB_DATA.B3
#define MIKROBUS1_PIN_RST_INPUT         GPIO_PORTD_AHB_DATA.B1
#define MIKROBUS1_PIN_RST_OUTPUT        GPIO_PORTD_AHB_DATA.B1
#define MIKROBUS1_PIN_CS_INPUT          GPIO_PORTQ_DATA.B1
#define MIKROBUS1_PIN_CS_OUTPUT         GPIO_PORTQ_DATA.B1
#define MIKROBUS1_PIN_PWM_INPUT         GPIO_PORTL_DATA.B4
#define MIKROBUS1_PIN_PWM_OUTPUT        GPIO_PORTL_DATA.B4
#define MIKROBUS1_PIN_INT_INPUT         GPIO_PORTE_AHB_DATA.B7
#define MIKROBUS1_PIN_INT_OUTPUT        GPIO_PORTE_AHB_DATA.B7

#define MIKROBUS2_PIN_AN_INPUT          GPIO_PORTE_AHB_DATA.B2
#define MIKROBUS2_PIN_AN_OUTPUT         GPIO_PORTE_AHB_DATA.B2
#define MIKROBUS2_PIN_RST_INPUT         GPIO_PORTD_AHB_DATA.B0
#define MIKROBUS2_PIN_RST_OUTPUT        GPIO_PORTD_AHB_DATA.B0
#define MIKROBUS2_PIN_CS_INPUT          GPIO_PORTB_AHB_DATA.B6
#define MIKROBUS2_PIN_CS_OUTPUT         GPIO_PORTB_AHB_DATA.B6
#define MIKROBUS2_PIN_PWM_INPUT         GPIO_PORTL_DATA.B5
#define MIKROBUS2_PIN_PWM_OUTPUT        GPIO_PORTL_DATA.B5
#define MIKROBUS2_PIN_INT_INPUT         GPIO_PORTP_DATA.B4
#define MIKROBUS2_PIN_INT_OUTPUT        GPIO_PORTP_DATA.B4

#define MIKROBUS3_PIN_AN_INPUT          GPIO_PORTE_AHB_DATA.B1
#define MIKROBUS3_PIN_AN_OUTPUT         GPIO_PORTE_AHB_DATA.B1
#define MIKROBUS3_PIN_RST_INPUT         GPIO_PORTF_AHB_DATA.B2
#define MIKROBUS3_PIN_RST_OUTPUT        GPIO_PORTF_AHB_DATA.B2
#define MIKROBUS3_PIN_CS_INPUT          GPIO_PORTG_AHB_DATA.B6
#define MIKROBUS3_PIN_CS_OUTPUT         GPIO_PORTG_AHB_DATA.B6
#define MIKROBUS3_PIN_PWM_INPUT         GPIO_PORTM_DATA.B4
#define MIKROBUS3_PIN_PWM_OUTPUT        GPIO_PORTM_DATA.B4
#define MIKROBUS3_PIN_INT_INPUT         GPIO_PORTP_DATA.B0
#define MIKROBUS3_PIN_INT_OUTPUT        GPIO_PORTP_DATA.B0

#define MIKROBUS4_PIN_AN_INPUT          GPIO_PORTE_AHB_DATA.B0
#define MIKROBUS4_PIN_AN_OUTPUT         GPIO_PORTE_AHB_DATA.B0
#define MIKROBUS4_PIN_RST_INPUT         GPIO_PORTF_AHB_DATA.B3
#define MIKROBUS4_PIN_RST_OUTPUT        GPIO_PORTF_AHB_DATA.B3
#define MIKROBUS4_PIN_CS_INPUT          GPIO_PORTB_AHB_DATA.B7
#define MIKROBUS4_PIN_CS_OUTPUT         GPIO_PORTB_AHB_DATA.B7
#define MIKROBUS4_PIN_PWM_INPUT         GPIO_PORTM_DATA.B5
#define MIKROBUS4_PIN_PWM_OUTPUT        GPIO_PORTM_DATA.B5
#define MIKROBUS4_PIN_INT_INPUT         GPIO_PORTP_DATA.B1
#define MIKROBUS4_PIN_INT_OUTPUT        GPIO_PORTP_DATA.B1

#endif