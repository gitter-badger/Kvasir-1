#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//System Mode Controller
    namespace SmcPmprot{    ///<Power Mode Protection Register
        using Addr = Register::Address<0x4007e000,0xffffffd5,0,unsigned char>;
        ///Allow very low leakage stop mode
        enum class AvllsVal {
            v0=0x00000000,     ///<Any VLLSx mode is not allowed
            v1=0x00000001,     ///<Any VLLSx mode is allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,AvllsVal> avlls{}; 
        namespace AvllsValC{
            constexpr Register::FieldValue<decltype(avlls)::Type,AvllsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(avlls)::Type,AvllsVal::v1> v1{};
        }
        ///Allow low leakage stop mode
        enum class AllsVal {
            v0=0x00000000,     ///<LLS is not allowed
            v1=0x00000001,     ///<LLS is allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,AllsVal> alls{}; 
        namespace AllsValC{
            constexpr Register::FieldValue<decltype(alls)::Type,AllsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(alls)::Type,AllsVal::v1> v1{};
        }
        ///Allow very low power modes
        enum class AvlpVal {
            v0=0x00000000,     ///<VLPR, VLPW and VLPS are not allowed
            v1=0x00000001,     ///<VLPR, VLPW and VLPS are allowed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,AvlpVal> avlp{}; 
        namespace AvlpValC{
            constexpr Register::FieldValue<decltype(avlp)::Type,AvlpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(avlp)::Type,AvlpVal::v1> v1{};
        }
    }
    namespace SmcPmctrl{    ///<Power Mode Control Register
        using Addr = Register::Address<0x4007e001,0xffffff10,0,unsigned char>;
        ///Stop Mode Control
        enum class StopmVal {
            v000=0x00000000,     ///<Normal stop (STOP)
            v001=0x00000001,     ///<Reserved
            v010=0x00000002,     ///<Very low power stop (VLPS)
            v011=0x00000003,     ///<Low leakage stop (LLS)
            v100=0x00000004,     ///<Very low leakage stop (VLLSx)
            v101=0x00000005,     ///<Reserved
            v110=0x00000006,     ///<Reseved
            v111=0x00000007,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,StopmVal> stopm{}; 
        namespace StopmValC{
            constexpr Register::FieldValue<decltype(stopm)::Type,StopmVal::v000> v000{};
            constexpr Register::FieldValue<decltype(stopm)::Type,StopmVal::v001> v001{};
            constexpr Register::FieldValue<decltype(stopm)::Type,StopmVal::v010> v010{};
            constexpr Register::FieldValue<decltype(stopm)::Type,StopmVal::v011> v011{};
            constexpr Register::FieldValue<decltype(stopm)::Type,StopmVal::v100> v100{};
            constexpr Register::FieldValue<decltype(stopm)::Type,StopmVal::v101> v101{};
            constexpr Register::FieldValue<decltype(stopm)::Type,StopmVal::v110> v110{};
            constexpr Register::FieldValue<decltype(stopm)::Type,StopmVal::v111> v111{};
        }
        ///Stop Aborted
        enum class StopaVal {
            v0=0x00000000,     ///<The previous stop mode entry was successsful.
            v1=0x00000001,     ///<The previous stop mode entry was aborted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,StopaVal> stopa{}; 
        namespace StopaValC{
            constexpr Register::FieldValue<decltype(stopa)::Type,StopaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(stopa)::Type,StopaVal::v1> v1{};
        }
        ///Run Mode Control
        enum class RunmVal {
            v00=0x00000000,     ///<Normal run mode (RUN)
            v01=0x00000001,     ///<Reserved
            v10=0x00000002,     ///<Very low power run mode (VLPR)
            v11=0x00000003,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,RunmVal> runm{}; 
        namespace RunmValC{
            constexpr Register::FieldValue<decltype(runm)::Type,RunmVal::v00> v00{};
            constexpr Register::FieldValue<decltype(runm)::Type,RunmVal::v01> v01{};
            constexpr Register::FieldValue<decltype(runm)::Type,RunmVal::v10> v10{};
            constexpr Register::FieldValue<decltype(runm)::Type,RunmVal::v11> v11{};
        }
        ///Low Power Wake Up on Interrupt
        enum class LpwuiVal {
            v0=0x00000000,     ///<The system remains in a VLP mode on an interrupt
            v1=0x00000001,     ///<The system exits to normal RUN mode on an interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,LpwuiVal> lpwui{}; 
        namespace LpwuiValC{
            constexpr Register::FieldValue<decltype(lpwui)::Type,LpwuiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lpwui)::Type,LpwuiVal::v1> v1{};
        }
    }
    namespace SmcVllsctrl{    ///<VLLS Control Register
        using Addr = Register::Address<0x4007e002,0xfffffff8,0,unsigned char>;
        ///VLLS Mode Control
        enum class VllsmVal {
            v000=0x00000000,     ///<Reserved
            v001=0x00000001,     ///<VLLS1
            v010=0x00000002,     ///<VLLS2
            v011=0x00000003,     ///<VLLS3
            v100=0x00000004,     ///<Reserved
            v101=0x00000005,     ///<Reserved
            v110=0x00000006,     ///<Reserved
            v111=0x00000007,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,VllsmVal> vllsm{}; 
        namespace VllsmValC{
            constexpr Register::FieldValue<decltype(vllsm)::Type,VllsmVal::v000> v000{};
            constexpr Register::FieldValue<decltype(vllsm)::Type,VllsmVal::v001> v001{};
            constexpr Register::FieldValue<decltype(vllsm)::Type,VllsmVal::v010> v010{};
            constexpr Register::FieldValue<decltype(vllsm)::Type,VllsmVal::v011> v011{};
            constexpr Register::FieldValue<decltype(vllsm)::Type,VllsmVal::v100> v100{};
            constexpr Register::FieldValue<decltype(vllsm)::Type,VllsmVal::v101> v101{};
            constexpr Register::FieldValue<decltype(vllsm)::Type,VllsmVal::v110> v110{};
            constexpr Register::FieldValue<decltype(vllsm)::Type,VllsmVal::v111> v111{};
        }
    }
    namespace SmcPmstat{    ///<Power Mode Status Register
        using Addr = Register::Address<0x4007e003,0xffffff80,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> pmstat{}; 
    }
}
