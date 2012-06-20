/*
 * Copyright (c) 1997, 2010, Oracle and/or its affiliates. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Please contact Oracle, 500 Oracle Parkway, Redwood Shores, CA 94065 USA
 * or visit www.oracle.com if you need additional information or have any
 * questions.
 *
 */

// The giant table of Node classes.
// One entry per class, sorted by class name.

macro(AbsD)
macro(AbsF)
macro(AbsI)
macro(AddD)
macro(AddF)
macro(AddI)
macro(AddL)
macro(AddP)
macro(Allocate)
macro(AllocateArray)
macro(AndI)
macro(AndL)
macro(AryEq)
macro(AtanD)
macro(Binary)
macro(Bool)
macro(BoxLock)
macro(ReverseBytesI)
macro(ReverseBytesL)
macro(ReverseBytesUS)
macro(ReverseBytesS)
macro(CProj)
macro(CallDynamicJava)
macro(CallJava)
macro(CallLeaf)
macro(CallLeafNoFP)
macro(CallRuntime)
macro(CallStaticJava)
macro(CastII)
macro(CastX2P)
macro(CastP2X)
macro(CastPP)
macro(Catch)
macro(CatchProj)
macro(CheckCastPP)
macro(ClearArray)
macro(ConstraintCast)
macro(CMoveD)
macro(CMoveF)
macro(CMoveI)
macro(CMoveL)
macro(CMoveP)
macro(CMoveN)
macro(CmpN)
macro(CmpD)
macro(CmpD3)
macro(CmpF)
macro(CmpF3)
macro(CmpI)
macro(CmpL)
macro(CmpL3)
macro(CmpLTMask)
macro(CmpP)
macro(CmpU)
macro(CompareAndSwapI)
macro(CompareAndSwapL)
macro(CompareAndSwapP)
macro(CompareAndSwapN)
macro(Con)
macro(ConN)
macro(ConD)
macro(ConF)
macro(ConI)
macro(ConL)
macro(ConP)
macro(Conv2B)
macro(ConvD2F)
macro(ConvD2I)
macro(ConvD2L)
macro(ConvF2D)
macro(ConvF2I)
macro(ConvF2L)
macro(ConvI2D)
macro(ConvI2F)
macro(ConvI2L)
macro(ConvL2D)
macro(ConvL2F)
macro(ConvL2I)
macro(CosD)
macro(CountedLoop)
macro(CountedLoopEnd)
macro(CountLeadingZerosI)
macro(CountLeadingZerosL)
macro(CountTrailingZerosI)
macro(CountTrailingZerosL)
macro(CreateEx)
macro(DecodeN)
macro(DivD)
macro(DivF)
macro(DivI)
macro(DivL)
macro(DivMod)
macro(DivModI)
macro(DivModL)
macro(EncodeP)
macro(ExpD)
macro(FastLock)
macro(FastUnlock)
macro(Goto)
macro(Halt)
macro(If)
macro(IfFalse)
macro(IfTrue)
macro(Initialize)
macro(JProj)
macro(Jump)
macro(JumpProj)
macro(LShiftI)
macro(LShiftL)
macro(LoadB)
macro(LoadUB)
macro(LoadUS)
macro(LoadD)
macro(LoadD_unaligned)
macro(LoadF)
macro(LoadI)
macro(LoadUI2L)
macro(LoadKlass)
macro(LoadNKlass)
macro(LoadL)
macro(LoadL_unaligned)
macro(LoadPLocked)
macro(LoadP)
macro(LoadN)
macro(LoadRange)
macro(LoadS)
macro(Lock)
macro(LogD)
macro(Log10D)
macro(Loop)
macro(LoopLimit)
macro(Mach)
macro(MachProj)
macro(MaxI)
macro(MemBarAcquire)
macro(MemBarAcquireLock)
macro(MemBarCPUOrder)
macro(MemBarRelease)
macro(MemBarReleaseLock)
macro(MemBarVolatile)
macro(MemBarStoreStore)
macro(MergeMem)
macro(MinI)
macro(ModD)
macro(ModF)
macro(ModI)
macro(ModL)
macro(MoveI2F)
macro(MoveF2I)
macro(MoveL2D)
macro(MoveD2L)
macro(MulD)
macro(MulF)
macro(MulHiL)
macro(MulI)
macro(MulL)
macro(Multi)
macro(NegD)
macro(NegF)
macro(NeverBranch)
macro(Opaque1)
macro(Opaque2)
macro(OrI)
macro(OrL)
macro(PCTable)
macro(Parm)
macro(PartialSubtypeCheck)
macro(Phi)
macro(PopCountI)
macro(PopCountL)
macro(PowD)
macro(PrefetchAllocation)
macro(PrefetchRead)
macro(PrefetchWrite)
macro(Proj)
macro(RShiftI)
macro(RShiftL)
macro(Region)
macro(Rethrow)
macro(Return)
macro(Root)
macro(RoundDouble)
macro(RoundFloat)
macro(SafePoint)
macro(SafePointScalarObject)
macro(SCMemProj)
macro(SinD)
macro(SqrtD)
macro(Start)
macro(StartOSR)
macro(StoreB)
macro(StoreC)
macro(StoreCM)
macro(StorePConditional)
macro(StoreIConditional)
macro(StoreLConditional)
macro(StoreD)
macro(StoreF)
macro(StoreI)
macro(StoreL)
macro(StoreP)
macro(StoreN)
macro(StrComp)
macro(StrEquals)
macro(StrIndexOf)
macro(SubD)
macro(SubF)
macro(SubI)
macro(SubL)
macro(TailCall)
macro(TailJump)
macro(TanD)
macro(ThreadLocal)
macro(Unlock)
macro(URShiftI)
macro(URShiftL)
macro(XorI)
macro(XorL)
macro(Vector)
macro(AddVB)
macro(AddVC)
macro(AddVS)
macro(AddVI)
macro(AddVL)
macro(AddVF)
macro(AddVD)
macro(SubVB)
macro(SubVC)
macro(SubVS)
macro(SubVI)
macro(SubVL)
macro(SubVF)
macro(SubVD)
macro(MulVF)
macro(MulVD)
macro(DivVF)
macro(DivVD)
macro(LShiftVB)
macro(LShiftVC)
macro(LShiftVS)
macro(LShiftVI)
macro(URShiftVB)
macro(URShiftVC)
macro(URShiftVS)
macro(URShiftVI)
macro(AndV)
macro(OrV)
macro(XorV)
macro(VectorLoad)
macro(Load16B)
macro(Load8B)
macro(Load4B)
macro(Load8C)
macro(Load4C)
macro(Load2C)
macro(Load8S)
macro(Load4S)
macro(Load2S)
macro(Load4I)
macro(Load2I)
macro(Load2L)
macro(Load4F)
macro(Load2F)
macro(Load2D)
macro(VectorStore)
macro(Store16B)
macro(Store8B)
macro(Store4B)
macro(Store8C)
macro(Store4C)
macro(Store2C)
macro(Store4I)
macro(Store2I)
macro(Store2L)
macro(Store4F)
macro(Store2F)
macro(Store2D)
macro(Pack)
macro(PackB)
macro(PackS)
macro(PackC)
macro(PackI)
macro(PackL)
macro(PackF)
macro(PackD)
macro(Pack2x1B)
macro(Pack2x2B)
macro(Replicate16B)
macro(Replicate8B)
macro(Replicate4B)
macro(Replicate8S)
macro(Replicate4S)
macro(Replicate2S)
macro(Replicate8C)
macro(Replicate4C)
macro(Replicate2C)
macro(Replicate4I)
macro(Replicate2I)
macro(Replicate2L)
macro(Replicate4F)
macro(Replicate2F)
macro(Replicate2D)
macro(Extract)
macro(ExtractB)
macro(ExtractS)
macro(ExtractC)
macro(ExtractI)
macro(ExtractL)
macro(ExtractF)
macro(ExtractD)
