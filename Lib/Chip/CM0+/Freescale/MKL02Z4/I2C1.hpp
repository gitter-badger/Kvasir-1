#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Inter-Integrated Circuit
    namespace I2c1A1{    ///<I2C Address Register 1
        using Addr = Register::Address<0x40067000,0xffffff01,0,unsigned char>;
        ///Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> ad{}; 
    }
    namespace I2c1F{    ///<I2C Frequency Divider register
        using Addr = Register::Address<0x40067001,0xffffff00,0,unsigned char>;
        ///ClockRate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> icr{}; 
        ///no description available
        enum class MultVal {
            v00=0x00000000,     ///<mul = 1
            v01=0x00000001,     ///<mul = 2
            v10=0x00000002,     ///<mul = 4
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,MultVal> mult{}; 
        namespace MultValC{
            constexpr Register::FieldValue<decltype(mult)::Type,MultVal::v00> v00{};
            constexpr Register::FieldValue<decltype(mult)::Type,MultVal::v01> v01{};
            constexpr Register::FieldValue<decltype(mult)::Type,MultVal::v10> v10{};
        }
    }
    namespace I2c1C1{    ///<I2C Control Register 1
        using Addr = Register::Address<0x40067002,0xffffff01,0,unsigned char>;
        ///Wakeup Enable
        enum class WuenVal {
            v0=0x00000000,     ///<Normal operation. No interrupt generated when address matching in low power mode.
            v1=0x00000001,     ///<Enables the wakeup function in low power mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,WuenVal> wuen{}; 
        namespace WuenValC{
            constexpr Register::FieldValue<decltype(wuen)::Type,WuenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wuen)::Type,WuenVal::v1> v1{};
        }
        ///Repeat START
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rsta{}; 
        ///Transmit Acknowledge Enable
        enum class TxakVal {
            v0=0x00000000,     ///<An acknowledge signal is sent to the bus on the following receiving byte
            v1=0x00000001,     ///<No acknowledge signal is sent to the bus on the following receiving data byte.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,TxakVal> txak{}; 
        namespace TxakValC{
            constexpr Register::FieldValue<decltype(txak)::Type,TxakVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txak)::Type,TxakVal::v1> v1{};
        }
        ///Transmit Mode Select
        enum class TxVal {
            v0=0x00000000,     ///<Receive
            v1=0x00000001,     ///<Transmit
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TxVal> tx{}; 
        namespace TxValC{
            constexpr Register::FieldValue<decltype(tx)::Type,TxVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tx)::Type,TxVal::v1> v1{};
        }
        ///Master Mode Select
        enum class MstVal {
            v0=0x00000000,     ///<Slave mode
            v1=0x00000001,     ///<Master mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,MstVal> mst{}; 
        namespace MstValC{
            constexpr Register::FieldValue<decltype(mst)::Type,MstVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mst)::Type,MstVal::v1> v1{};
        }
        ///I2C Interrupt Enable
        enum class IicieVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,IicieVal> iicie{}; 
        namespace IicieValC{
            constexpr Register::FieldValue<decltype(iicie)::Type,IicieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(iicie)::Type,IicieVal::v1> v1{};
        }
        ///I2C Enable
        enum class IicenVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,IicenVal> iicen{}; 
        namespace IicenValC{
            constexpr Register::FieldValue<decltype(iicen)::Type,IicenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(iicen)::Type,IicenVal::v1> v1{};
        }
    }
    namespace I2c1S{    ///<I2C Status register
        using Addr = Register::Address<0x40067003,0xffffff00,0,unsigned char>;
        ///Receive Acknowledge
        enum class RxakVal {
            v0=0x00000000,     ///<Acknowledge signal was received after the completion of one byte of data transmission on the bus
            v1=0x00000001,     ///<No acknowledge signal detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RxakVal> rxak{}; 
        namespace RxakValC{
            constexpr Register::FieldValue<decltype(rxak)::Type,RxakVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxak)::Type,RxakVal::v1> v1{};
        }
        ///Interrupt Flag
        enum class IicifVal {
            v0=0x00000000,     ///<No interrupt pending
            v1=0x00000001,     ///<Interrupt pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IicifVal> iicif{}; 
        namespace IicifValC{
            constexpr Register::FieldValue<decltype(iicif)::Type,IicifVal::v0> v0{};
            constexpr Register::FieldValue<decltype(iicif)::Type,IicifVal::v1> v1{};
        }
        ///Slave Read/Write
        enum class SrwVal {
            v0=0x00000000,     ///<Slave receive, master writing to slave
            v1=0x00000001,     ///<Slave transmit, master reading from slave
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SrwVal> srw{}; 
        namespace SrwValC{
            constexpr Register::FieldValue<decltype(srw)::Type,SrwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(srw)::Type,SrwVal::v1> v1{};
        }
        ///Range Address Match
        enum class RamVal {
            v0=0x00000000,     ///<Not addressed
            v1=0x00000001,     ///<Addressed as a slave
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,RamVal> ram{}; 
        namespace RamValC{
            constexpr Register::FieldValue<decltype(ram)::Type,RamVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ram)::Type,RamVal::v1> v1{};
        }
        ///Arbitration Lost
        enum class ArblVal {
            v0=0x00000000,     ///<Standard bus operation.
            v1=0x00000001,     ///<Loss of arbitration.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ArblVal> arbl{}; 
        namespace ArblValC{
            constexpr Register::FieldValue<decltype(arbl)::Type,ArblVal::v0> v0{};
            constexpr Register::FieldValue<decltype(arbl)::Type,ArblVal::v1> v1{};
        }
        ///Bus Busy
        enum class BusyVal {
            v0=0x00000000,     ///<Bus is idle
            v1=0x00000001,     ///<Bus is busy
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,BusyVal> busy{}; 
        namespace BusyValC{
            constexpr Register::FieldValue<decltype(busy)::Type,BusyVal::v0> v0{};
            constexpr Register::FieldValue<decltype(busy)::Type,BusyVal::v1> v1{};
        }
        ///Addressed As A Slave
        enum class IaasVal {
            v0=0x00000000,     ///<Not addressed
            v1=0x00000001,     ///<Addressed as a slave
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,IaasVal> iaas{}; 
        namespace IaasValC{
            constexpr Register::FieldValue<decltype(iaas)::Type,IaasVal::v0> v0{};
            constexpr Register::FieldValue<decltype(iaas)::Type,IaasVal::v1> v1{};
        }
        ///Transfer Complete Flag
        enum class TcfVal {
            v0=0x00000000,     ///<Transfer in progress
            v1=0x00000001,     ///<Transfer complete
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TcfVal> tcf{}; 
        namespace TcfValC{
            constexpr Register::FieldValue<decltype(tcf)::Type,TcfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tcf)::Type,TcfVal::v1> v1{};
        }
    }
    namespace I2c1D{    ///<I2C Data I/O register
        using Addr = Register::Address<0x40067004,0xffffff00,0,unsigned char>;
        ///Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace I2c1C2{    ///<I2C Control Register 2
        using Addr = Register::Address<0x40067005,0xffffff00,0,unsigned char>;
        ///Slave Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ad{}; 
        ///Range Address Matching Enable
        enum class RmenVal {
            v0=0x00000000,     ///<Range mode disabled. No address match occurs for an address within the range of values of the A1 and RA registers.
            v1=0x00000001,     ///<Range mode enabled. Address matching occurs when a slave receives an address within the range of values of the A1 and RA registers.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,RmenVal> rmen{}; 
        namespace RmenValC{
            constexpr Register::FieldValue<decltype(rmen)::Type,RmenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rmen)::Type,RmenVal::v1> v1{};
        }
        ///Slave Baud Rate Control
        enum class SbrcVal {
            v0=0x00000000,     ///<The slave baud rate follows the master baud rate and clock stretching may occur
            v1=0x00000001,     ///<Slave baud rate is independent of the master baud rate
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SbrcVal> sbrc{}; 
        namespace SbrcValC{
            constexpr Register::FieldValue<decltype(sbrc)::Type,SbrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sbrc)::Type,SbrcVal::v1> v1{};
        }
        ///High Drive Select
        enum class HdrsVal {
            v0=0x00000000,     ///<Normal drive mode
            v1=0x00000001,     ///<High drive mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HdrsVal> hdrs{}; 
        namespace HdrsValC{
            constexpr Register::FieldValue<decltype(hdrs)::Type,HdrsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hdrs)::Type,HdrsVal::v1> v1{};
        }
        ///Address Extension
        enum class AdextVal {
            v0=0x00000000,     ///<7-bit address scheme
            v1=0x00000001,     ///<10-bit address scheme
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,AdextVal> adext{}; 
        namespace AdextValC{
            constexpr Register::FieldValue<decltype(adext)::Type,AdextVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adext)::Type,AdextVal::v1> v1{};
        }
        ///General Call Address Enable
        enum class GcaenVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,GcaenVal> gcaen{}; 
        namespace GcaenValC{
            constexpr Register::FieldValue<decltype(gcaen)::Type,GcaenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(gcaen)::Type,GcaenVal::v1> v1{};
        }
    }
    namespace I2c1Flt{    ///<I2C Programmable Input Glitch Filter register
        using Addr = Register::Address<0x40067006,0xffffff00,0,unsigned char>;
        ///I2C Programmable Filter Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> flt{}; 
        ///I2C Bus Start Detect Flag
        enum class StartfVal {
            v0=0x00000000,     ///<No start happens on I2C bus
            v1=0x00000001,     ///<Start detected on I2C bus
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,StartfVal> startf{}; 
        namespace StartfValC{
            constexpr Register::FieldValue<decltype(startf)::Type,StartfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(startf)::Type,StartfVal::v1> v1{};
        }
        ///I2C Bus Stop or Start Interrupt Enable
        enum class SsieVal {
            v0=0x00000000,     ///<Stop or start detection interrupt is disabled
            v1=0x00000001,     ///<Stop or start detection interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SsieVal> ssie{}; 
        namespace SsieValC{
            constexpr Register::FieldValue<decltype(ssie)::Type,SsieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ssie)::Type,SsieVal::v1> v1{};
        }
        ///I2C Bus Stop Detect Flag
        enum class StopfVal {
            v0=0x00000000,     ///<No stop happens on I2C bus
            v1=0x00000001,     ///<Stop detected on I2C bus
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,StopfVal> stopf{}; 
        namespace StopfValC{
            constexpr Register::FieldValue<decltype(stopf)::Type,StopfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(stopf)::Type,StopfVal::v1> v1{};
        }
        ///Stop Hold Enable
        enum class ShenVal {
            v0=0x00000000,     ///<Stop holdoff is disabled. The MCU's entry to stop mode is not gated.
            v1=0x00000001,     ///<Stop holdoff is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ShenVal> shen{}; 
        namespace ShenValC{
            constexpr Register::FieldValue<decltype(shen)::Type,ShenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(shen)::Type,ShenVal::v1> v1{};
        }
    }
    namespace I2c1Ra{    ///<I2C Range Address register
        using Addr = Register::Address<0x40067007,0xffffff01,0,unsigned char>;
        ///Range Slave Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> rad{}; 
    }
}
