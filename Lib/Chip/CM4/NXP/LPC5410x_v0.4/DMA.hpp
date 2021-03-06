#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//DMA controller
    namespace Nonectrl{    ///<DMA control.
        using Addr = Register::Address<0x1c004000,0xfffffffe,0,unsigned>;
        ///DMA controller master enable.
        enum class EnableVal {
            disabled=0x00000000,     ///<Disabled. The DMA controller is disabled. This
										clears any triggers that were asserted at the point when
										disabled, but does not prevent re-triggering when the DMA
										controller is re-enabled.
            enabled=0x00000001,     ///<Enabled. The DMA controller is
										enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnableVal> enable{}; 
        namespace EnableValC{
            constexpr Register::FieldValue<decltype(enable)::Type,EnableVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(enable)::Type,EnableVal::enabled> enabled{};
        }
    }
    namespace Noneintstat{    ///<Interrupt status.
        using Addr = Register::Address<0x1c004004,0xfffffff9,0,unsigned>;
        ///Summarizes whether any enabled interrupts (other than error
								interrupts) are pending.
        enum class ActiveintVal {
            notPending=0x00000000,     ///<Not pending. No enabled interrupts are
										pending.
            pending=0x00000001,     ///<Pending. At least one enabled interrupt is
										pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ActiveintVal> activeint{}; 
        namespace ActiveintValC{
            constexpr Register::FieldValue<decltype(activeint)::Type,ActiveintVal::notPending> notPending{};
            constexpr Register::FieldValue<decltype(activeint)::Type,ActiveintVal::pending> pending{};
        }
        ///Summarizes whether any error interrupts are
								pending.
        enum class ActiveerrintVal {
            notPending=0x00000000,     ///<Not pending. No error interrupts are
										pending.
            pending=0x00000001,     ///<Pending. At least one error interrupt is
										pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ActiveerrintVal> activeerrint{}; 
        namespace ActiveerrintValC{
            constexpr Register::FieldValue<decltype(activeerrint)::Type,ActiveerrintVal::notPending> notPending{};
            constexpr Register::FieldValue<decltype(activeerrint)::Type,ActiveerrintVal::pending> pending{};
        }
    }
    namespace Nonesrambase{    ///<SRAM address of the channel configuration table.
        using Addr = Register::Address<0x1c004008,0x000001ff,0,unsigned>;
        ///Address bits 31:9 of the beginning of the DMA descriptor
								table. For 18 channels, the table must begin on a 512 byte
								boundary.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace Noneenableset0{    ///<Channel Enable read and Set for all DMA channels.
        using Addr = Register::Address<0x1c004020,0xffc00000,0,unsigned>;
        ///Enable for DMA channels. Bit n enables or disables DMA
								channel n. 0 = disabled. 1 = enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,0),Register::ReadWriteAccess,unsigned> ena{}; 
    }
    namespace Noneenableclr0{    ///<Channel Enable Clear for all DMA channels.
        using Addr = Register::Address<0x1c004028,0xffc00000,0,unsigned>;
        ///Writing ones to this register clears the corresponding bits
								in ENABLESET0. Bit n clears the channel enable bit n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,0),Register::ReadWriteAccess,unsigned> clr{}; 
    }
    namespace Noneactive0{    ///<Channel Active status for all DMA channels.
        using Addr = Register::Address<0x1c004030,0xffc00000,0,unsigned>;
        ///Active flag for DMA channel n. Bit n corresponds to DMA
								channel n. 0 = not active. 1 = active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,0),Register::ReadWriteAccess,unsigned> act{}; 
    }
    namespace Nonebusy0{    ///<Channel Busy status for all DMA channels.
        using Addr = Register::Address<0x1c004038,0xffc00000,0,unsigned>;
        ///Busy flag for DMA channel n. Bit n corresponds to DMA
								channel n. 0 = not busy. 1 = busy.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,0),Register::ReadWriteAccess,unsigned> bsy{}; 
    }
    namespace Noneerrint0{    ///<Error Interrupt status for all DMA channels.
        using Addr = Register::Address<0x1c004040,0xffc00000,0,unsigned>;
        ///Error Interrupt flag for DMA channel n. Bit n corresponds
								to DMA channel n. 0 = error interrupt is not active. 1 = error
								interrupt is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,0),Register::ReadWriteAccess,unsigned> err{}; 
    }
    namespace Noneintenset0{    ///<Interrupt Enable read and Set for all DMA channels.
        using Addr = Register::Address<0x1c004048,0xffc00000,0,unsigned>;
        ///Interrupt Enable read and set for DMA channel n. Bit n
								corresponds to DMA channel n. 0 = interrupt for DMA channel is
								disabled. 1 = interrupt for DMA channel is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,0),Register::ReadWriteAccess,unsigned> inten{}; 
    }
    namespace Noneintenclr0{    ///<Interrupt Enable Clear for all DMA channels.
        using Addr = Register::Address<0x1c004050,0xffc00000,0,unsigned>;
        ///Writing ones to this register clears corresponding bits in
								the INTENSET0. Bit n corresponds to DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,0),Register::ReadWriteAccess,unsigned> clr{}; 
    }
    namespace Noneinta0{    ///<Interrupt A status for all DMA channels.
        using Addr = Register::Address<0x1c004058,0xffc00000,0,unsigned>;
        ///Interrupt A status for DMA channel n. Bit n corresponds to
								DMA channel n. 0 = the DMA channel interrupt A is not active. 1 =
								the DMA channel interrupt A is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,0),Register::ReadWriteAccess,unsigned> ia{}; 
    }
    namespace Noneintb0{    ///<Interrupt B status for all DMA channels.
        using Addr = Register::Address<0x1c004060,0xffc00000,0,unsigned>;
        ///Interrupt B status for DMA channel n. Bit n corresponds to
								DMA channel n. 0 = the DMA channel interrupt B is not active. 1 =
								the DMA channel interrupt B is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,0),Register::ReadWriteAccess,unsigned> ib{}; 
    }
    namespace Nonesetvalid0{    ///<Set ValidPending control bits for all DMA channels.
        using Addr = Register::Address<0x1c004068,0xffc00000,0,unsigned>;
        ///SETVALID control for DMA channel n. Bit n corresponds to
								DMA channel n. 0 = no effect. 1 = sets the VALIDPENDING control bit
								for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,0),Register::ReadWriteAccess,unsigned> sv{}; 
    }
    namespace Nonesettrig0{    ///<Set Trigger control bits for all DMA channels.
        using Addr = Register::Address<0x1c004070,0xffc00000,0,unsigned>;
        ///Set Trigger control bit for DMA channel 0. Bit n
								corresponds to DMA channel n. 0 = no effect. 1 = sets the TRIG bit
								for DMA channel n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,0),Register::ReadWriteAccess,unsigned> trig{}; 
    }
    namespace Noneabort0{    ///<Channel Abort control for all DMA channels.
        using Addr = Register::Address<0x1c004078,0xffc00000,0,unsigned>;
        ///Abort control for DMA channel 0. Bit n corresponds to DMA
								channel n. 0 = no effect. 1 = aborts DMA operations on channel
								n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,0),Register::ReadWriteAccess,unsigned> abortctrl{}; 
    }
    namespace Nonecfg0{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004400,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to
								perform a memory-to-memory move, any peripheral DMA request
								associated with that channel can be disabled to prevent any
								interaction between the peripheral and the DMA
								controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are
										disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are
										enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not
										used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::enabled> enabled{};
        }
        ///Trigger Polarity. Selects the polarity of a hardware
								trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is
										active low or falling edge triggered, based on
										TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is
										active high or rising edge triggered, based on
										TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or
								level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered. Transfers
										will be initiated and completed, as specified for a single
										trigger.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note
										that when level triggering without burst (BURSTPOWER = 0) is
										selected, only hardware triggers should be used on that
										channel. Transfers continue as long as the trigger level is
										asserted. Once the trigger is de-asserted, the transfer will
										be paused until the trigger is, again, asserted. However,
										the transfer will not be paused until any remaining
										transfers within the current BURSTPOWER length are
										completed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a
								single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single
										transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel
										is set to edge triggered, a hardware trigger causes a burst
										transfer, as defined by BURSTPOWER. When the trigger for
										this channel is set to level triggered, a hardware trigger
										causes transfers to continue as long as the trigger is
										asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Burst Power is used in two ways. It always selects the
								address wrap size when SRCBURSTWRAP and/or DSTBURSTWRAP modes are
								selected (see descriptions elsewhere in this register). When the
								TRIGBURST field elsewhere in this register = 1, Burst Power selects
								how many transfers are performed for each DMA trigger. This can be
								used, for example, with peripherals that contain a FIFO that can
								initiate a DMA operation when the FIFO reaches a certain level.
								0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst
								size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds
								to the maximum supported transfer count. others: not supported. The
								total transfer length as defined in the XFERCOUNT bits in the
								XFERCFG register must be an even multiple of the burst
								size.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Source Burst Wrap. When enabled, the source data address
								for the DMA is wrapped, meaning that the source address range for
								each burst will be the same. As an example, this could be used to
								read several sequential registers from a peripheral for each DMA
								burst, reading the same registers again for each
								burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for
										this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this
										DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data
								address for the DMA is wrapped, meaning that the destination address
								range for each burst will be the same. As an example, this could be
								used to write several sequential registers to a peripheral for each
								DMA burst, writing the same registers again for each
								burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled
										for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for
										this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are
								pending. Eight priority levels are supported. 0x0 = highest
								priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
    }
    namespace Nonecfg1{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004410,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to
								perform a memory-to-memory move, any peripheral DMA request
								associated with that channel can be disabled to prevent any
								interaction between the peripheral and the DMA
								controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are
										disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are
										enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not
										used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::enabled> enabled{};
        }
        ///Trigger Polarity. Selects the polarity of a hardware
								trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is
										active low or falling edge triggered, based on
										TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is
										active high or rising edge triggered, based on
										TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or
								level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered. Transfers
										will be initiated and completed, as specified for a single
										trigger.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note
										that when level triggering without burst (BURSTPOWER = 0) is
										selected, only hardware triggers should be used on that
										channel. Transfers continue as long as the trigger level is
										asserted. Once the trigger is de-asserted, the transfer will
										be paused until the trigger is, again, asserted. However,
										the transfer will not be paused until any remaining
										transfers within the current BURSTPOWER length are
										completed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a
								single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single
										transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel
										is set to edge triggered, a hardware trigger causes a burst
										transfer, as defined by BURSTPOWER. When the trigger for
										this channel is set to level triggered, a hardware trigger
										causes transfers to continue as long as the trigger is
										asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Burst Power is used in two ways. It always selects the
								address wrap size when SRCBURSTWRAP and/or DSTBURSTWRAP modes are
								selected (see descriptions elsewhere in this register). When the
								TRIGBURST field elsewhere in this register = 1, Burst Power selects
								how many transfers are performed for each DMA trigger. This can be
								used, for example, with peripherals that contain a FIFO that can
								initiate a DMA operation when the FIFO reaches a certain level.
								0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst
								size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds
								to the maximum supported transfer count. others: not supported. The
								total transfer length as defined in the XFERCOUNT bits in the
								XFERCFG register must be an even multiple of the burst
								size.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Source Burst Wrap. When enabled, the source data address
								for the DMA is wrapped, meaning that the source address range for
								each burst will be the same. As an example, this could be used to
								read several sequential registers from a peripheral for each DMA
								burst, reading the same registers again for each
								burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for
										this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this
										DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data
								address for the DMA is wrapped, meaning that the destination address
								range for each burst will be the same. As an example, this could be
								used to write several sequential registers to a peripheral for each
								DMA burst, writing the same registers again for each
								burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled
										for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for
										this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are
								pending. Eight priority levels are supported. 0x0 = highest
								priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
    }
    namespace Nonecfg2{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004420,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to
								perform a memory-to-memory move, any peripheral DMA request
								associated with that channel can be disabled to prevent any
								interaction between the peripheral and the DMA
								controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are
										disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are
										enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not
										used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::enabled> enabled{};
        }
        ///Trigger Polarity. Selects the polarity of a hardware
								trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is
										active low or falling edge triggered, based on
										TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is
										active high or rising edge triggered, based on
										TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or
								level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered. Transfers
										will be initiated and completed, as specified for a single
										trigger.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note
										that when level triggering without burst (BURSTPOWER = 0) is
										selected, only hardware triggers should be used on that
										channel. Transfers continue as long as the trigger level is
										asserted. Once the trigger is de-asserted, the transfer will
										be paused until the trigger is, again, asserted. However,
										the transfer will not be paused until any remaining
										transfers within the current BURSTPOWER length are
										completed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a
								single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single
										transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel
										is set to edge triggered, a hardware trigger causes a burst
										transfer, as defined by BURSTPOWER. When the trigger for
										this channel is set to level triggered, a hardware trigger
										causes transfers to continue as long as the trigger is
										asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Burst Power is used in two ways. It always selects the
								address wrap size when SRCBURSTWRAP and/or DSTBURSTWRAP modes are
								selected (see descriptions elsewhere in this register). When the
								TRIGBURST field elsewhere in this register = 1, Burst Power selects
								how many transfers are performed for each DMA trigger. This can be
								used, for example, with peripherals that contain a FIFO that can
								initiate a DMA operation when the FIFO reaches a certain level.
								0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst
								size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds
								to the maximum supported transfer count. others: not supported. The
								total transfer length as defined in the XFERCOUNT bits in the
								XFERCFG register must be an even multiple of the burst
								size.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Source Burst Wrap. When enabled, the source data address
								for the DMA is wrapped, meaning that the source address range for
								each burst will be the same. As an example, this could be used to
								read several sequential registers from a peripheral for each DMA
								burst, reading the same registers again for each
								burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for
										this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this
										DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data
								address for the DMA is wrapped, meaning that the destination address
								range for each burst will be the same. As an example, this could be
								used to write several sequential registers to a peripheral for each
								DMA burst, writing the same registers again for each
								burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled
										for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for
										this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are
								pending. Eight priority levels are supported. 0x0 = highest
								priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
    }
    namespace Nonecfg3{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004430,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to
								perform a memory-to-memory move, any peripheral DMA request
								associated with that channel can be disabled to prevent any
								interaction between the peripheral and the DMA
								controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are
										disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are
										enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not
										used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::enabled> enabled{};
        }
        ///Trigger Polarity. Selects the polarity of a hardware
								trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is
										active low or falling edge triggered, based on
										TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is
										active high or rising edge triggered, based on
										TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or
								level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered. Transfers
										will be initiated and completed, as specified for a single
										trigger.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note
										that when level triggering without burst (BURSTPOWER = 0) is
										selected, only hardware triggers should be used on that
										channel. Transfers continue as long as the trigger level is
										asserted. Once the trigger is de-asserted, the transfer will
										be paused until the trigger is, again, asserted. However,
										the transfer will not be paused until any remaining
										transfers within the current BURSTPOWER length are
										completed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a
								single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single
										transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel
										is set to edge triggered, a hardware trigger causes a burst
										transfer, as defined by BURSTPOWER. When the trigger for
										this channel is set to level triggered, a hardware trigger
										causes transfers to continue as long as the trigger is
										asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Burst Power is used in two ways. It always selects the
								address wrap size when SRCBURSTWRAP and/or DSTBURSTWRAP modes are
								selected (see descriptions elsewhere in this register). When the
								TRIGBURST field elsewhere in this register = 1, Burst Power selects
								how many transfers are performed for each DMA trigger. This can be
								used, for example, with peripherals that contain a FIFO that can
								initiate a DMA operation when the FIFO reaches a certain level.
								0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst
								size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds
								to the maximum supported transfer count. others: not supported. The
								total transfer length as defined in the XFERCOUNT bits in the
								XFERCFG register must be an even multiple of the burst
								size.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Source Burst Wrap. When enabled, the source data address
								for the DMA is wrapped, meaning that the source address range for
								each burst will be the same. As an example, this could be used to
								read several sequential registers from a peripheral for each DMA
								burst, reading the same registers again for each
								burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for
										this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this
										DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data
								address for the DMA is wrapped, meaning that the destination address
								range for each burst will be the same. As an example, this could be
								used to write several sequential registers to a peripheral for each
								DMA burst, writing the same registers again for each
								burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled
										for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for
										this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are
								pending. Eight priority levels are supported. 0x0 = highest
								priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
    }
    namespace Nonecfg4{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004440,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to
								perform a memory-to-memory move, any peripheral DMA request
								associated with that channel can be disabled to prevent any
								interaction between the peripheral and the DMA
								controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are
										disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are
										enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not
										used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::enabled> enabled{};
        }
        ///Trigger Polarity. Selects the polarity of a hardware
								trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is
										active low or falling edge triggered, based on
										TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is
										active high or rising edge triggered, based on
										TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or
								level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered. Transfers
										will be initiated and completed, as specified for a single
										trigger.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note
										that when level triggering without burst (BURSTPOWER = 0) is
										selected, only hardware triggers should be used on that
										channel. Transfers continue as long as the trigger level is
										asserted. Once the trigger is de-asserted, the transfer will
										be paused until the trigger is, again, asserted. However,
										the transfer will not be paused until any remaining
										transfers within the current BURSTPOWER length are
										completed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a
								single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single
										transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel
										is set to edge triggered, a hardware trigger causes a burst
										transfer, as defined by BURSTPOWER. When the trigger for
										this channel is set to level triggered, a hardware trigger
										causes transfers to continue as long as the trigger is
										asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Burst Power is used in two ways. It always selects the
								address wrap size when SRCBURSTWRAP and/or DSTBURSTWRAP modes are
								selected (see descriptions elsewhere in this register). When the
								TRIGBURST field elsewhere in this register = 1, Burst Power selects
								how many transfers are performed for each DMA trigger. This can be
								used, for example, with peripherals that contain a FIFO that can
								initiate a DMA operation when the FIFO reaches a certain level.
								0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst
								size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds
								to the maximum supported transfer count. others: not supported. The
								total transfer length as defined in the XFERCOUNT bits in the
								XFERCFG register must be an even multiple of the burst
								size.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Source Burst Wrap. When enabled, the source data address
								for the DMA is wrapped, meaning that the source address range for
								each burst will be the same. As an example, this could be used to
								read several sequential registers from a peripheral for each DMA
								burst, reading the same registers again for each
								burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for
										this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this
										DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data
								address for the DMA is wrapped, meaning that the destination address
								range for each burst will be the same. As an example, this could be
								used to write several sequential registers to a peripheral for each
								DMA burst, writing the same registers again for each
								burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled
										for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for
										this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are
								pending. Eight priority levels are supported. 0x0 = highest
								priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
    }
    namespace Nonecfg5{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004450,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to
								perform a memory-to-memory move, any peripheral DMA request
								associated with that channel can be disabled to prevent any
								interaction between the peripheral and the DMA
								controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are
										disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are
										enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not
										used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::enabled> enabled{};
        }
        ///Trigger Polarity. Selects the polarity of a hardware
								trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is
										active low or falling edge triggered, based on
										TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is
										active high or rising edge triggered, based on
										TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or
								level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered. Transfers
										will be initiated and completed, as specified for a single
										trigger.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note
										that when level triggering without burst (BURSTPOWER = 0) is
										selected, only hardware triggers should be used on that
										channel. Transfers continue as long as the trigger level is
										asserted. Once the trigger is de-asserted, the transfer will
										be paused until the trigger is, again, asserted. However,
										the transfer will not be paused until any remaining
										transfers within the current BURSTPOWER length are
										completed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a
								single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single
										transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel
										is set to edge triggered, a hardware trigger causes a burst
										transfer, as defined by BURSTPOWER. When the trigger for
										this channel is set to level triggered, a hardware trigger
										causes transfers to continue as long as the trigger is
										asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Burst Power is used in two ways. It always selects the
								address wrap size when SRCBURSTWRAP and/or DSTBURSTWRAP modes are
								selected (see descriptions elsewhere in this register). When the
								TRIGBURST field elsewhere in this register = 1, Burst Power selects
								how many transfers are performed for each DMA trigger. This can be
								used, for example, with peripherals that contain a FIFO that can
								initiate a DMA operation when the FIFO reaches a certain level.
								0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst
								size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds
								to the maximum supported transfer count. others: not supported. The
								total transfer length as defined in the XFERCOUNT bits in the
								XFERCFG register must be an even multiple of the burst
								size.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Source Burst Wrap. When enabled, the source data address
								for the DMA is wrapped, meaning that the source address range for
								each burst will be the same. As an example, this could be used to
								read several sequential registers from a peripheral for each DMA
								burst, reading the same registers again for each
								burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for
										this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this
										DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data
								address for the DMA is wrapped, meaning that the destination address
								range for each burst will be the same. As an example, this could be
								used to write several sequential registers to a peripheral for each
								DMA burst, writing the same registers again for each
								burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled
										for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for
										this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are
								pending. Eight priority levels are supported. 0x0 = highest
								priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
    }
    namespace Nonecfg6{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004460,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to
								perform a memory-to-memory move, any peripheral DMA request
								associated with that channel can be disabled to prevent any
								interaction between the peripheral and the DMA
								controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are
										disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are
										enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not
										used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::enabled> enabled{};
        }
        ///Trigger Polarity. Selects the polarity of a hardware
								trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is
										active low or falling edge triggered, based on
										TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is
										active high or rising edge triggered, based on
										TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or
								level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered. Transfers
										will be initiated and completed, as specified for a single
										trigger.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note
										that when level triggering without burst (BURSTPOWER = 0) is
										selected, only hardware triggers should be used on that
										channel. Transfers continue as long as the trigger level is
										asserted. Once the trigger is de-asserted, the transfer will
										be paused until the trigger is, again, asserted. However,
										the transfer will not be paused until any remaining
										transfers within the current BURSTPOWER length are
										completed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a
								single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single
										transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel
										is set to edge triggered, a hardware trigger causes a burst
										transfer, as defined by BURSTPOWER. When the trigger for
										this channel is set to level triggered, a hardware trigger
										causes transfers to continue as long as the trigger is
										asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Burst Power is used in two ways. It always selects the
								address wrap size when SRCBURSTWRAP and/or DSTBURSTWRAP modes are
								selected (see descriptions elsewhere in this register). When the
								TRIGBURST field elsewhere in this register = 1, Burst Power selects
								how many transfers are performed for each DMA trigger. This can be
								used, for example, with peripherals that contain a FIFO that can
								initiate a DMA operation when the FIFO reaches a certain level.
								0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst
								size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds
								to the maximum supported transfer count. others: not supported. The
								total transfer length as defined in the XFERCOUNT bits in the
								XFERCFG register must be an even multiple of the burst
								size.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Source Burst Wrap. When enabled, the source data address
								for the DMA is wrapped, meaning that the source address range for
								each burst will be the same. As an example, this could be used to
								read several sequential registers from a peripheral for each DMA
								burst, reading the same registers again for each
								burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for
										this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this
										DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data
								address for the DMA is wrapped, meaning that the destination address
								range for each burst will be the same. As an example, this could be
								used to write several sequential registers to a peripheral for each
								DMA burst, writing the same registers again for each
								burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled
										for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for
										this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are
								pending. Eight priority levels are supported. 0x0 = highest
								priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
    }
    namespace Nonecfg7{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004470,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to
								perform a memory-to-memory move, any peripheral DMA request
								associated with that channel can be disabled to prevent any
								interaction between the peripheral and the DMA
								controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are
										disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are
										enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not
										used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::enabled> enabled{};
        }
        ///Trigger Polarity. Selects the polarity of a hardware
								trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is
										active low or falling edge triggered, based on
										TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is
										active high or rising edge triggered, based on
										TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or
								level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered. Transfers
										will be initiated and completed, as specified for a single
										trigger.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note
										that when level triggering without burst (BURSTPOWER = 0) is
										selected, only hardware triggers should be used on that
										channel. Transfers continue as long as the trigger level is
										asserted. Once the trigger is de-asserted, the transfer will
										be paused until the trigger is, again, asserted. However,
										the transfer will not be paused until any remaining
										transfers within the current BURSTPOWER length are
										completed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a
								single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single
										transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel
										is set to edge triggered, a hardware trigger causes a burst
										transfer, as defined by BURSTPOWER. When the trigger for
										this channel is set to level triggered, a hardware trigger
										causes transfers to continue as long as the trigger is
										asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Burst Power is used in two ways. It always selects the
								address wrap size when SRCBURSTWRAP and/or DSTBURSTWRAP modes are
								selected (see descriptions elsewhere in this register). When the
								TRIGBURST field elsewhere in this register = 1, Burst Power selects
								how many transfers are performed for each DMA trigger. This can be
								used, for example, with peripherals that contain a FIFO that can
								initiate a DMA operation when the FIFO reaches a certain level.
								0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst
								size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds
								to the maximum supported transfer count. others: not supported. The
								total transfer length as defined in the XFERCOUNT bits in the
								XFERCFG register must be an even multiple of the burst
								size.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Source Burst Wrap. When enabled, the source data address
								for the DMA is wrapped, meaning that the source address range for
								each burst will be the same. As an example, this could be used to
								read several sequential registers from a peripheral for each DMA
								burst, reading the same registers again for each
								burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for
										this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this
										DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data
								address for the DMA is wrapped, meaning that the destination address
								range for each burst will be the same. As an example, this could be
								used to write several sequential registers to a peripheral for each
								DMA burst, writing the same registers again for each
								burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled
										for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for
										this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are
								pending. Eight priority levels are supported. 0x0 = highest
								priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
    }
    namespace Nonecfg8{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004480,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to
								perform a memory-to-memory move, any peripheral DMA request
								associated with that channel can be disabled to prevent any
								interaction between the peripheral and the DMA
								controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are
										disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are
										enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not
										used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::enabled> enabled{};
        }
        ///Trigger Polarity. Selects the polarity of a hardware
								trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is
										active low or falling edge triggered, based on
										TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is
										active high or rising edge triggered, based on
										TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or
								level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered. Transfers
										will be initiated and completed, as specified for a single
										trigger.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note
										that when level triggering without burst (BURSTPOWER = 0) is
										selected, only hardware triggers should be used on that
										channel. Transfers continue as long as the trigger level is
										asserted. Once the trigger is de-asserted, the transfer will
										be paused until the trigger is, again, asserted. However,
										the transfer will not be paused until any remaining
										transfers within the current BURSTPOWER length are
										completed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a
								single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single
										transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel
										is set to edge triggered, a hardware trigger causes a burst
										transfer, as defined by BURSTPOWER. When the trigger for
										this channel is set to level triggered, a hardware trigger
										causes transfers to continue as long as the trigger is
										asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Burst Power is used in two ways. It always selects the
								address wrap size when SRCBURSTWRAP and/or DSTBURSTWRAP modes are
								selected (see descriptions elsewhere in this register). When the
								TRIGBURST field elsewhere in this register = 1, Burst Power selects
								how many transfers are performed for each DMA trigger. This can be
								used, for example, with peripherals that contain a FIFO that can
								initiate a DMA operation when the FIFO reaches a certain level.
								0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst
								size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds
								to the maximum supported transfer count. others: not supported. The
								total transfer length as defined in the XFERCOUNT bits in the
								XFERCFG register must be an even multiple of the burst
								size.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Source Burst Wrap. When enabled, the source data address
								for the DMA is wrapped, meaning that the source address range for
								each burst will be the same. As an example, this could be used to
								read several sequential registers from a peripheral for each DMA
								burst, reading the same registers again for each
								burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for
										this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this
										DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data
								address for the DMA is wrapped, meaning that the destination address
								range for each burst will be the same. As an example, this could be
								used to write several sequential registers to a peripheral for each
								DMA burst, writing the same registers again for each
								burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled
										for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for
										this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are
								pending. Eight priority levels are supported. 0x0 = highest
								priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
    }
    namespace Nonecfg9{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004490,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to
								perform a memory-to-memory move, any peripheral DMA request
								associated with that channel can be disabled to prevent any
								interaction between the peripheral and the DMA
								controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are
										disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are
										enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not
										used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::enabled> enabled{};
        }
        ///Trigger Polarity. Selects the polarity of a hardware
								trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is
										active low or falling edge triggered, based on
										TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is
										active high or rising edge triggered, based on
										TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or
								level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered. Transfers
										will be initiated and completed, as specified for a single
										trigger.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note
										that when level triggering without burst (BURSTPOWER = 0) is
										selected, only hardware triggers should be used on that
										channel. Transfers continue as long as the trigger level is
										asserted. Once the trigger is de-asserted, the transfer will
										be paused until the trigger is, again, asserted. However,
										the transfer will not be paused until any remaining
										transfers within the current BURSTPOWER length are
										completed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a
								single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single
										transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel
										is set to edge triggered, a hardware trigger causes a burst
										transfer, as defined by BURSTPOWER. When the trigger for
										this channel is set to level triggered, a hardware trigger
										causes transfers to continue as long as the trigger is
										asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Burst Power is used in two ways. It always selects the
								address wrap size when SRCBURSTWRAP and/or DSTBURSTWRAP modes are
								selected (see descriptions elsewhere in this register). When the
								TRIGBURST field elsewhere in this register = 1, Burst Power selects
								how many transfers are performed for each DMA trigger. This can be
								used, for example, with peripherals that contain a FIFO that can
								initiate a DMA operation when the FIFO reaches a certain level.
								0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst
								size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds
								to the maximum supported transfer count. others: not supported. The
								total transfer length as defined in the XFERCOUNT bits in the
								XFERCFG register must be an even multiple of the burst
								size.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Source Burst Wrap. When enabled, the source data address
								for the DMA is wrapped, meaning that the source address range for
								each burst will be the same. As an example, this could be used to
								read several sequential registers from a peripheral for each DMA
								burst, reading the same registers again for each
								burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for
										this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this
										DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data
								address for the DMA is wrapped, meaning that the destination address
								range for each burst will be the same. As an example, this could be
								used to write several sequential registers to a peripheral for each
								DMA burst, writing the same registers again for each
								burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled
										for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for
										this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are
								pending. Eight priority levels are supported. 0x0 = highest
								priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
    }
    namespace Nonecfg10{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044a0,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to
								perform a memory-to-memory move, any peripheral DMA request
								associated with that channel can be disabled to prevent any
								interaction between the peripheral and the DMA
								controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are
										disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are
										enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not
										used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::enabled> enabled{};
        }
        ///Trigger Polarity. Selects the polarity of a hardware
								trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is
										active low or falling edge triggered, based on
										TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is
										active high or rising edge triggered, based on
										TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or
								level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered. Transfers
										will be initiated and completed, as specified for a single
										trigger.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note
										that when level triggering without burst (BURSTPOWER = 0) is
										selected, only hardware triggers should be used on that
										channel. Transfers continue as long as the trigger level is
										asserted. Once the trigger is de-asserted, the transfer will
										be paused until the trigger is, again, asserted. However,
										the transfer will not be paused until any remaining
										transfers within the current BURSTPOWER length are
										completed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a
								single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single
										transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel
										is set to edge triggered, a hardware trigger causes a burst
										transfer, as defined by BURSTPOWER. When the trigger for
										this channel is set to level triggered, a hardware trigger
										causes transfers to continue as long as the trigger is
										asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Burst Power is used in two ways. It always selects the
								address wrap size when SRCBURSTWRAP and/or DSTBURSTWRAP modes are
								selected (see descriptions elsewhere in this register). When the
								TRIGBURST field elsewhere in this register = 1, Burst Power selects
								how many transfers are performed for each DMA trigger. This can be
								used, for example, with peripherals that contain a FIFO that can
								initiate a DMA operation when the FIFO reaches a certain level.
								0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst
								size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds
								to the maximum supported transfer count. others: not supported. The
								total transfer length as defined in the XFERCOUNT bits in the
								XFERCFG register must be an even multiple of the burst
								size.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Source Burst Wrap. When enabled, the source data address
								for the DMA is wrapped, meaning that the source address range for
								each burst will be the same. As an example, this could be used to
								read several sequential registers from a peripheral for each DMA
								burst, reading the same registers again for each
								burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for
										this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this
										DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data
								address for the DMA is wrapped, meaning that the destination address
								range for each burst will be the same. As an example, this could be
								used to write several sequential registers to a peripheral for each
								DMA burst, writing the same registers again for each
								burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled
										for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for
										this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are
								pending. Eight priority levels are supported. 0x0 = highest
								priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
    }
    namespace Nonecfg11{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044b0,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to
								perform a memory-to-memory move, any peripheral DMA request
								associated with that channel can be disabled to prevent any
								interaction between the peripheral and the DMA
								controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are
										disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are
										enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not
										used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::enabled> enabled{};
        }
        ///Trigger Polarity. Selects the polarity of a hardware
								trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is
										active low or falling edge triggered, based on
										TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is
										active high or rising edge triggered, based on
										TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or
								level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered. Transfers
										will be initiated and completed, as specified for a single
										trigger.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note
										that when level triggering without burst (BURSTPOWER = 0) is
										selected, only hardware triggers should be used on that
										channel. Transfers continue as long as the trigger level is
										asserted. Once the trigger is de-asserted, the transfer will
										be paused until the trigger is, again, asserted. However,
										the transfer will not be paused until any remaining
										transfers within the current BURSTPOWER length are
										completed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a
								single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single
										transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel
										is set to edge triggered, a hardware trigger causes a burst
										transfer, as defined by BURSTPOWER. When the trigger for
										this channel is set to level triggered, a hardware trigger
										causes transfers to continue as long as the trigger is
										asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Burst Power is used in two ways. It always selects the
								address wrap size when SRCBURSTWRAP and/or DSTBURSTWRAP modes are
								selected (see descriptions elsewhere in this register). When the
								TRIGBURST field elsewhere in this register = 1, Burst Power selects
								how many transfers are performed for each DMA trigger. This can be
								used, for example, with peripherals that contain a FIFO that can
								initiate a DMA operation when the FIFO reaches a certain level.
								0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst
								size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds
								to the maximum supported transfer count. others: not supported. The
								total transfer length as defined in the XFERCOUNT bits in the
								XFERCFG register must be an even multiple of the burst
								size.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Source Burst Wrap. When enabled, the source data address
								for the DMA is wrapped, meaning that the source address range for
								each burst will be the same. As an example, this could be used to
								read several sequential registers from a peripheral for each DMA
								burst, reading the same registers again for each
								burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for
										this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this
										DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data
								address for the DMA is wrapped, meaning that the destination address
								range for each burst will be the same. As an example, this could be
								used to write several sequential registers to a peripheral for each
								DMA burst, writing the same registers again for each
								burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled
										for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for
										this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are
								pending. Eight priority levels are supported. 0x0 = highest
								priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
    }
    namespace Nonecfg12{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044c0,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to
								perform a memory-to-memory move, any peripheral DMA request
								associated with that channel can be disabled to prevent any
								interaction between the peripheral and the DMA
								controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are
										disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are
										enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not
										used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::enabled> enabled{};
        }
        ///Trigger Polarity. Selects the polarity of a hardware
								trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is
										active low or falling edge triggered, based on
										TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is
										active high or rising edge triggered, based on
										TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or
								level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered. Transfers
										will be initiated and completed, as specified for a single
										trigger.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note
										that when level triggering without burst (BURSTPOWER = 0) is
										selected, only hardware triggers should be used on that
										channel. Transfers continue as long as the trigger level is
										asserted. Once the trigger is de-asserted, the transfer will
										be paused until the trigger is, again, asserted. However,
										the transfer will not be paused until any remaining
										transfers within the current BURSTPOWER length are
										completed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a
								single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single
										transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel
										is set to edge triggered, a hardware trigger causes a burst
										transfer, as defined by BURSTPOWER. When the trigger for
										this channel is set to level triggered, a hardware trigger
										causes transfers to continue as long as the trigger is
										asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Burst Power is used in two ways. It always selects the
								address wrap size when SRCBURSTWRAP and/or DSTBURSTWRAP modes are
								selected (see descriptions elsewhere in this register). When the
								TRIGBURST field elsewhere in this register = 1, Burst Power selects
								how many transfers are performed for each DMA trigger. This can be
								used, for example, with peripherals that contain a FIFO that can
								initiate a DMA operation when the FIFO reaches a certain level.
								0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst
								size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds
								to the maximum supported transfer count. others: not supported. The
								total transfer length as defined in the XFERCOUNT bits in the
								XFERCFG register must be an even multiple of the burst
								size.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Source Burst Wrap. When enabled, the source data address
								for the DMA is wrapped, meaning that the source address range for
								each burst will be the same. As an example, this could be used to
								read several sequential registers from a peripheral for each DMA
								burst, reading the same registers again for each
								burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for
										this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this
										DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data
								address for the DMA is wrapped, meaning that the destination address
								range for each burst will be the same. As an example, this could be
								used to write several sequential registers to a peripheral for each
								DMA burst, writing the same registers again for each
								burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled
										for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for
										this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are
								pending. Eight priority levels are supported. 0x0 = highest
								priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
    }
    namespace Nonecfg13{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044d0,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to
								perform a memory-to-memory move, any peripheral DMA request
								associated with that channel can be disabled to prevent any
								interaction between the peripheral and the DMA
								controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are
										disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are
										enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not
										used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::enabled> enabled{};
        }
        ///Trigger Polarity. Selects the polarity of a hardware
								trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is
										active low or falling edge triggered, based on
										TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is
										active high or rising edge triggered, based on
										TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or
								level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered. Transfers
										will be initiated and completed, as specified for a single
										trigger.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note
										that when level triggering without burst (BURSTPOWER = 0) is
										selected, only hardware triggers should be used on that
										channel. Transfers continue as long as the trigger level is
										asserted. Once the trigger is de-asserted, the transfer will
										be paused until the trigger is, again, asserted. However,
										the transfer will not be paused until any remaining
										transfers within the current BURSTPOWER length are
										completed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a
								single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single
										transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel
										is set to edge triggered, a hardware trigger causes a burst
										transfer, as defined by BURSTPOWER. When the trigger for
										this channel is set to level triggered, a hardware trigger
										causes transfers to continue as long as the trigger is
										asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Burst Power is used in two ways. It always selects the
								address wrap size when SRCBURSTWRAP and/or DSTBURSTWRAP modes are
								selected (see descriptions elsewhere in this register). When the
								TRIGBURST field elsewhere in this register = 1, Burst Power selects
								how many transfers are performed for each DMA trigger. This can be
								used, for example, with peripherals that contain a FIFO that can
								initiate a DMA operation when the FIFO reaches a certain level.
								0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst
								size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds
								to the maximum supported transfer count. others: not supported. The
								total transfer length as defined in the XFERCOUNT bits in the
								XFERCFG register must be an even multiple of the burst
								size.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Source Burst Wrap. When enabled, the source data address
								for the DMA is wrapped, meaning that the source address range for
								each burst will be the same. As an example, this could be used to
								read several sequential registers from a peripheral for each DMA
								burst, reading the same registers again for each
								burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for
										this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this
										DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data
								address for the DMA is wrapped, meaning that the destination address
								range for each burst will be the same. As an example, this could be
								used to write several sequential registers to a peripheral for each
								DMA burst, writing the same registers again for each
								burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled
										for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for
										this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are
								pending. Eight priority levels are supported. 0x0 = highest
								priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
    }
    namespace Nonecfg14{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044e0,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to
								perform a memory-to-memory move, any peripheral DMA request
								associated with that channel can be disabled to prevent any
								interaction between the peripheral and the DMA
								controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are
										disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are
										enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not
										used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::enabled> enabled{};
        }
        ///Trigger Polarity. Selects the polarity of a hardware
								trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is
										active low or falling edge triggered, based on
										TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is
										active high or rising edge triggered, based on
										TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or
								level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered. Transfers
										will be initiated and completed, as specified for a single
										trigger.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note
										that when level triggering without burst (BURSTPOWER = 0) is
										selected, only hardware triggers should be used on that
										channel. Transfers continue as long as the trigger level is
										asserted. Once the trigger is de-asserted, the transfer will
										be paused until the trigger is, again, asserted. However,
										the transfer will not be paused until any remaining
										transfers within the current BURSTPOWER length are
										completed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a
								single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single
										transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel
										is set to edge triggered, a hardware trigger causes a burst
										transfer, as defined by BURSTPOWER. When the trigger for
										this channel is set to level triggered, a hardware trigger
										causes transfers to continue as long as the trigger is
										asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Burst Power is used in two ways. It always selects the
								address wrap size when SRCBURSTWRAP and/or DSTBURSTWRAP modes are
								selected (see descriptions elsewhere in this register). When the
								TRIGBURST field elsewhere in this register = 1, Burst Power selects
								how many transfers are performed for each DMA trigger. This can be
								used, for example, with peripherals that contain a FIFO that can
								initiate a DMA operation when the FIFO reaches a certain level.
								0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst
								size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds
								to the maximum supported transfer count. others: not supported. The
								total transfer length as defined in the XFERCOUNT bits in the
								XFERCFG register must be an even multiple of the burst
								size.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Source Burst Wrap. When enabled, the source data address
								for the DMA is wrapped, meaning that the source address range for
								each burst will be the same. As an example, this could be used to
								read several sequential registers from a peripheral for each DMA
								burst, reading the same registers again for each
								burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for
										this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this
										DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data
								address for the DMA is wrapped, meaning that the destination address
								range for each burst will be the same. As an example, this could be
								used to write several sequential registers to a peripheral for each
								DMA burst, writing the same registers again for each
								burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled
										for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for
										this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are
								pending. Eight priority levels are supported. 0x0 = highest
								priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
    }
    namespace Nonecfg15{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044f0,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to
								perform a memory-to-memory move, any peripheral DMA request
								associated with that channel can be disabled to prevent any
								interaction between the peripheral and the DMA
								controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are
										disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are
										enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not
										used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::enabled> enabled{};
        }
        ///Trigger Polarity. Selects the polarity of a hardware
								trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is
										active low or falling edge triggered, based on
										TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is
										active high or rising edge triggered, based on
										TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or
								level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered. Transfers
										will be initiated and completed, as specified for a single
										trigger.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note
										that when level triggering without burst (BURSTPOWER = 0) is
										selected, only hardware triggers should be used on that
										channel. Transfers continue as long as the trigger level is
										asserted. Once the trigger is de-asserted, the transfer will
										be paused until the trigger is, again, asserted. However,
										the transfer will not be paused until any remaining
										transfers within the current BURSTPOWER length are
										completed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a
								single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single
										transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel
										is set to edge triggered, a hardware trigger causes a burst
										transfer, as defined by BURSTPOWER. When the trigger for
										this channel is set to level triggered, a hardware trigger
										causes transfers to continue as long as the trigger is
										asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Burst Power is used in two ways. It always selects the
								address wrap size when SRCBURSTWRAP and/or DSTBURSTWRAP modes are
								selected (see descriptions elsewhere in this register). When the
								TRIGBURST field elsewhere in this register = 1, Burst Power selects
								how many transfers are performed for each DMA trigger. This can be
								used, for example, with peripherals that contain a FIFO that can
								initiate a DMA operation when the FIFO reaches a certain level.
								0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst
								size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds
								to the maximum supported transfer count. others: not supported. The
								total transfer length as defined in the XFERCOUNT bits in the
								XFERCFG register must be an even multiple of the burst
								size.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Source Burst Wrap. When enabled, the source data address
								for the DMA is wrapped, meaning that the source address range for
								each burst will be the same. As an example, this could be used to
								read several sequential registers from a peripheral for each DMA
								burst, reading the same registers again for each
								burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for
										this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this
										DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data
								address for the DMA is wrapped, meaning that the destination address
								range for each burst will be the same. As an example, this could be
								used to write several sequential registers to a peripheral for each
								DMA burst, writing the same registers again for each
								burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled
										for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for
										this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are
								pending. Eight priority levels are supported. 0x0 = highest
								priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
    }
    namespace Nonecfg16{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004500,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to
								perform a memory-to-memory move, any peripheral DMA request
								associated with that channel can be disabled to prevent any
								interaction between the peripheral and the DMA
								controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are
										disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are
										enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not
										used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::enabled> enabled{};
        }
        ///Trigger Polarity. Selects the polarity of a hardware
								trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is
										active low or falling edge triggered, based on
										TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is
										active high or rising edge triggered, based on
										TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or
								level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered. Transfers
										will be initiated and completed, as specified for a single
										trigger.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note
										that when level triggering without burst (BURSTPOWER = 0) is
										selected, only hardware triggers should be used on that
										channel. Transfers continue as long as the trigger level is
										asserted. Once the trigger is de-asserted, the transfer will
										be paused until the trigger is, again, asserted. However,
										the transfer will not be paused until any remaining
										transfers within the current BURSTPOWER length are
										completed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a
								single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single
										transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel
										is set to edge triggered, a hardware trigger causes a burst
										transfer, as defined by BURSTPOWER. When the trigger for
										this channel is set to level triggered, a hardware trigger
										causes transfers to continue as long as the trigger is
										asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Burst Power is used in two ways. It always selects the
								address wrap size when SRCBURSTWRAP and/or DSTBURSTWRAP modes are
								selected (see descriptions elsewhere in this register). When the
								TRIGBURST field elsewhere in this register = 1, Burst Power selects
								how many transfers are performed for each DMA trigger. This can be
								used, for example, with peripherals that contain a FIFO that can
								initiate a DMA operation when the FIFO reaches a certain level.
								0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst
								size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds
								to the maximum supported transfer count. others: not supported. The
								total transfer length as defined in the XFERCOUNT bits in the
								XFERCFG register must be an even multiple of the burst
								size.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Source Burst Wrap. When enabled, the source data address
								for the DMA is wrapped, meaning that the source address range for
								each burst will be the same. As an example, this could be used to
								read several sequential registers from a peripheral for each DMA
								burst, reading the same registers again for each
								burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for
										this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this
										DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data
								address for the DMA is wrapped, meaning that the destination address
								range for each burst will be the same. As an example, this could be
								used to write several sequential registers to a peripheral for each
								DMA burst, writing the same registers again for each
								burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled
										for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for
										this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are
								pending. Eight priority levels are supported. 0x0 = highest
								priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
    }
    namespace Nonecfg17{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004510,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to
								perform a memory-to-memory move, any peripheral DMA request
								associated with that channel can be disabled to prevent any
								interaction between the peripheral and the DMA
								controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are
										disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are
										enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not
										used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::enabled> enabled{};
        }
        ///Trigger Polarity. Selects the polarity of a hardware
								trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is
										active low or falling edge triggered, based on
										TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is
										active high or rising edge triggered, based on
										TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or
								level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered. Transfers
										will be initiated and completed, as specified for a single
										trigger.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note
										that when level triggering without burst (BURSTPOWER = 0) is
										selected, only hardware triggers should be used on that
										channel. Transfers continue as long as the trigger level is
										asserted. Once the trigger is de-asserted, the transfer will
										be paused until the trigger is, again, asserted. However,
										the transfer will not be paused until any remaining
										transfers within the current BURSTPOWER length are
										completed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a
								single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single
										transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel
										is set to edge triggered, a hardware trigger causes a burst
										transfer, as defined by BURSTPOWER. When the trigger for
										this channel is set to level triggered, a hardware trigger
										causes transfers to continue as long as the trigger is
										asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Burst Power is used in two ways. It always selects the
								address wrap size when SRCBURSTWRAP and/or DSTBURSTWRAP modes are
								selected (see descriptions elsewhere in this register). When the
								TRIGBURST field elsewhere in this register = 1, Burst Power selects
								how many transfers are performed for each DMA trigger. This can be
								used, for example, with peripherals that contain a FIFO that can
								initiate a DMA operation when the FIFO reaches a certain level.
								0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst
								size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds
								to the maximum supported transfer count. others: not supported. The
								total transfer length as defined in the XFERCOUNT bits in the
								XFERCFG register must be an even multiple of the burst
								size.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Source Burst Wrap. When enabled, the source data address
								for the DMA is wrapped, meaning that the source address range for
								each burst will be the same. As an example, this could be used to
								read several sequential registers from a peripheral for each DMA
								burst, reading the same registers again for each
								burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for
										this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this
										DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data
								address for the DMA is wrapped, meaning that the destination address
								range for each burst will be the same. As an example, this could be
								used to write several sequential registers to a peripheral for each
								DMA burst, writing the same registers again for each
								burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled
										for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for
										this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are
								pending. Eight priority levels are supported. 0x0 = highest
								priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
    }
    namespace Nonecfg18{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004520,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to
								perform a memory-to-memory move, any peripheral DMA request
								associated with that channel can be disabled to prevent any
								interaction between the peripheral and the DMA
								controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are
										disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are
										enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not
										used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::enabled> enabled{};
        }
        ///Trigger Polarity. Selects the polarity of a hardware
								trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is
										active low or falling edge triggered, based on
										TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is
										active high or rising edge triggered, based on
										TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or
								level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered. Transfers
										will be initiated and completed, as specified for a single
										trigger.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note
										that when level triggering without burst (BURSTPOWER = 0) is
										selected, only hardware triggers should be used on that
										channel. Transfers continue as long as the trigger level is
										asserted. Once the trigger is de-asserted, the transfer will
										be paused until the trigger is, again, asserted. However,
										the transfer will not be paused until any remaining
										transfers within the current BURSTPOWER length are
										completed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a
								single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single
										transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel
										is set to edge triggered, a hardware trigger causes a burst
										transfer, as defined by BURSTPOWER. When the trigger for
										this channel is set to level triggered, a hardware trigger
										causes transfers to continue as long as the trigger is
										asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Burst Power is used in two ways. It always selects the
								address wrap size when SRCBURSTWRAP and/or DSTBURSTWRAP modes are
								selected (see descriptions elsewhere in this register). When the
								TRIGBURST field elsewhere in this register = 1, Burst Power selects
								how many transfers are performed for each DMA trigger. This can be
								used, for example, with peripherals that contain a FIFO that can
								initiate a DMA operation when the FIFO reaches a certain level.
								0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst
								size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds
								to the maximum supported transfer count. others: not supported. The
								total transfer length as defined in the XFERCOUNT bits in the
								XFERCFG register must be an even multiple of the burst
								size.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Source Burst Wrap. When enabled, the source data address
								for the DMA is wrapped, meaning that the source address range for
								each burst will be the same. As an example, this could be used to
								read several sequential registers from a peripheral for each DMA
								burst, reading the same registers again for each
								burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for
										this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this
										DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data
								address for the DMA is wrapped, meaning that the destination address
								range for each burst will be the same. As an example, this could be
								used to write several sequential registers to a peripheral for each
								DMA burst, writing the same registers again for each
								burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled
										for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for
										this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are
								pending. Eight priority levels are supported. 0x0 = highest
								priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
    }
    namespace Nonecfg19{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004530,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to
								perform a memory-to-memory move, any peripheral DMA request
								associated with that channel can be disabled to prevent any
								interaction between the peripheral and the DMA
								controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are
										disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are
										enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not
										used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::enabled> enabled{};
        }
        ///Trigger Polarity. Selects the polarity of a hardware
								trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is
										active low or falling edge triggered, based on
										TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is
										active high or rising edge triggered, based on
										TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or
								level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered. Transfers
										will be initiated and completed, as specified for a single
										trigger.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note
										that when level triggering without burst (BURSTPOWER = 0) is
										selected, only hardware triggers should be used on that
										channel. Transfers continue as long as the trigger level is
										asserted. Once the trigger is de-asserted, the transfer will
										be paused until the trigger is, again, asserted. However,
										the transfer will not be paused until any remaining
										transfers within the current BURSTPOWER length are
										completed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a
								single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single
										transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel
										is set to edge triggered, a hardware trigger causes a burst
										transfer, as defined by BURSTPOWER. When the trigger for
										this channel is set to level triggered, a hardware trigger
										causes transfers to continue as long as the trigger is
										asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Burst Power is used in two ways. It always selects the
								address wrap size when SRCBURSTWRAP and/or DSTBURSTWRAP modes are
								selected (see descriptions elsewhere in this register). When the
								TRIGBURST field elsewhere in this register = 1, Burst Power selects
								how many transfers are performed for each DMA trigger. This can be
								used, for example, with peripherals that contain a FIFO that can
								initiate a DMA operation when the FIFO reaches a certain level.
								0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst
								size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds
								to the maximum supported transfer count. others: not supported. The
								total transfer length as defined in the XFERCOUNT bits in the
								XFERCFG register must be an even multiple of the burst
								size.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Source Burst Wrap. When enabled, the source data address
								for the DMA is wrapped, meaning that the source address range for
								each burst will be the same. As an example, this could be used to
								read several sequential registers from a peripheral for each DMA
								burst, reading the same registers again for each
								burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for
										this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this
										DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data
								address for the DMA is wrapped, meaning that the destination address
								range for each burst will be the same. As an example, this could be
								used to write several sequential registers to a peripheral for each
								DMA burst, writing the same registers again for each
								burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled
										for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for
										this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are
								pending. Eight priority levels are supported. 0x0 = highest
								priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
    }
    namespace Nonecfg20{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004540,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to
								perform a memory-to-memory move, any peripheral DMA request
								associated with that channel can be disabled to prevent any
								interaction between the peripheral and the DMA
								controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are
										disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are
										enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not
										used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::enabled> enabled{};
        }
        ///Trigger Polarity. Selects the polarity of a hardware
								trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is
										active low or falling edge triggered, based on
										TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is
										active high or rising edge triggered, based on
										TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or
								level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered. Transfers
										will be initiated and completed, as specified for a single
										trigger.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note
										that when level triggering without burst (BURSTPOWER = 0) is
										selected, only hardware triggers should be used on that
										channel. Transfers continue as long as the trigger level is
										asserted. Once the trigger is de-asserted, the transfer will
										be paused until the trigger is, again, asserted. However,
										the transfer will not be paused until any remaining
										transfers within the current BURSTPOWER length are
										completed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a
								single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single
										transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel
										is set to edge triggered, a hardware trigger causes a burst
										transfer, as defined by BURSTPOWER. When the trigger for
										this channel is set to level triggered, a hardware trigger
										causes transfers to continue as long as the trigger is
										asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Burst Power is used in two ways. It always selects the
								address wrap size when SRCBURSTWRAP and/or DSTBURSTWRAP modes are
								selected (see descriptions elsewhere in this register). When the
								TRIGBURST field elsewhere in this register = 1, Burst Power selects
								how many transfers are performed for each DMA trigger. This can be
								used, for example, with peripherals that contain a FIFO that can
								initiate a DMA operation when the FIFO reaches a certain level.
								0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst
								size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds
								to the maximum supported transfer count. others: not supported. The
								total transfer length as defined in the XFERCOUNT bits in the
								XFERCFG register must be an even multiple of the burst
								size.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Source Burst Wrap. When enabled, the source data address
								for the DMA is wrapped, meaning that the source address range for
								each burst will be the same. As an example, this could be used to
								read several sequential registers from a peripheral for each DMA
								burst, reading the same registers again for each
								burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for
										this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this
										DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data
								address for the DMA is wrapped, meaning that the destination address
								range for each burst will be the same. As an example, this could be
								used to write several sequential registers to a peripheral for each
								DMA burst, writing the same registers again for each
								burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled
										for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for
										this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are
								pending. Eight priority levels are supported. 0x0 = highest
								priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
    }
    namespace Nonecfg21{    ///<Configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004550,0xfff8308c,0,unsigned>;
        ///Peripheral request Enable. If a DMA channel is used to
								perform a memory-to-memory move, any peripheral DMA request
								associated with that channel can be disabled to prevent any
								interaction between the peripheral and the DMA
								controller.
        enum class PeriphreqenVal {
            disabled=0x00000000,     ///<Disabled. Peripheral DMA requests are
										disabled.
            enabled=0x00000001,     ///<Enabled. Peripheral DMA requests are
										enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PeriphreqenVal> periphreqen{}; 
        namespace PeriphreqenValC{
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(periphreqen)::Type,PeriphreqenVal::enabled> enabled{};
        }
        ///Hardware Triggering Enable for this channel.
        enum class HwtrigenVal {
            disabled=0x00000000,     ///<Disabled. Hardware triggering is not
										used.
            enabled=0x00000001,     ///<Enabled. Use hardware triggering.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HwtrigenVal> hwtrigen{}; 
        namespace HwtrigenValC{
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hwtrigen)::Type,HwtrigenVal::enabled> enabled{};
        }
        ///Trigger Polarity. Selects the polarity of a hardware
								trigger for this channel.
        enum class TrigpolVal {
            activeLowFalling=0x00000000,     ///<Active low - falling edge. Hardware trigger is
										active low or falling edge triggered, based on
										TRIGTYPE.
            activeHighRising=0x00000001,     ///<Active high - rising edge. Hardware trigger is
										active high or rising edge triggered, based on
										TRIGTYPE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TrigpolVal> trigpol{}; 
        namespace TrigpolValC{
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeLowFalling> activeLowFalling{};
            constexpr Register::FieldValue<decltype(trigpol)::Type,TrigpolVal::activeHighRising> activeHighRising{};
        }
        ///Trigger Type. Selects hardware trigger as edge triggered or
								level triggered.
        enum class TrigtypeVal {
            edge=0x00000000,     ///<Edge. Hardware trigger is edge triggered. Transfers
										will be initiated and completed, as specified for a single
										trigger.
            level=0x00000001,     ///<Level. Hardware trigger is level triggered. Note
										that when level triggering without burst (BURSTPOWER = 0) is
										selected, only hardware triggers should be used on that
										channel. Transfers continue as long as the trigger level is
										asserted. Once the trigger is de-asserted, the transfer will
										be paused until the trigger is, again, asserted. However,
										the transfer will not be paused until any remaining
										transfers within the current BURSTPOWER length are
										completed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigtypeVal> trigtype{}; 
        namespace TrigtypeValC{
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(trigtype)::Type,TrigtypeVal::level> level{};
        }
        ///Trigger Burst. Selects whether hardware triggers cause a
								single or burst transfer.
        enum class TrigburstVal {
            singleTransfer=0x00000000,     ///<Single transfer. Hardware trigger causes a single
										transfer.
            burstTransfer=0x00000001,     ///<Burst transfer. When the trigger for this channel
										is set to edge triggered, a hardware trigger causes a burst
										transfer, as defined by BURSTPOWER. When the trigger for
										this channel is set to level triggered, a hardware trigger
										causes transfers to continue as long as the trigger is
										asserted, unless the transfer is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TrigburstVal> trigburst{}; 
        namespace TrigburstValC{
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::singleTransfer> singleTransfer{};
            constexpr Register::FieldValue<decltype(trigburst)::Type,TrigburstVal::burstTransfer> burstTransfer{};
        }
        ///Burst Power is used in two ways. It always selects the
								address wrap size when SRCBURSTWRAP and/or DSTBURSTWRAP modes are
								selected (see descriptions elsewhere in this register). When the
								TRIGBURST field elsewhere in this register = 1, Burst Power selects
								how many transfers are performed for each DMA trigger. This can be
								used, for example, with peripherals that contain a FIFO that can
								initiate a DMA operation when the FIFO reaches a certain level.
								0000: Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst
								size = 4 (22). ... 1010: Burst size = 1024 (210). This corresponds
								to the maximum supported transfer count. others: not supported. The
								total transfer length as defined in the XFERCOUNT bits in the
								XFERCFG register must be an even multiple of the burst
								size.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> burstpower{}; 
        ///Source Burst Wrap. When enabled, the source data address
								for the DMA is wrapped, meaning that the source address range for
								each burst will be the same. As an example, this could be used to
								read several sequential registers from a peripheral for each DMA
								burst, reading the same registers again for each
								burst.
        enum class SrcburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Source burst wrapping is not enabled for
										this DMA channel.
            enabled=0x00000001,     ///<Enabled. Source burst wrapping is enabled for this
										DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SrcburstwrapVal> srcburstwrap{}; 
        namespace SrcburstwrapValC{
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(srcburstwrap)::Type,SrcburstwrapVal::enabled> enabled{};
        }
        ///Destination Burst Wrap. When enabled, the destination data
								address for the DMA is wrapped, meaning that the destination address
								range for each burst will be the same. As an example, this could be
								used to write several sequential registers to a peripheral for each
								DMA burst, writing the same registers again for each
								burst.
        enum class DstburstwrapVal {
            disabled=0x00000000,     ///<Disabled. Destination burst wrapping is not enabled
										for this DMA channel.
            enabled=0x00000001,     ///<Enabled. Destination burst wrapping is enabled for
										this DMA channel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DstburstwrapVal> dstburstwrap{}; 
        namespace DstburstwrapValC{
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dstburstwrap)::Type,DstburstwrapVal::enabled> enabled{};
        }
        ///Priority of this channel when multiple DMA requests are
								pending. Eight priority levels are supported. 0x0 = highest
								priority. 0x7 = lowest priority.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> chpriority{}; 
    }
    namespace Nonectlstat0{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004404,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a
								1 is written to the corresponding bit in the related SETVALID
								register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffect=0x00000000,     ///<No effect. No effect on DMA
										operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::validPending> validPending{};
        }
        ///Trigger flag. Indicates that the trigger for this channel
								is currently set. This bit is cleared at the end of an entire
								transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is
										not set. DMA operations will not be carried
										out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set.
										DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::triggered> triggered{};
        }
    }
    namespace Nonectlstat1{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004414,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a
								1 is written to the corresponding bit in the related SETVALID
								register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffect=0x00000000,     ///<No effect. No effect on DMA
										operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::validPending> validPending{};
        }
        ///Trigger flag. Indicates that the trigger for this channel
								is currently set. This bit is cleared at the end of an entire
								transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is
										not set. DMA operations will not be carried
										out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set.
										DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::triggered> triggered{};
        }
    }
    namespace Nonectlstat2{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004424,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a
								1 is written to the corresponding bit in the related SETVALID
								register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffect=0x00000000,     ///<No effect. No effect on DMA
										operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::validPending> validPending{};
        }
        ///Trigger flag. Indicates that the trigger for this channel
								is currently set. This bit is cleared at the end of an entire
								transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is
										not set. DMA operations will not be carried
										out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set.
										DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::triggered> triggered{};
        }
    }
    namespace Nonectlstat3{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004434,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a
								1 is written to the corresponding bit in the related SETVALID
								register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffect=0x00000000,     ///<No effect. No effect on DMA
										operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::validPending> validPending{};
        }
        ///Trigger flag. Indicates that the trigger for this channel
								is currently set. This bit is cleared at the end of an entire
								transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is
										not set. DMA operations will not be carried
										out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set.
										DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::triggered> triggered{};
        }
    }
    namespace Nonectlstat4{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004444,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a
								1 is written to the corresponding bit in the related SETVALID
								register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffect=0x00000000,     ///<No effect. No effect on DMA
										operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::validPending> validPending{};
        }
        ///Trigger flag. Indicates that the trigger for this channel
								is currently set. This bit is cleared at the end of an entire
								transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is
										not set. DMA operations will not be carried
										out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set.
										DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::triggered> triggered{};
        }
    }
    namespace Nonectlstat5{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004454,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a
								1 is written to the corresponding bit in the related SETVALID
								register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffect=0x00000000,     ///<No effect. No effect on DMA
										operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::validPending> validPending{};
        }
        ///Trigger flag. Indicates that the trigger for this channel
								is currently set. This bit is cleared at the end of an entire
								transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is
										not set. DMA operations will not be carried
										out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set.
										DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::triggered> triggered{};
        }
    }
    namespace Nonectlstat6{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004464,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a
								1 is written to the corresponding bit in the related SETVALID
								register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffect=0x00000000,     ///<No effect. No effect on DMA
										operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::validPending> validPending{};
        }
        ///Trigger flag. Indicates that the trigger for this channel
								is currently set. This bit is cleared at the end of an entire
								transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is
										not set. DMA operations will not be carried
										out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set.
										DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::triggered> triggered{};
        }
    }
    namespace Nonectlstat7{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004474,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a
								1 is written to the corresponding bit in the related SETVALID
								register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffect=0x00000000,     ///<No effect. No effect on DMA
										operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::validPending> validPending{};
        }
        ///Trigger flag. Indicates that the trigger for this channel
								is currently set. This bit is cleared at the end of an entire
								transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is
										not set. DMA operations will not be carried
										out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set.
										DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::triggered> triggered{};
        }
    }
    namespace Nonectlstat8{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004484,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a
								1 is written to the corresponding bit in the related SETVALID
								register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffect=0x00000000,     ///<No effect. No effect on DMA
										operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::validPending> validPending{};
        }
        ///Trigger flag. Indicates that the trigger for this channel
								is currently set. This bit is cleared at the end of an entire
								transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is
										not set. DMA operations will not be carried
										out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set.
										DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::triggered> triggered{};
        }
    }
    namespace Nonectlstat9{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004494,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a
								1 is written to the corresponding bit in the related SETVALID
								register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffect=0x00000000,     ///<No effect. No effect on DMA
										operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::validPending> validPending{};
        }
        ///Trigger flag. Indicates that the trigger for this channel
								is currently set. This bit is cleared at the end of an entire
								transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is
										not set. DMA operations will not be carried
										out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set.
										DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::triggered> triggered{};
        }
    }
    namespace Nonectlstat10{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c0044a4,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a
								1 is written to the corresponding bit in the related SETVALID
								register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffect=0x00000000,     ///<No effect. No effect on DMA
										operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::validPending> validPending{};
        }
        ///Trigger flag. Indicates that the trigger for this channel
								is currently set. This bit is cleared at the end of an entire
								transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is
										not set. DMA operations will not be carried
										out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set.
										DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::triggered> triggered{};
        }
    }
    namespace Nonectlstat11{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c0044b4,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a
								1 is written to the corresponding bit in the related SETVALID
								register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffect=0x00000000,     ///<No effect. No effect on DMA
										operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::validPending> validPending{};
        }
        ///Trigger flag. Indicates that the trigger for this channel
								is currently set. This bit is cleared at the end of an entire
								transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is
										not set. DMA operations will not be carried
										out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set.
										DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::triggered> triggered{};
        }
    }
    namespace Nonectlstat12{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c0044c4,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a
								1 is written to the corresponding bit in the related SETVALID
								register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffect=0x00000000,     ///<No effect. No effect on DMA
										operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::validPending> validPending{};
        }
        ///Trigger flag. Indicates that the trigger for this channel
								is currently set. This bit is cleared at the end of an entire
								transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is
										not set. DMA operations will not be carried
										out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set.
										DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::triggered> triggered{};
        }
    }
    namespace Nonectlstat13{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c0044d4,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a
								1 is written to the corresponding bit in the related SETVALID
								register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffect=0x00000000,     ///<No effect. No effect on DMA
										operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::validPending> validPending{};
        }
        ///Trigger flag. Indicates that the trigger for this channel
								is currently set. This bit is cleared at the end of an entire
								transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is
										not set. DMA operations will not be carried
										out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set.
										DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::triggered> triggered{};
        }
    }
    namespace Nonectlstat14{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c0044e4,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a
								1 is written to the corresponding bit in the related SETVALID
								register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffect=0x00000000,     ///<No effect. No effect on DMA
										operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::validPending> validPending{};
        }
        ///Trigger flag. Indicates that the trigger for this channel
								is currently set. This bit is cleared at the end of an entire
								transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is
										not set. DMA operations will not be carried
										out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set.
										DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::triggered> triggered{};
        }
    }
    namespace Nonectlstat15{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c0044f4,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a
								1 is written to the corresponding bit in the related SETVALID
								register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffect=0x00000000,     ///<No effect. No effect on DMA
										operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::validPending> validPending{};
        }
        ///Trigger flag. Indicates that the trigger for this channel
								is currently set. This bit is cleared at the end of an entire
								transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is
										not set. DMA operations will not be carried
										out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set.
										DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::triggered> triggered{};
        }
    }
    namespace Nonectlstat16{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004504,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a
								1 is written to the corresponding bit in the related SETVALID
								register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffect=0x00000000,     ///<No effect. No effect on DMA
										operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::validPending> validPending{};
        }
        ///Trigger flag. Indicates that the trigger for this channel
								is currently set. This bit is cleared at the end of an entire
								transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is
										not set. DMA operations will not be carried
										out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set.
										DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::triggered> triggered{};
        }
    }
    namespace Nonectlstat17{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004514,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a
								1 is written to the corresponding bit in the related SETVALID
								register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffect=0x00000000,     ///<No effect. No effect on DMA
										operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::validPending> validPending{};
        }
        ///Trigger flag. Indicates that the trigger for this channel
								is currently set. This bit is cleared at the end of an entire
								transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is
										not set. DMA operations will not be carried
										out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set.
										DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::triggered> triggered{};
        }
    }
    namespace Nonectlstat18{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004524,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a
								1 is written to the corresponding bit in the related SETVALID
								register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffect=0x00000000,     ///<No effect. No effect on DMA
										operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::validPending> validPending{};
        }
        ///Trigger flag. Indicates that the trigger for this channel
								is currently set. This bit is cleared at the end of an entire
								transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is
										not set. DMA operations will not be carried
										out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set.
										DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::triggered> triggered{};
        }
    }
    namespace Nonectlstat19{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004534,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a
								1 is written to the corresponding bit in the related SETVALID
								register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffect=0x00000000,     ///<No effect. No effect on DMA
										operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::validPending> validPending{};
        }
        ///Trigger flag. Indicates that the trigger for this channel
								is currently set. This bit is cleared at the end of an entire
								transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is
										not set. DMA operations will not be carried
										out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set.
										DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::triggered> triggered{};
        }
    }
    namespace Nonectlstat20{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004544,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a
								1 is written to the corresponding bit in the related SETVALID
								register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffect=0x00000000,     ///<No effect. No effect on DMA
										operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::validPending> validPending{};
        }
        ///Trigger flag. Indicates that the trigger for this channel
								is currently set. This bit is cleared at the end of an entire
								transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is
										not set. DMA operations will not be carried
										out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set.
										DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::triggered> triggered{};
        }
    }
    namespace Nonectlstat21{    ///<Control and status register for DMA channel 0.
        using Addr = Register::Address<0x1c004554,0xfffffffa,0,unsigned>;
        ///Valid pending flag for this channel. This bit is set when a
								1 is written to the corresponding bit in the related SETVALID
								register when CFGVALID = 1 for the same channel.
        enum class ValidpendingVal {
            noEffect=0x00000000,     ///<No effect. No effect on DMA
										operation.
            validPending=0x00000001,     ///<Valid pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ValidpendingVal> validpending{}; 
        namespace ValidpendingValC{
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(validpending)::Type,ValidpendingVal::validPending> validPending{};
        }
        ///Trigger flag. Indicates that the trigger for this channel
								is currently set. This bit is cleared at the end of an entire
								transfer or upon reload when CLRTRIG = 1.
        enum class TrigVal {
            notTriggered=0x00000000,     ///<Not triggered. The trigger for this DMA channel is
										not set. DMA operations will not be carried
										out.
            triggered=0x00000001,     ///<Triggered. The trigger for this DMA channel is set.
										DMA operations will be carried out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TrigVal> trig{}; 
        namespace TrigValC{
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::notTriggered> notTriggered{};
            constexpr Register::FieldValue<decltype(trig)::Type,TrigVal::triggered> triggered{};
        }
    }
    namespace Nonexfercfg0{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004408,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the
								current channel descriptor is valid and can potentially be acted
								upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The channel descriptor is not considered
										valid until validated by an associated SETVALID0
										setting.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered
										valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be
								reloaded when the current descriptor is exhausted. Reloading allows
								ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control
										structure when the current descriptor is
										exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            notSet=0x00000000,     ///<Not set. When written by software, the trigger for
										this channel is not set. A new trigger, as defined by the
										HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the
										channel.
            set=0x00000001,     ///<Set, When written by software, the trigger for this
										channel is set immediately. This feature should not be used
										with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::set> set{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this
										descriptor is exhausted. If there is a reload, the next
										descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this
										descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::set> set{};
        }
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8Bit=0x00000000,     ///<8-bit. 8-bit transfers are performed (8-bit source
										reads and destination writes).
            v16Bit=0x00000001,     ///<16-bit. 6-bit transfers are performed (16-bit
										source reads and destination writes).
            v32Bit=0x00000002,     ///<32-bit. 32-bit transfers are performed (32-bit
										source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v8Bit> v8Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v16Bit> v16Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v32Bit> v32Bit{};
        }
        ///Determines whether the source address is incremented for
								each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented
										for each transfer. This is the usual case when the source is
										a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the
										amount specified by Width for each transfer. This is the
										usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2
										times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4
										times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v4XWidth> v4XWidth{};
        }
        ///Determines whether the destination address is incremented
								for each DMA transfer.
        enum class DstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not
										incremented for each transfer. This is the usual case when
										the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented
										by the amount specified by Width for each transfer. This is
										the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented
										by 2 times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented
										by 4 times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DstincVal> dstinc{}; 
        namespace DstincValC{
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded.
								The number of bytes transferred is: (XFERCOUNT + 1) x data width (as
								defined by the WIDTH field). The DMA controller uses this bit field
								during transfer to count down. Hence, it cannot be used by software
								to read back the size of the transfer, for instance, in an interrupt
								handler. 0x0 = a total of 1 transfer will be performed. 0x1 = a
								total of 2 transfers will be performed. ... 0x3FF = a total of 1,024
								transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
    }
    namespace Nonexfercfg1{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004418,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the
								current channel descriptor is valid and can potentially be acted
								upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The channel descriptor is not considered
										valid until validated by an associated SETVALID0
										setting.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered
										valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be
								reloaded when the current descriptor is exhausted. Reloading allows
								ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control
										structure when the current descriptor is
										exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            notSet=0x00000000,     ///<Not set. When written by software, the trigger for
										this channel is not set. A new trigger, as defined by the
										HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the
										channel.
            set=0x00000001,     ///<Set, When written by software, the trigger for this
										channel is set immediately. This feature should not be used
										with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::set> set{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this
										descriptor is exhausted. If there is a reload, the next
										descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this
										descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::set> set{};
        }
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8Bit=0x00000000,     ///<8-bit. 8-bit transfers are performed (8-bit source
										reads and destination writes).
            v16Bit=0x00000001,     ///<16-bit. 6-bit transfers are performed (16-bit
										source reads and destination writes).
            v32Bit=0x00000002,     ///<32-bit. 32-bit transfers are performed (32-bit
										source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v8Bit> v8Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v16Bit> v16Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v32Bit> v32Bit{};
        }
        ///Determines whether the source address is incremented for
								each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented
										for each transfer. This is the usual case when the source is
										a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the
										amount specified by Width for each transfer. This is the
										usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2
										times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4
										times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v4XWidth> v4XWidth{};
        }
        ///Determines whether the destination address is incremented
								for each DMA transfer.
        enum class DstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not
										incremented for each transfer. This is the usual case when
										the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented
										by the amount specified by Width for each transfer. This is
										the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented
										by 2 times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented
										by 4 times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DstincVal> dstinc{}; 
        namespace DstincValC{
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded.
								The number of bytes transferred is: (XFERCOUNT + 1) x data width (as
								defined by the WIDTH field). The DMA controller uses this bit field
								during transfer to count down. Hence, it cannot be used by software
								to read back the size of the transfer, for instance, in an interrupt
								handler. 0x0 = a total of 1 transfer will be performed. 0x1 = a
								total of 2 transfers will be performed. ... 0x3FF = a total of 1,024
								transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
    }
    namespace Nonexfercfg2{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004428,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the
								current channel descriptor is valid and can potentially be acted
								upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The channel descriptor is not considered
										valid until validated by an associated SETVALID0
										setting.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered
										valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be
								reloaded when the current descriptor is exhausted. Reloading allows
								ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control
										structure when the current descriptor is
										exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            notSet=0x00000000,     ///<Not set. When written by software, the trigger for
										this channel is not set. A new trigger, as defined by the
										HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the
										channel.
            set=0x00000001,     ///<Set, When written by software, the trigger for this
										channel is set immediately. This feature should not be used
										with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::set> set{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this
										descriptor is exhausted. If there is a reload, the next
										descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this
										descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::set> set{};
        }
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8Bit=0x00000000,     ///<8-bit. 8-bit transfers are performed (8-bit source
										reads and destination writes).
            v16Bit=0x00000001,     ///<16-bit. 6-bit transfers are performed (16-bit
										source reads and destination writes).
            v32Bit=0x00000002,     ///<32-bit. 32-bit transfers are performed (32-bit
										source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v8Bit> v8Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v16Bit> v16Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v32Bit> v32Bit{};
        }
        ///Determines whether the source address is incremented for
								each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented
										for each transfer. This is the usual case when the source is
										a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the
										amount specified by Width for each transfer. This is the
										usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2
										times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4
										times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v4XWidth> v4XWidth{};
        }
        ///Determines whether the destination address is incremented
								for each DMA transfer.
        enum class DstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not
										incremented for each transfer. This is the usual case when
										the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented
										by the amount specified by Width for each transfer. This is
										the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented
										by 2 times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented
										by 4 times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DstincVal> dstinc{}; 
        namespace DstincValC{
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded.
								The number of bytes transferred is: (XFERCOUNT + 1) x data width (as
								defined by the WIDTH field). The DMA controller uses this bit field
								during transfer to count down. Hence, it cannot be used by software
								to read back the size of the transfer, for instance, in an interrupt
								handler. 0x0 = a total of 1 transfer will be performed. 0x1 = a
								total of 2 transfers will be performed. ... 0x3FF = a total of 1,024
								transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
    }
    namespace Nonexfercfg3{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004438,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the
								current channel descriptor is valid and can potentially be acted
								upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The channel descriptor is not considered
										valid until validated by an associated SETVALID0
										setting.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered
										valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be
								reloaded when the current descriptor is exhausted. Reloading allows
								ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control
										structure when the current descriptor is
										exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            notSet=0x00000000,     ///<Not set. When written by software, the trigger for
										this channel is not set. A new trigger, as defined by the
										HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the
										channel.
            set=0x00000001,     ///<Set, When written by software, the trigger for this
										channel is set immediately. This feature should not be used
										with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::set> set{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this
										descriptor is exhausted. If there is a reload, the next
										descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this
										descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::set> set{};
        }
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8Bit=0x00000000,     ///<8-bit. 8-bit transfers are performed (8-bit source
										reads and destination writes).
            v16Bit=0x00000001,     ///<16-bit. 6-bit transfers are performed (16-bit
										source reads and destination writes).
            v32Bit=0x00000002,     ///<32-bit. 32-bit transfers are performed (32-bit
										source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v8Bit> v8Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v16Bit> v16Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v32Bit> v32Bit{};
        }
        ///Determines whether the source address is incremented for
								each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented
										for each transfer. This is the usual case when the source is
										a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the
										amount specified by Width for each transfer. This is the
										usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2
										times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4
										times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v4XWidth> v4XWidth{};
        }
        ///Determines whether the destination address is incremented
								for each DMA transfer.
        enum class DstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not
										incremented for each transfer. This is the usual case when
										the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented
										by the amount specified by Width for each transfer. This is
										the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented
										by 2 times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented
										by 4 times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DstincVal> dstinc{}; 
        namespace DstincValC{
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded.
								The number of bytes transferred is: (XFERCOUNT + 1) x data width (as
								defined by the WIDTH field). The DMA controller uses this bit field
								during transfer to count down. Hence, it cannot be used by software
								to read back the size of the transfer, for instance, in an interrupt
								handler. 0x0 = a total of 1 transfer will be performed. 0x1 = a
								total of 2 transfers will be performed. ... 0x3FF = a total of 1,024
								transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
    }
    namespace Nonexfercfg4{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004448,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the
								current channel descriptor is valid and can potentially be acted
								upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The channel descriptor is not considered
										valid until validated by an associated SETVALID0
										setting.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered
										valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be
								reloaded when the current descriptor is exhausted. Reloading allows
								ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control
										structure when the current descriptor is
										exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            notSet=0x00000000,     ///<Not set. When written by software, the trigger for
										this channel is not set. A new trigger, as defined by the
										HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the
										channel.
            set=0x00000001,     ///<Set, When written by software, the trigger for this
										channel is set immediately. This feature should not be used
										with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::set> set{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this
										descriptor is exhausted. If there is a reload, the next
										descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this
										descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::set> set{};
        }
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8Bit=0x00000000,     ///<8-bit. 8-bit transfers are performed (8-bit source
										reads and destination writes).
            v16Bit=0x00000001,     ///<16-bit. 6-bit transfers are performed (16-bit
										source reads and destination writes).
            v32Bit=0x00000002,     ///<32-bit. 32-bit transfers are performed (32-bit
										source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v8Bit> v8Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v16Bit> v16Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v32Bit> v32Bit{};
        }
        ///Determines whether the source address is incremented for
								each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented
										for each transfer. This is the usual case when the source is
										a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the
										amount specified by Width for each transfer. This is the
										usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2
										times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4
										times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v4XWidth> v4XWidth{};
        }
        ///Determines whether the destination address is incremented
								for each DMA transfer.
        enum class DstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not
										incremented for each transfer. This is the usual case when
										the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented
										by the amount specified by Width for each transfer. This is
										the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented
										by 2 times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented
										by 4 times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DstincVal> dstinc{}; 
        namespace DstincValC{
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded.
								The number of bytes transferred is: (XFERCOUNT + 1) x data width (as
								defined by the WIDTH field). The DMA controller uses this bit field
								during transfer to count down. Hence, it cannot be used by software
								to read back the size of the transfer, for instance, in an interrupt
								handler. 0x0 = a total of 1 transfer will be performed. 0x1 = a
								total of 2 transfers will be performed. ... 0x3FF = a total of 1,024
								transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
    }
    namespace Nonexfercfg5{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004458,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the
								current channel descriptor is valid and can potentially be acted
								upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The channel descriptor is not considered
										valid until validated by an associated SETVALID0
										setting.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered
										valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be
								reloaded when the current descriptor is exhausted. Reloading allows
								ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control
										structure when the current descriptor is
										exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            notSet=0x00000000,     ///<Not set. When written by software, the trigger for
										this channel is not set. A new trigger, as defined by the
										HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the
										channel.
            set=0x00000001,     ///<Set, When written by software, the trigger for this
										channel is set immediately. This feature should not be used
										with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::set> set{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this
										descriptor is exhausted. If there is a reload, the next
										descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this
										descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::set> set{};
        }
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8Bit=0x00000000,     ///<8-bit. 8-bit transfers are performed (8-bit source
										reads and destination writes).
            v16Bit=0x00000001,     ///<16-bit. 6-bit transfers are performed (16-bit
										source reads and destination writes).
            v32Bit=0x00000002,     ///<32-bit. 32-bit transfers are performed (32-bit
										source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v8Bit> v8Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v16Bit> v16Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v32Bit> v32Bit{};
        }
        ///Determines whether the source address is incremented for
								each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented
										for each transfer. This is the usual case when the source is
										a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the
										amount specified by Width for each transfer. This is the
										usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2
										times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4
										times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v4XWidth> v4XWidth{};
        }
        ///Determines whether the destination address is incremented
								for each DMA transfer.
        enum class DstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not
										incremented for each transfer. This is the usual case when
										the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented
										by the amount specified by Width for each transfer. This is
										the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented
										by 2 times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented
										by 4 times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DstincVal> dstinc{}; 
        namespace DstincValC{
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded.
								The number of bytes transferred is: (XFERCOUNT + 1) x data width (as
								defined by the WIDTH field). The DMA controller uses this bit field
								during transfer to count down. Hence, it cannot be used by software
								to read back the size of the transfer, for instance, in an interrupt
								handler. 0x0 = a total of 1 transfer will be performed. 0x1 = a
								total of 2 transfers will be performed. ... 0x3FF = a total of 1,024
								transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
    }
    namespace Nonexfercfg6{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004468,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the
								current channel descriptor is valid and can potentially be acted
								upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The channel descriptor is not considered
										valid until validated by an associated SETVALID0
										setting.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered
										valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be
								reloaded when the current descriptor is exhausted. Reloading allows
								ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control
										structure when the current descriptor is
										exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            notSet=0x00000000,     ///<Not set. When written by software, the trigger for
										this channel is not set. A new trigger, as defined by the
										HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the
										channel.
            set=0x00000001,     ///<Set, When written by software, the trigger for this
										channel is set immediately. This feature should not be used
										with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::set> set{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this
										descriptor is exhausted. If there is a reload, the next
										descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this
										descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::set> set{};
        }
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8Bit=0x00000000,     ///<8-bit. 8-bit transfers are performed (8-bit source
										reads and destination writes).
            v16Bit=0x00000001,     ///<16-bit. 6-bit transfers are performed (16-bit
										source reads and destination writes).
            v32Bit=0x00000002,     ///<32-bit. 32-bit transfers are performed (32-bit
										source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v8Bit> v8Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v16Bit> v16Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v32Bit> v32Bit{};
        }
        ///Determines whether the source address is incremented for
								each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented
										for each transfer. This is the usual case when the source is
										a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the
										amount specified by Width for each transfer. This is the
										usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2
										times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4
										times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v4XWidth> v4XWidth{};
        }
        ///Determines whether the destination address is incremented
								for each DMA transfer.
        enum class DstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not
										incremented for each transfer. This is the usual case when
										the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented
										by the amount specified by Width for each transfer. This is
										the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented
										by 2 times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented
										by 4 times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DstincVal> dstinc{}; 
        namespace DstincValC{
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded.
								The number of bytes transferred is: (XFERCOUNT + 1) x data width (as
								defined by the WIDTH field). The DMA controller uses this bit field
								during transfer to count down. Hence, it cannot be used by software
								to read back the size of the transfer, for instance, in an interrupt
								handler. 0x0 = a total of 1 transfer will be performed. 0x1 = a
								total of 2 transfers will be performed. ... 0x3FF = a total of 1,024
								transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
    }
    namespace Nonexfercfg7{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004478,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the
								current channel descriptor is valid and can potentially be acted
								upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The channel descriptor is not considered
										valid until validated by an associated SETVALID0
										setting.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered
										valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be
								reloaded when the current descriptor is exhausted. Reloading allows
								ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control
										structure when the current descriptor is
										exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            notSet=0x00000000,     ///<Not set. When written by software, the trigger for
										this channel is not set. A new trigger, as defined by the
										HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the
										channel.
            set=0x00000001,     ///<Set, When written by software, the trigger for this
										channel is set immediately. This feature should not be used
										with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::set> set{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this
										descriptor is exhausted. If there is a reload, the next
										descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this
										descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::set> set{};
        }
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8Bit=0x00000000,     ///<8-bit. 8-bit transfers are performed (8-bit source
										reads and destination writes).
            v16Bit=0x00000001,     ///<16-bit. 6-bit transfers are performed (16-bit
										source reads and destination writes).
            v32Bit=0x00000002,     ///<32-bit. 32-bit transfers are performed (32-bit
										source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v8Bit> v8Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v16Bit> v16Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v32Bit> v32Bit{};
        }
        ///Determines whether the source address is incremented for
								each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented
										for each transfer. This is the usual case when the source is
										a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the
										amount specified by Width for each transfer. This is the
										usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2
										times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4
										times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v4XWidth> v4XWidth{};
        }
        ///Determines whether the destination address is incremented
								for each DMA transfer.
        enum class DstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not
										incremented for each transfer. This is the usual case when
										the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented
										by the amount specified by Width for each transfer. This is
										the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented
										by 2 times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented
										by 4 times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DstincVal> dstinc{}; 
        namespace DstincValC{
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded.
								The number of bytes transferred is: (XFERCOUNT + 1) x data width (as
								defined by the WIDTH field). The DMA controller uses this bit field
								during transfer to count down. Hence, it cannot be used by software
								to read back the size of the transfer, for instance, in an interrupt
								handler. 0x0 = a total of 1 transfer will be performed. 0x1 = a
								total of 2 transfers will be performed. ... 0x3FF = a total of 1,024
								transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
    }
    namespace Nonexfercfg8{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004488,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the
								current channel descriptor is valid and can potentially be acted
								upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The channel descriptor is not considered
										valid until validated by an associated SETVALID0
										setting.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered
										valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be
								reloaded when the current descriptor is exhausted. Reloading allows
								ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control
										structure when the current descriptor is
										exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            notSet=0x00000000,     ///<Not set. When written by software, the trigger for
										this channel is not set. A new trigger, as defined by the
										HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the
										channel.
            set=0x00000001,     ///<Set, When written by software, the trigger for this
										channel is set immediately. This feature should not be used
										with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::set> set{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this
										descriptor is exhausted. If there is a reload, the next
										descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this
										descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::set> set{};
        }
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8Bit=0x00000000,     ///<8-bit. 8-bit transfers are performed (8-bit source
										reads and destination writes).
            v16Bit=0x00000001,     ///<16-bit. 6-bit transfers are performed (16-bit
										source reads and destination writes).
            v32Bit=0x00000002,     ///<32-bit. 32-bit transfers are performed (32-bit
										source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v8Bit> v8Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v16Bit> v16Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v32Bit> v32Bit{};
        }
        ///Determines whether the source address is incremented for
								each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented
										for each transfer. This is the usual case when the source is
										a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the
										amount specified by Width for each transfer. This is the
										usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2
										times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4
										times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v4XWidth> v4XWidth{};
        }
        ///Determines whether the destination address is incremented
								for each DMA transfer.
        enum class DstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not
										incremented for each transfer. This is the usual case when
										the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented
										by the amount specified by Width for each transfer. This is
										the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented
										by 2 times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented
										by 4 times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DstincVal> dstinc{}; 
        namespace DstincValC{
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded.
								The number of bytes transferred is: (XFERCOUNT + 1) x data width (as
								defined by the WIDTH field). The DMA controller uses this bit field
								during transfer to count down. Hence, it cannot be used by software
								to read back the size of the transfer, for instance, in an interrupt
								handler. 0x0 = a total of 1 transfer will be performed. 0x1 = a
								total of 2 transfers will be performed. ... 0x3FF = a total of 1,024
								transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
    }
    namespace Nonexfercfg9{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004498,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the
								current channel descriptor is valid and can potentially be acted
								upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The channel descriptor is not considered
										valid until validated by an associated SETVALID0
										setting.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered
										valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be
								reloaded when the current descriptor is exhausted. Reloading allows
								ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control
										structure when the current descriptor is
										exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            notSet=0x00000000,     ///<Not set. When written by software, the trigger for
										this channel is not set. A new trigger, as defined by the
										HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the
										channel.
            set=0x00000001,     ///<Set, When written by software, the trigger for this
										channel is set immediately. This feature should not be used
										with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::set> set{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this
										descriptor is exhausted. If there is a reload, the next
										descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this
										descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::set> set{};
        }
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8Bit=0x00000000,     ///<8-bit. 8-bit transfers are performed (8-bit source
										reads and destination writes).
            v16Bit=0x00000001,     ///<16-bit. 6-bit transfers are performed (16-bit
										source reads and destination writes).
            v32Bit=0x00000002,     ///<32-bit. 32-bit transfers are performed (32-bit
										source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v8Bit> v8Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v16Bit> v16Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v32Bit> v32Bit{};
        }
        ///Determines whether the source address is incremented for
								each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented
										for each transfer. This is the usual case when the source is
										a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the
										amount specified by Width for each transfer. This is the
										usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2
										times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4
										times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v4XWidth> v4XWidth{};
        }
        ///Determines whether the destination address is incremented
								for each DMA transfer.
        enum class DstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not
										incremented for each transfer. This is the usual case when
										the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented
										by the amount specified by Width for each transfer. This is
										the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented
										by 2 times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented
										by 4 times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DstincVal> dstinc{}; 
        namespace DstincValC{
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded.
								The number of bytes transferred is: (XFERCOUNT + 1) x data width (as
								defined by the WIDTH field). The DMA controller uses this bit field
								during transfer to count down. Hence, it cannot be used by software
								to read back the size of the transfer, for instance, in an interrupt
								handler. 0x0 = a total of 1 transfer will be performed. 0x1 = a
								total of 2 transfers will be performed. ... 0x3FF = a total of 1,024
								transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
    }
    namespace Nonexfercfg10{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044a8,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the
								current channel descriptor is valid and can potentially be acted
								upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The channel descriptor is not considered
										valid until validated by an associated SETVALID0
										setting.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered
										valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be
								reloaded when the current descriptor is exhausted. Reloading allows
								ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control
										structure when the current descriptor is
										exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            notSet=0x00000000,     ///<Not set. When written by software, the trigger for
										this channel is not set. A new trigger, as defined by the
										HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the
										channel.
            set=0x00000001,     ///<Set, When written by software, the trigger for this
										channel is set immediately. This feature should not be used
										with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::set> set{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this
										descriptor is exhausted. If there is a reload, the next
										descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this
										descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::set> set{};
        }
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8Bit=0x00000000,     ///<8-bit. 8-bit transfers are performed (8-bit source
										reads and destination writes).
            v16Bit=0x00000001,     ///<16-bit. 6-bit transfers are performed (16-bit
										source reads and destination writes).
            v32Bit=0x00000002,     ///<32-bit. 32-bit transfers are performed (32-bit
										source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v8Bit> v8Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v16Bit> v16Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v32Bit> v32Bit{};
        }
        ///Determines whether the source address is incremented for
								each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented
										for each transfer. This is the usual case when the source is
										a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the
										amount specified by Width for each transfer. This is the
										usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2
										times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4
										times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v4XWidth> v4XWidth{};
        }
        ///Determines whether the destination address is incremented
								for each DMA transfer.
        enum class DstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not
										incremented for each transfer. This is the usual case when
										the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented
										by the amount specified by Width for each transfer. This is
										the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented
										by 2 times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented
										by 4 times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DstincVal> dstinc{}; 
        namespace DstincValC{
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded.
								The number of bytes transferred is: (XFERCOUNT + 1) x data width (as
								defined by the WIDTH field). The DMA controller uses this bit field
								during transfer to count down. Hence, it cannot be used by software
								to read back the size of the transfer, for instance, in an interrupt
								handler. 0x0 = a total of 1 transfer will be performed. 0x1 = a
								total of 2 transfers will be performed. ... 0x3FF = a total of 1,024
								transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
    }
    namespace Nonexfercfg11{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044b8,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the
								current channel descriptor is valid and can potentially be acted
								upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The channel descriptor is not considered
										valid until validated by an associated SETVALID0
										setting.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered
										valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be
								reloaded when the current descriptor is exhausted. Reloading allows
								ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control
										structure when the current descriptor is
										exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            notSet=0x00000000,     ///<Not set. When written by software, the trigger for
										this channel is not set. A new trigger, as defined by the
										HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the
										channel.
            set=0x00000001,     ///<Set, When written by software, the trigger for this
										channel is set immediately. This feature should not be used
										with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::set> set{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this
										descriptor is exhausted. If there is a reload, the next
										descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this
										descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::set> set{};
        }
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8Bit=0x00000000,     ///<8-bit. 8-bit transfers are performed (8-bit source
										reads and destination writes).
            v16Bit=0x00000001,     ///<16-bit. 6-bit transfers are performed (16-bit
										source reads and destination writes).
            v32Bit=0x00000002,     ///<32-bit. 32-bit transfers are performed (32-bit
										source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v8Bit> v8Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v16Bit> v16Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v32Bit> v32Bit{};
        }
        ///Determines whether the source address is incremented for
								each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented
										for each transfer. This is the usual case when the source is
										a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the
										amount specified by Width for each transfer. This is the
										usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2
										times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4
										times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v4XWidth> v4XWidth{};
        }
        ///Determines whether the destination address is incremented
								for each DMA transfer.
        enum class DstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not
										incremented for each transfer. This is the usual case when
										the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented
										by the amount specified by Width for each transfer. This is
										the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented
										by 2 times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented
										by 4 times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DstincVal> dstinc{}; 
        namespace DstincValC{
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded.
								The number of bytes transferred is: (XFERCOUNT + 1) x data width (as
								defined by the WIDTH field). The DMA controller uses this bit field
								during transfer to count down. Hence, it cannot be used by software
								to read back the size of the transfer, for instance, in an interrupt
								handler. 0x0 = a total of 1 transfer will be performed. 0x1 = a
								total of 2 transfers will be performed. ... 0x3FF = a total of 1,024
								transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
    }
    namespace Nonexfercfg12{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044c8,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the
								current channel descriptor is valid and can potentially be acted
								upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The channel descriptor is not considered
										valid until validated by an associated SETVALID0
										setting.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered
										valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be
								reloaded when the current descriptor is exhausted. Reloading allows
								ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control
										structure when the current descriptor is
										exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            notSet=0x00000000,     ///<Not set. When written by software, the trigger for
										this channel is not set. A new trigger, as defined by the
										HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the
										channel.
            set=0x00000001,     ///<Set, When written by software, the trigger for this
										channel is set immediately. This feature should not be used
										with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::set> set{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this
										descriptor is exhausted. If there is a reload, the next
										descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this
										descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::set> set{};
        }
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8Bit=0x00000000,     ///<8-bit. 8-bit transfers are performed (8-bit source
										reads and destination writes).
            v16Bit=0x00000001,     ///<16-bit. 6-bit transfers are performed (16-bit
										source reads and destination writes).
            v32Bit=0x00000002,     ///<32-bit. 32-bit transfers are performed (32-bit
										source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v8Bit> v8Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v16Bit> v16Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v32Bit> v32Bit{};
        }
        ///Determines whether the source address is incremented for
								each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented
										for each transfer. This is the usual case when the source is
										a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the
										amount specified by Width for each transfer. This is the
										usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2
										times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4
										times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v4XWidth> v4XWidth{};
        }
        ///Determines whether the destination address is incremented
								for each DMA transfer.
        enum class DstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not
										incremented for each transfer. This is the usual case when
										the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented
										by the amount specified by Width for each transfer. This is
										the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented
										by 2 times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented
										by 4 times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DstincVal> dstinc{}; 
        namespace DstincValC{
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded.
								The number of bytes transferred is: (XFERCOUNT + 1) x data width (as
								defined by the WIDTH field). The DMA controller uses this bit field
								during transfer to count down. Hence, it cannot be used by software
								to read back the size of the transfer, for instance, in an interrupt
								handler. 0x0 = a total of 1 transfer will be performed. 0x1 = a
								total of 2 transfers will be performed. ... 0x3FF = a total of 1,024
								transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
    }
    namespace Nonexfercfg13{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044d8,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the
								current channel descriptor is valid and can potentially be acted
								upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The channel descriptor is not considered
										valid until validated by an associated SETVALID0
										setting.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered
										valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be
								reloaded when the current descriptor is exhausted. Reloading allows
								ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control
										structure when the current descriptor is
										exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            notSet=0x00000000,     ///<Not set. When written by software, the trigger for
										this channel is not set. A new trigger, as defined by the
										HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the
										channel.
            set=0x00000001,     ///<Set, When written by software, the trigger for this
										channel is set immediately. This feature should not be used
										with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::set> set{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this
										descriptor is exhausted. If there is a reload, the next
										descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this
										descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::set> set{};
        }
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8Bit=0x00000000,     ///<8-bit. 8-bit transfers are performed (8-bit source
										reads and destination writes).
            v16Bit=0x00000001,     ///<16-bit. 6-bit transfers are performed (16-bit
										source reads and destination writes).
            v32Bit=0x00000002,     ///<32-bit. 32-bit transfers are performed (32-bit
										source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v8Bit> v8Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v16Bit> v16Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v32Bit> v32Bit{};
        }
        ///Determines whether the source address is incremented for
								each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented
										for each transfer. This is the usual case when the source is
										a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the
										amount specified by Width for each transfer. This is the
										usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2
										times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4
										times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v4XWidth> v4XWidth{};
        }
        ///Determines whether the destination address is incremented
								for each DMA transfer.
        enum class DstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not
										incremented for each transfer. This is the usual case when
										the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented
										by the amount specified by Width for each transfer. This is
										the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented
										by 2 times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented
										by 4 times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DstincVal> dstinc{}; 
        namespace DstincValC{
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded.
								The number of bytes transferred is: (XFERCOUNT + 1) x data width (as
								defined by the WIDTH field). The DMA controller uses this bit field
								during transfer to count down. Hence, it cannot be used by software
								to read back the size of the transfer, for instance, in an interrupt
								handler. 0x0 = a total of 1 transfer will be performed. 0x1 = a
								total of 2 transfers will be performed. ... 0x3FF = a total of 1,024
								transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
    }
    namespace Nonexfercfg14{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044e8,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the
								current channel descriptor is valid and can potentially be acted
								upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The channel descriptor is not considered
										valid until validated by an associated SETVALID0
										setting.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered
										valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be
								reloaded when the current descriptor is exhausted. Reloading allows
								ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control
										structure when the current descriptor is
										exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            notSet=0x00000000,     ///<Not set. When written by software, the trigger for
										this channel is not set. A new trigger, as defined by the
										HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the
										channel.
            set=0x00000001,     ///<Set, When written by software, the trigger for this
										channel is set immediately. This feature should not be used
										with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::set> set{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this
										descriptor is exhausted. If there is a reload, the next
										descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this
										descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::set> set{};
        }
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8Bit=0x00000000,     ///<8-bit. 8-bit transfers are performed (8-bit source
										reads and destination writes).
            v16Bit=0x00000001,     ///<16-bit. 6-bit transfers are performed (16-bit
										source reads and destination writes).
            v32Bit=0x00000002,     ///<32-bit. 32-bit transfers are performed (32-bit
										source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v8Bit> v8Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v16Bit> v16Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v32Bit> v32Bit{};
        }
        ///Determines whether the source address is incremented for
								each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented
										for each transfer. This is the usual case when the source is
										a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the
										amount specified by Width for each transfer. This is the
										usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2
										times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4
										times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v4XWidth> v4XWidth{};
        }
        ///Determines whether the destination address is incremented
								for each DMA transfer.
        enum class DstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not
										incremented for each transfer. This is the usual case when
										the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented
										by the amount specified by Width for each transfer. This is
										the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented
										by 2 times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented
										by 4 times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DstincVal> dstinc{}; 
        namespace DstincValC{
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded.
								The number of bytes transferred is: (XFERCOUNT + 1) x data width (as
								defined by the WIDTH field). The DMA controller uses this bit field
								during transfer to count down. Hence, it cannot be used by software
								to read back the size of the transfer, for instance, in an interrupt
								handler. 0x0 = a total of 1 transfer will be performed. 0x1 = a
								total of 2 transfers will be performed. ... 0x3FF = a total of 1,024
								transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
    }
    namespace Nonexfercfg15{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c0044f8,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the
								current channel descriptor is valid and can potentially be acted
								upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The channel descriptor is not considered
										valid until validated by an associated SETVALID0
										setting.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered
										valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be
								reloaded when the current descriptor is exhausted. Reloading allows
								ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control
										structure when the current descriptor is
										exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            notSet=0x00000000,     ///<Not set. When written by software, the trigger for
										this channel is not set. A new trigger, as defined by the
										HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the
										channel.
            set=0x00000001,     ///<Set, When written by software, the trigger for this
										channel is set immediately. This feature should not be used
										with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::set> set{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this
										descriptor is exhausted. If there is a reload, the next
										descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this
										descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::set> set{};
        }
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8Bit=0x00000000,     ///<8-bit. 8-bit transfers are performed (8-bit source
										reads and destination writes).
            v16Bit=0x00000001,     ///<16-bit. 6-bit transfers are performed (16-bit
										source reads and destination writes).
            v32Bit=0x00000002,     ///<32-bit. 32-bit transfers are performed (32-bit
										source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v8Bit> v8Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v16Bit> v16Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v32Bit> v32Bit{};
        }
        ///Determines whether the source address is incremented for
								each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented
										for each transfer. This is the usual case when the source is
										a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the
										amount specified by Width for each transfer. This is the
										usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2
										times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4
										times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v4XWidth> v4XWidth{};
        }
        ///Determines whether the destination address is incremented
								for each DMA transfer.
        enum class DstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not
										incremented for each transfer. This is the usual case when
										the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented
										by the amount specified by Width for each transfer. This is
										the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented
										by 2 times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented
										by 4 times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DstincVal> dstinc{}; 
        namespace DstincValC{
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded.
								The number of bytes transferred is: (XFERCOUNT + 1) x data width (as
								defined by the WIDTH field). The DMA controller uses this bit field
								during transfer to count down. Hence, it cannot be used by software
								to read back the size of the transfer, for instance, in an interrupt
								handler. 0x0 = a total of 1 transfer will be performed. 0x1 = a
								total of 2 transfers will be performed. ... 0x3FF = a total of 1,024
								transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
    }
    namespace Nonexfercfg16{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004508,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the
								current channel descriptor is valid and can potentially be acted
								upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The channel descriptor is not considered
										valid until validated by an associated SETVALID0
										setting.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered
										valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be
								reloaded when the current descriptor is exhausted. Reloading allows
								ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control
										structure when the current descriptor is
										exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            notSet=0x00000000,     ///<Not set. When written by software, the trigger for
										this channel is not set. A new trigger, as defined by the
										HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the
										channel.
            set=0x00000001,     ///<Set, When written by software, the trigger for this
										channel is set immediately. This feature should not be used
										with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::set> set{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this
										descriptor is exhausted. If there is a reload, the next
										descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this
										descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::set> set{};
        }
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8Bit=0x00000000,     ///<8-bit. 8-bit transfers are performed (8-bit source
										reads and destination writes).
            v16Bit=0x00000001,     ///<16-bit. 6-bit transfers are performed (16-bit
										source reads and destination writes).
            v32Bit=0x00000002,     ///<32-bit. 32-bit transfers are performed (32-bit
										source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v8Bit> v8Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v16Bit> v16Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v32Bit> v32Bit{};
        }
        ///Determines whether the source address is incremented for
								each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented
										for each transfer. This is the usual case when the source is
										a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the
										amount specified by Width for each transfer. This is the
										usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2
										times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4
										times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v4XWidth> v4XWidth{};
        }
        ///Determines whether the destination address is incremented
								for each DMA transfer.
        enum class DstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not
										incremented for each transfer. This is the usual case when
										the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented
										by the amount specified by Width for each transfer. This is
										the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented
										by 2 times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented
										by 4 times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DstincVal> dstinc{}; 
        namespace DstincValC{
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded.
								The number of bytes transferred is: (XFERCOUNT + 1) x data width (as
								defined by the WIDTH field). The DMA controller uses this bit field
								during transfer to count down. Hence, it cannot be used by software
								to read back the size of the transfer, for instance, in an interrupt
								handler. 0x0 = a total of 1 transfer will be performed. 0x1 = a
								total of 2 transfers will be performed. ... 0x3FF = a total of 1,024
								transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
    }
    namespace Nonexfercfg17{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004518,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the
								current channel descriptor is valid and can potentially be acted
								upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The channel descriptor is not considered
										valid until validated by an associated SETVALID0
										setting.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered
										valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be
								reloaded when the current descriptor is exhausted. Reloading allows
								ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control
										structure when the current descriptor is
										exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            notSet=0x00000000,     ///<Not set. When written by software, the trigger for
										this channel is not set. A new trigger, as defined by the
										HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the
										channel.
            set=0x00000001,     ///<Set, When written by software, the trigger for this
										channel is set immediately. This feature should not be used
										with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::set> set{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this
										descriptor is exhausted. If there is a reload, the next
										descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this
										descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::set> set{};
        }
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8Bit=0x00000000,     ///<8-bit. 8-bit transfers are performed (8-bit source
										reads and destination writes).
            v16Bit=0x00000001,     ///<16-bit. 6-bit transfers are performed (16-bit
										source reads and destination writes).
            v32Bit=0x00000002,     ///<32-bit. 32-bit transfers are performed (32-bit
										source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v8Bit> v8Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v16Bit> v16Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v32Bit> v32Bit{};
        }
        ///Determines whether the source address is incremented for
								each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented
										for each transfer. This is the usual case when the source is
										a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the
										amount specified by Width for each transfer. This is the
										usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2
										times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4
										times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v4XWidth> v4XWidth{};
        }
        ///Determines whether the destination address is incremented
								for each DMA transfer.
        enum class DstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not
										incremented for each transfer. This is the usual case when
										the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented
										by the amount specified by Width for each transfer. This is
										the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented
										by 2 times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented
										by 4 times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DstincVal> dstinc{}; 
        namespace DstincValC{
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded.
								The number of bytes transferred is: (XFERCOUNT + 1) x data width (as
								defined by the WIDTH field). The DMA controller uses this bit field
								during transfer to count down. Hence, it cannot be used by software
								to read back the size of the transfer, for instance, in an interrupt
								handler. 0x0 = a total of 1 transfer will be performed. 0x1 = a
								total of 2 transfers will be performed. ... 0x3FF = a total of 1,024
								transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
    }
    namespace Nonexfercfg18{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004528,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the
								current channel descriptor is valid and can potentially be acted
								upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The channel descriptor is not considered
										valid until validated by an associated SETVALID0
										setting.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered
										valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be
								reloaded when the current descriptor is exhausted. Reloading allows
								ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control
										structure when the current descriptor is
										exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            notSet=0x00000000,     ///<Not set. When written by software, the trigger for
										this channel is not set. A new trigger, as defined by the
										HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the
										channel.
            set=0x00000001,     ///<Set, When written by software, the trigger for this
										channel is set immediately. This feature should not be used
										with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::set> set{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this
										descriptor is exhausted. If there is a reload, the next
										descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this
										descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::set> set{};
        }
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8Bit=0x00000000,     ///<8-bit. 8-bit transfers are performed (8-bit source
										reads and destination writes).
            v16Bit=0x00000001,     ///<16-bit. 6-bit transfers are performed (16-bit
										source reads and destination writes).
            v32Bit=0x00000002,     ///<32-bit. 32-bit transfers are performed (32-bit
										source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v8Bit> v8Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v16Bit> v16Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v32Bit> v32Bit{};
        }
        ///Determines whether the source address is incremented for
								each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented
										for each transfer. This is the usual case when the source is
										a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the
										amount specified by Width for each transfer. This is the
										usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2
										times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4
										times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v4XWidth> v4XWidth{};
        }
        ///Determines whether the destination address is incremented
								for each DMA transfer.
        enum class DstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not
										incremented for each transfer. This is the usual case when
										the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented
										by the amount specified by Width for each transfer. This is
										the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented
										by 2 times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented
										by 4 times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DstincVal> dstinc{}; 
        namespace DstincValC{
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded.
								The number of bytes transferred is: (XFERCOUNT + 1) x data width (as
								defined by the WIDTH field). The DMA controller uses this bit field
								during transfer to count down. Hence, it cannot be used by software
								to read back the size of the transfer, for instance, in an interrupt
								handler. 0x0 = a total of 1 transfer will be performed. 0x1 = a
								total of 2 transfers will be performed. ... 0x3FF = a total of 1,024
								transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
    }
    namespace Nonexfercfg19{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004538,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the
								current channel descriptor is valid and can potentially be acted
								upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The channel descriptor is not considered
										valid until validated by an associated SETVALID0
										setting.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered
										valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be
								reloaded when the current descriptor is exhausted. Reloading allows
								ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control
										structure when the current descriptor is
										exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            notSet=0x00000000,     ///<Not set. When written by software, the trigger for
										this channel is not set. A new trigger, as defined by the
										HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the
										channel.
            set=0x00000001,     ///<Set, When written by software, the trigger for this
										channel is set immediately. This feature should not be used
										with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::set> set{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this
										descriptor is exhausted. If there is a reload, the next
										descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this
										descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::set> set{};
        }
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8Bit=0x00000000,     ///<8-bit. 8-bit transfers are performed (8-bit source
										reads and destination writes).
            v16Bit=0x00000001,     ///<16-bit. 6-bit transfers are performed (16-bit
										source reads and destination writes).
            v32Bit=0x00000002,     ///<32-bit. 32-bit transfers are performed (32-bit
										source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v8Bit> v8Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v16Bit> v16Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v32Bit> v32Bit{};
        }
        ///Determines whether the source address is incremented for
								each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented
										for each transfer. This is the usual case when the source is
										a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the
										amount specified by Width for each transfer. This is the
										usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2
										times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4
										times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v4XWidth> v4XWidth{};
        }
        ///Determines whether the destination address is incremented
								for each DMA transfer.
        enum class DstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not
										incremented for each transfer. This is the usual case when
										the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented
										by the amount specified by Width for each transfer. This is
										the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented
										by 2 times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented
										by 4 times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DstincVal> dstinc{}; 
        namespace DstincValC{
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded.
								The number of bytes transferred is: (XFERCOUNT + 1) x data width (as
								defined by the WIDTH field). The DMA controller uses this bit field
								during transfer to count down. Hence, it cannot be used by software
								to read back the size of the transfer, for instance, in an interrupt
								handler. 0x0 = a total of 1 transfer will be performed. 0x1 = a
								total of 2 transfers will be performed. ... 0x3FF = a total of 1,024
								transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
    }
    namespace Nonexfercfg20{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004548,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the
								current channel descriptor is valid and can potentially be acted
								upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The channel descriptor is not considered
										valid until validated by an associated SETVALID0
										setting.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered
										valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be
								reloaded when the current descriptor is exhausted. Reloading allows
								ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control
										structure when the current descriptor is
										exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            notSet=0x00000000,     ///<Not set. When written by software, the trigger for
										this channel is not set. A new trigger, as defined by the
										HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the
										channel.
            set=0x00000001,     ///<Set, When written by software, the trigger for this
										channel is set immediately. This feature should not be used
										with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::set> set{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this
										descriptor is exhausted. If there is a reload, the next
										descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this
										descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::set> set{};
        }
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8Bit=0x00000000,     ///<8-bit. 8-bit transfers are performed (8-bit source
										reads and destination writes).
            v16Bit=0x00000001,     ///<16-bit. 6-bit transfers are performed (16-bit
										source reads and destination writes).
            v32Bit=0x00000002,     ///<32-bit. 32-bit transfers are performed (32-bit
										source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v8Bit> v8Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v16Bit> v16Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v32Bit> v32Bit{};
        }
        ///Determines whether the source address is incremented for
								each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented
										for each transfer. This is the usual case when the source is
										a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the
										amount specified by Width for each transfer. This is the
										usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2
										times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4
										times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v4XWidth> v4XWidth{};
        }
        ///Determines whether the destination address is incremented
								for each DMA transfer.
        enum class DstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not
										incremented for each transfer. This is the usual case when
										the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented
										by the amount specified by Width for each transfer. This is
										the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented
										by 2 times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented
										by 4 times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DstincVal> dstinc{}; 
        namespace DstincValC{
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded.
								The number of bytes transferred is: (XFERCOUNT + 1) x data width (as
								defined by the WIDTH field). The DMA controller uses this bit field
								during transfer to count down. Hence, it cannot be used by software
								to read back the size of the transfer, for instance, in an interrupt
								handler. 0x0 = a total of 1 transfer will be performed. 0x1 = a
								total of 2 transfers will be performed. ... 0x3FF = a total of 1,024
								transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
    }
    namespace Nonexfercfg21{    ///<Transfer configuration register for DMA channel 0.
        using Addr = Register::Address<0x1c004558,0xfc000cc0,0,unsigned>;
        ///Configuration Valid flag. This bit indicates whether the
								current channel descriptor is valid and can potentially be acted
								upon, if all other activation criteria are fulfilled.
        enum class CfgvalidVal {
            notValid=0x00000000,     ///<Not valid. The channel descriptor is not considered
										valid until validated by an associated SETVALID0
										setting.
            valid=0x00000001,     ///<Valid. The current channel descriptor is considered
										valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CfgvalidVal> cfgvalid{}; 
        namespace CfgvalidValC{
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::notValid> notValid{};
            constexpr Register::FieldValue<decltype(cfgvalid)::Type,CfgvalidVal::valid> valid{};
        }
        ///Indicates whether the channel's control structure will be
								reloaded when the current descriptor is exhausted. Reloading allows
								ping-pong and linked transfers.
        enum class ReloadVal {
            disabled=0x00000000,     ///<Disabled. Do not reload the channels' control
										structure when the current descriptor is
										exhausted.
            enabled=0x00000001,     ///<Enabled. Reload the channels' control structure
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ReloadVal> reload{}; 
        namespace ReloadValC{
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(reload)::Type,ReloadVal::enabled> enabled{};
        }
        ///Software Trigger.
        enum class SwtrigVal {
            notSet=0x00000000,     ///<Not set. When written by software, the trigger for
										this channel is not set. A new trigger, as defined by the
										HWTRIGEN, TRIGPOL, and TRIGTYPE will be needed to start the
										channel.
            set=0x00000001,     ///<Set, When written by software, the trigger for this
										channel is set immediately. This feature should not be used
										with level triggering when TRIGBURST = 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SwtrigVal> swtrig{}; 
        namespace SwtrigValC{
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(swtrig)::Type,SwtrigVal::set> set{};
        }
        ///Clear Trigger.
        enum class ClrtrigVal {
            notCleared=0x00000000,     ///<Not cleared. The trigger is not cleared when this
										descriptor is exhausted. If there is a reload, the next
										descriptor will be started.
            cleared=0x00000001,     ///<Cleared. The trigger is cleared when this
										descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ClrtrigVal> clrtrig{}; 
        namespace ClrtrigValC{
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::notCleared> notCleared{};
            constexpr Register::FieldValue<decltype(clrtrig)::Type,ClrtrigVal::cleared> cleared{};
        }
        ///Set Interrupt flag A for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintaVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTA flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SetintaVal> setinta{}; 
        namespace SetintaValC{
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setinta)::Type,SetintaVal::set> set{};
        }
        ///Set Interrupt flag B for this channel. There is no hardware
								distinction between interrupt A and B. They can be used by software
								to assist with more complex descriptor usage. By convention,
								interrupt A may be used when only one interrupt flag is
								needed.
        enum class SetintbVal {
            noEffect=0x00000000,     ///<No effect.
            set=0x00000001,     ///<Set. The INTB flag for this channel will be set
										when the current descriptor is exhausted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SetintbVal> setintb{}; 
        namespace SetintbValC{
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::noEffect> noEffect{};
            constexpr Register::FieldValue<decltype(setintb)::Type,SetintbVal::set> set{};
        }
        ///Transfer width used for this DMA channel.
        enum class WidthVal {
            v8Bit=0x00000000,     ///<8-bit. 8-bit transfers are performed (8-bit source
										reads and destination writes).
            v16Bit=0x00000001,     ///<16-bit. 6-bit transfers are performed (16-bit
										source reads and destination writes).
            v32Bit=0x00000002,     ///<32-bit. 32-bit transfers are performed (32-bit
										source reads and destination writes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,WidthVal> width{}; 
        namespace WidthValC{
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v8Bit> v8Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v16Bit> v16Bit{};
            constexpr Register::FieldValue<decltype(width)::Type,WidthVal::v32Bit> v32Bit{};
        }
        ///Determines whether the source address is incremented for
								each DMA transfer.
        enum class SrcincVal {
            noIncrement=0x00000000,     ///<No increment. The source address is not incremented
										for each transfer. This is the usual case when the source is
										a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The source address is incremented by the
										amount specified by Width for each transfer. This is the
										usual case when the source is memory.
            v2XWidth=0x00000002,     ///<2 x width. The source address is incremented by 2
										times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The source address is incremented by 4
										times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,SrcincVal> srcinc{}; 
        namespace SrcincValC{
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(srcinc)::Type,SrcincVal::v4XWidth> v4XWidth{};
        }
        ///Determines whether the destination address is incremented
								for each DMA transfer.
        enum class DstincVal {
            noIncrement=0x00000000,     ///<No increment. The destination address is not
										incremented for each transfer. This is the usual case when
										the destination is a peripheral device.
            v1XWidth=0x00000001,     ///<1 x width. The destination address is incremented
										by the amount specified by Width for each transfer. This is
										the usual case when the destination is memory.
            v2XWidth=0x00000002,     ///<2 x width. The destination address is incremented
										by 2 times the amount specified by Width for each
										transfer.
            v4XWidth=0x00000003,     ///<4 x width. The destination address is incremented
										by 4 times the amount specified by Width for each
										transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,DstincVal> dstinc{}; 
        namespace DstincValC{
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::noIncrement> noIncrement{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v1XWidth> v1XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v2XWidth> v2XWidth{};
            constexpr Register::FieldValue<decltype(dstinc)::Type,DstincVal::v4XWidth> v4XWidth{};
        }
        ///Total number of transfers to be performed, minus 1 encoded.
								The number of bytes transferred is: (XFERCOUNT + 1) x data width (as
								defined by the WIDTH field). The DMA controller uses this bit field
								during transfer to count down. Hence, it cannot be used by software
								to read back the size of the transfer, for instance, in an interrupt
								handler. 0x0 = a total of 1 transfer will be performed. 0x1 = a
								total of 2 transfers will be performed. ... 0x3FF = a total of 1,024
								transfers will be performed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> xfercount{}; 
    }
}
