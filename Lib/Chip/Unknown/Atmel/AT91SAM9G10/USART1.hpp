#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Universal Synchronous Asynchronous Receiver Transmitter 1
    namespace Usart1Cr{    ///<Control Register
        using Addr = Register::Address<0xfffb4000,0xfff30003,0,unsigned>;
        ///Reset Receiver
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rstrx{}; 
        ///Reset Transmitter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rsttx{}; 
        ///Receiver Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxen{}; 
        ///Receiver Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxdis{}; 
        ///Transmitter Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txen{}; 
        ///Transmitter Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txdis{}; 
        ///Reset Status Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rststa{}; 
        ///Start Break
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sttbrk{}; 
        ///Stop Break
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> stpbrk{}; 
        ///Start Time-out
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> sttto{}; 
        ///Send Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> senda{}; 
        ///Reset Iterations
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rstit{}; 
        ///Reset Non Acknowledge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rstnack{}; 
        ///Rearm Time-out
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> retto{}; 
        ///Request to Send Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rtsen{}; 
        ///Request to Send Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rtsdis{}; 
    }
    namespace Usart1Mr{    ///<Mode Register
        using Addr = Register::Address<0xfffb4004,0x08800000,0,unsigned>;
        ///USART Mode of Operation
        enum class UsartmodeVal {
            normal=0x00000000,     ///<Normal mode
            rs485=0x00000001,     ///<RS485
            hwHandshaking=0x00000002,     ///<Hardware Handshaking
            is07816T0=0x00000004,     ///<IS07816 Protocol: T = 0
            is07816T1=0x00000006,     ///<IS07816 Protocol: T = 1
            irda=0x00000008,     ///<IrDA
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,UsartmodeVal> usartMode{}; 
        namespace UsartmodeValC{
            constexpr Register::FieldValue<decltype(usartMode)::Type,UsartmodeVal::normal> normal{};
            constexpr Register::FieldValue<decltype(usartMode)::Type,UsartmodeVal::rs485> rs485{};
            constexpr Register::FieldValue<decltype(usartMode)::Type,UsartmodeVal::hwHandshaking> hwHandshaking{};
            constexpr Register::FieldValue<decltype(usartMode)::Type,UsartmodeVal::is07816T0> is07816T0{};
            constexpr Register::FieldValue<decltype(usartMode)::Type,UsartmodeVal::is07816T1> is07816T1{};
            constexpr Register::FieldValue<decltype(usartMode)::Type,UsartmodeVal::irda> irda{};
        }
        ///Clock Selection
        enum class UsclksVal {
            mck=0x00000000,     ///<Master Clock MCK is selected
            div=0x00000001,     ///<Internal Clock Divided MCK/DIV (DIV=8) is selected
            sck=0x00000003,     ///<Serial Clock SLK is selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,UsclksVal> usclks{}; 
        namespace UsclksValC{
            constexpr Register::FieldValue<decltype(usclks)::Type,UsclksVal::mck> mck{};
            constexpr Register::FieldValue<decltype(usclks)::Type,UsclksVal::div> div{};
            constexpr Register::FieldValue<decltype(usclks)::Type,UsclksVal::sck> sck{};
        }
        ///Character Length.
        enum class ChrlVal {
            v5Bit=0x00000000,     ///<Character length is 5 bits
            v6Bit=0x00000001,     ///<Character length is 6 bits
            v7Bit=0x00000002,     ///<Character length is 7 bits
            v8Bit=0x00000003,     ///<Character length is 8 bits
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,ChrlVal> chrl{}; 
        namespace ChrlValC{
            constexpr Register::FieldValue<decltype(chrl)::Type,ChrlVal::v5Bit> v5Bit{};
            constexpr Register::FieldValue<decltype(chrl)::Type,ChrlVal::v6Bit> v6Bit{};
            constexpr Register::FieldValue<decltype(chrl)::Type,ChrlVal::v7Bit> v7Bit{};
            constexpr Register::FieldValue<decltype(chrl)::Type,ChrlVal::v8Bit> v8Bit{};
        }
        ///Synchronous Mode Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sync{}; 
        ///Parity Type
        enum class ParVal {
            even=0x00000000,     ///<Even parity
            odd=0x00000001,     ///<Odd parity
            space=0x00000002,     ///<Parity forced to 0 (Space)
            mark=0x00000003,     ///<Parity forced to 1 (Mark)
            no=0x00000004,     ///<No parity
            multidrop=0x00000006,     ///<Multidrop mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,ParVal> par{}; 
        namespace ParValC{
            constexpr Register::FieldValue<decltype(par)::Type,ParVal::even> even{};
            constexpr Register::FieldValue<decltype(par)::Type,ParVal::odd> odd{};
            constexpr Register::FieldValue<decltype(par)::Type,ParVal::space> space{};
            constexpr Register::FieldValue<decltype(par)::Type,ParVal::mark> mark{};
            constexpr Register::FieldValue<decltype(par)::Type,ParVal::no> no{};
            constexpr Register::FieldValue<decltype(par)::Type,ParVal::multidrop> multidrop{};
        }
        ///Number of Stop Bits
        enum class NbstopVal {
            v1Bit=0x00000000,     ///<1 stop bit
            v15Bit=0x00000001,     ///<1.5 stop bit (SYNC = 0) or reserved (SYNC = 1)
            v2Bit=0x00000002,     ///<2 stop bits
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,NbstopVal> nbstop{}; 
        namespace NbstopValC{
            constexpr Register::FieldValue<decltype(nbstop)::Type,NbstopVal::v1Bit> v1Bit{};
            constexpr Register::FieldValue<decltype(nbstop)::Type,NbstopVal::v15Bit> v15Bit{};
            constexpr Register::FieldValue<decltype(nbstop)::Type,NbstopVal::v2Bit> v2Bit{};
        }
        ///Channel Mode
        enum class ChmodeVal {
            normal=0x00000000,     ///<Normal Mode
            automatic=0x00000001,     ///<Automatic Echo. Receiver input is connected to the TXD pin.
            localLoopback=0x00000002,     ///<Local Loopback. Transmitter output is connected to the Receiver Input.
            remoteLoopback=0x00000003,     ///<Remote Loopback. RXD pin is internally connected to the TXD pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,ChmodeVal> chmode{}; 
        namespace ChmodeValC{
            constexpr Register::FieldValue<decltype(chmode)::Type,ChmodeVal::normal> normal{};
            constexpr Register::FieldValue<decltype(chmode)::Type,ChmodeVal::automatic> automatic{};
            constexpr Register::FieldValue<decltype(chmode)::Type,ChmodeVal::localLoopback> localLoopback{};
            constexpr Register::FieldValue<decltype(chmode)::Type,ChmodeVal::remoteLoopback> remoteLoopback{};
        }
        ///Bit Order
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> msbf{}; 
        ///9-bit Character Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mode9{}; 
        ///Clock Output Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> clko{}; 
        ///Oversampling Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> over{}; 
        ///Inhibit Non Acknowledge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> inack{}; 
        ///Disable Successive NACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dsnack{}; 
        ///Variable Synchronization of Command/Data Sync Start Frame Delimiter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> varSync{}; 
        ///Maximum Number of Automatic Iteration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> maxIteration{}; 
        ///Infrared Receive Line Filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> filter{}; 
        ///Manchester Encoder/Decoder Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> man{}; 
        ///Manchester Synchronization Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> modsync{}; 
        ///Start Frame Delimiter Selector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> onebit{}; 
    }
    namespace Usart1Ier{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xfffb4008,0xfff7c000,0,unsigned>;
        ///RXRDY Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///TXRDY Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Receiver Break Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxbrk{}; 
        ///End of Receive Transfer Interrupt Enable (available in all USART modes of operation)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///End of Transmit Interrupt Enable (available in all USART modes of operation)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///Overrun Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///Framing Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> frame{}; 
        ///Parity Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pare{}; 
        ///Time-out Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> timeout{}; 
        ///TXEMPTY Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Max number of Repetitions Reached Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> iter{}; 
        ///Buffer Empty Interrupt Enable (available in all USART modes of operation)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txbufe{}; 
        ///Buffer Full Interrupt Enable (available in all USART modes of operation)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        ///Non AcknowledgeInterrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nack{}; 
        ///Clear to Send Input Change Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ctsic{}; 
    }
    namespace Usart1Idr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xfffb400c,0xfff7c000,0,unsigned>;
        ///RXRDY Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///TXRDY Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Receiver Break Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxbrk{}; 
        ///End of Receive Transfer Interrupt Disable (available in all USART modes of operation)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///End of Transmit Interrupt Disable (available in all USART modes of operation)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///Overrun Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///Framing Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> frame{}; 
        ///Parity Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pare{}; 
        ///Time-out Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> timeout{}; 
        ///TXEMPTY Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Max Number of Repetitions Reached Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> iter{}; 
        ///Buffer Empty Interrupt Disable (available in all USART modes of operation)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txbufe{}; 
        ///Buffer Full Interrupt Disable (available in all USART modes of operation)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        ///Non AcknowledgeInterrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nack{}; 
        ///Clear to Send Input Change Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ctsic{}; 
    }
    namespace Usart1Imr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xfffb4010,0xfff7c000,0,unsigned>;
        ///RXRDY Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///TXRDY Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Receiver Break Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxbrk{}; 
        ///End of Receive Transfer Interrupt Mask (available in all USART modes of operation)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///End of Transmit Interrupt Mask (available in all USART modes of operation)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///Overrun Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///Framing Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> frame{}; 
        ///Parity Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pare{}; 
        ///Time-out Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> timeout{}; 
        ///TXEMPTY Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Max Number of Repetitions Reached Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> iter{}; 
        ///Buffer Empty Interrupt Mask (available in all USART modes of operation)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txbufe{}; 
        ///Buffer Full Interrupt Mask (available in all USART modes of operation)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        ///Non AcknowledgeInterrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nack{}; 
        ///Clear to Send Input Change Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ctsic{}; 
    }
    namespace Usart1Csr{    ///<Channel Status Register
        using Addr = Register::Address<0xfffb4014,0xfe77c000,0,unsigned>;
        ///Receiver Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Transmitter Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Break Received/End of Break
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxbrk{}; 
        ///End of Receiver Transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///End of Transmitter Transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///Overrun Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///Framing Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> frame{}; 
        ///Parity Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pare{}; 
        ///Receiver Time-out
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> timeout{}; 
        ///Transmitter Empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///MaxNumber of Repetitions Reached
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> iter{}; 
        ///Transmission Buffer Empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txbufe{}; 
        ///Reception Buffer Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        ///Non AcknowledgeInterrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nack{}; 
        ///Clear to Send Input Change Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ctsic{}; 
        ///Image of CTS Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> cts{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rr{}; 
    }
    namespace Usart1Rhr{    ///<Receiver Holding Register
        using Addr = Register::Address<0xfffb4018,0xffff7e00,0,unsigned>;
        ///Received Character
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> rxchr{}; 
        ///Received Sync
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxsynh{}; 
    }
    namespace Usart1Thr{    ///<Transmitter Holding Register
        using Addr = Register::Address<0xfffb401c,0xffff7e00,0,unsigned>;
        ///Character to be Transmitted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> txchr{}; 
        ///Sync Field to be Transmitted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> txsynh{}; 
    }
    namespace Usart1Brgr{    ///<Baud Rate Generator Register
        using Addr = Register::Address<0xfffb4020,0xfff80000,0,unsigned>;
        ///Clock Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cd{}; 
        ///Fractional Part
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> fp{}; 
    }
    namespace Usart1Rtor{    ///<Receiver Time-out Register
        using Addr = Register::Address<0xfffb4024,0xffff0000,0,unsigned>;
        ///Time-out Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> to{}; 
    }
    namespace Usart1Ttgr{    ///<Transmitter Timeguard Register
        using Addr = Register::Address<0xfffb4028,0xffffff00,0,unsigned>;
        ///Timeguard Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tg{}; 
    }
    namespace Usart1Fidi{    ///<FI DI Ratio Register
        using Addr = Register::Address<0xfffb4040,0xfffff800,0,unsigned>;
        ///FI Over DI Ratio Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> fiDiRatio{}; 
    }
    namespace Usart1Ner{    ///<Number of Errors Register
        using Addr = Register::Address<0xfffb4044,0xffffff00,0,unsigned>;
        ///Number of Errors
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> nbErrors{}; 
    }
    namespace Usart1If{    ///<IrDA Filter Register
        using Addr = Register::Address<0xfffb404c,0xffffff00,0,unsigned>;
        ///IrDA Filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> irdaFilter{}; 
    }
    namespace Usart1Man{    ///<Manchester Encoder Decoder Register
        using Addr = Register::Address<0xfffb4050,0x8cf0ecf0,0,unsigned>;
        ///Transmitter Preamble Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> txPl{}; 
        ///Transmitter Preamble Pattern
        enum class TxppVal {
            allOne=0x00000000,     ///<The preamble is composed of '1's
            allZero=0x00000001,     ///<The preamble is composed of '0's
            zeroOne=0x00000002,     ///<The preamble is composed of '01's
            oneZero=0x00000003,     ///<The preamble is composed of '10's
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,TxppVal> txPp{}; 
        namespace TxppValC{
            constexpr Register::FieldValue<decltype(txPp)::Type,TxppVal::allOne> allOne{};
            constexpr Register::FieldValue<decltype(txPp)::Type,TxppVal::allZero> allZero{};
            constexpr Register::FieldValue<decltype(txPp)::Type,TxppVal::zeroOne> zeroOne{};
            constexpr Register::FieldValue<decltype(txPp)::Type,TxppVal::oneZero> oneZero{};
        }
        ///Transmitter Manchester Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txMpol{}; 
        ///Receiver Preamble Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> rxPl{}; 
        ///Receiver Preamble Pattern detected
        enum class RxppVal {
            allOne=0x00000000,     ///<The preamble is composed of '1's
            allZero=0x00000001,     ///<The preamble is composed of '0's
            zeroOne=0x00000002,     ///<The preamble is composed of '01's
            oneZero=0x00000003,     ///<The preamble is composed of '10's
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,RxppVal> rxPp{}; 
        namespace RxppValC{
            constexpr Register::FieldValue<decltype(rxPp)::Type,RxppVal::allOne> allOne{};
            constexpr Register::FieldValue<decltype(rxPp)::Type,RxppVal::allZero> allZero{};
            constexpr Register::FieldValue<decltype(rxPp)::Type,RxppVal::zeroOne> zeroOne{};
            constexpr Register::FieldValue<decltype(rxPp)::Type,RxppVal::oneZero> oneZero{};
        }
        ///Receiver Manchester Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> rxMpol{}; 
        ///Must Be Set to 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> one{}; 
        ///Drift Compensation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> drift{}; 
    }
    namespace Usart1Rpr{    ///<Receive Pointer Register
        using Addr = Register::Address<0xfffb4100,0x00000000,0,unsigned>;
        ///Receive Pointer Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxptr{}; 
    }
    namespace Usart1Rcr{    ///<Receive Counter Register
        using Addr = Register::Address<0xfffb4104,0xffff0000,0,unsigned>;
        ///Receive Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxctr{}; 
    }
    namespace Usart1Tpr{    ///<Transmit Pointer Register
        using Addr = Register::Address<0xfffb4108,0x00000000,0,unsigned>;
        ///Transmit Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txptr{}; 
    }
    namespace Usart1Tcr{    ///<Transmit Counter Register
        using Addr = Register::Address<0xfffb410c,0xffff0000,0,unsigned>;
        ///Transmit Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txctr{}; 
    }
    namespace Usart1Rnpr{    ///<Receive Next Pointer Register
        using Addr = Register::Address<0xfffb4110,0x00000000,0,unsigned>;
        ///Receive Next Pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxnptr{}; 
    }
    namespace Usart1Rncr{    ///<Receive Next Counter Register
        using Addr = Register::Address<0xfffb4114,0xffff0000,0,unsigned>;
        ///Receive Next Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxnctr{}; 
    }
    namespace Usart1Tnpr{    ///<Transmit Next Pointer Register
        using Addr = Register::Address<0xfffb4118,0x00000000,0,unsigned>;
        ///Transmit Next Pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txnptr{}; 
    }
    namespace Usart1Tncr{    ///<Transmit Next Counter Register
        using Addr = Register::Address<0xfffb411c,0xffff0000,0,unsigned>;
        ///Transmit Counter Next
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txnctr{}; 
    }
    namespace Usart1Ptcr{    ///<Transfer Control Register
        using Addr = Register::Address<0xfffb4120,0xfffffcfc,0,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxten{}; 
        ///Receiver Transfer Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxtdis{}; 
        ///Transmitter Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txten{}; 
        ///Transmitter Transfer Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txtdis{}; 
    }
    namespace Usart1Ptsr{    ///<Transfer Status Register
        using Addr = Register::Address<0xfffb4124,0xfffffefe,0,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxten{}; 
        ///Transmitter Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txten{}; 
    }
}
