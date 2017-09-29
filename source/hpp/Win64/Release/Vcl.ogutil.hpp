﻿// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.ogutil.pas' rev: 32.00 (Windows)

#ifndef Vcl_OgutilHPP
#define Vcl_OgutilHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <Winapi.Windows.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Ogutil
{
//-- forward type declarations -----------------------------------------------
struct TIntegerRec;
struct TCode;
class DELPHICLASS EOnGuardException;
class DELPHICLASS EOnGuardBadDateException;
class DELPHICLASS EOnGuardClockIssueException;
//-- type declarations -------------------------------------------------------
typedef System::Byte *PByte;

typedef System::StaticArray<System::Byte, 2048000000> TByteArray;

typedef TByteArray *PByteArray;

typedef int *PInteger;

typedef System::StaticArray<int, 512000000> TIntegerArray;

typedef TIntegerArray *PIntegerArray;

struct DECLSPEC_DRECORD TIntegerRec
{
	
public:
	union
	{
		struct 
		{
			System::Byte LoLo;
			System::Byte LoHi;
			System::Byte HiLo;
			System::Byte HiHi;
		};
		struct 
		{
			System::Word Lo;
			System::Word Hi;
		};
		
	};
};


typedef TCode *PCode;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCode
{
public:
	System::Word CheckValue;
	System::Word Expiration;
	
public:
	union
	{
		struct 
		{
			int NetIndex;
		};
		struct 
		{
			int Value;
		};
		struct 
		{
			System::Word UsageCount;
			System::Word LastChange;
		};
		struct 
		{
			int SerialNumber;
		};
		struct 
		{
			int RegString;
		};
		struct 
		{
			System::Word Days;
			System::Word LastAccess;
		};
		struct 
		{
			System::Word FirstDate;
			System::Word EndDate;
		};
		
	};
};
#pragma pack(pop)


enum DECLSPEC_DENUM TCodeType : unsigned char { ctDate, ctDays, ctRegistration, ctSerialNumber, ctUsage, ctNetwork, ctSpecial, ctUnknown };

typedef System::StaticArray<System::Byte, 16> TKey;

enum DECLSPEC_DENUM TKeyType : unsigned char { ktRandom, ktMessageDigest, ktMessageDigestCS };

typedef System::StaticArray<System::Byte, 280> TTMDContext;

typedef System::StaticArray<System::Byte, 88> TMD5Context;

typedef System::StaticArray<System::Byte, 16> TMD5Digest;

typedef System::StaticArray<int, 4> T128Bit;

typedef System::StaticArray<int, 8> T256Bit;

enum DECLSPEC_DENUM Vcl_Ogutil__1 : unsigned char { midUser, midSystem, midNetwork, midDrives, midCPUID, midCPUIDJCL, midBIOS, midWinProd, midCryptoID, midNetMAC, midDomain };

typedef System::Set<Vcl_Ogutil__1, Vcl_Ogutil__1::midUser, Vcl_Ogutil__1::midDomain> TEsMachineInfoSet;

enum DECLSPEC_DENUM TCodeStatus : unsigned char { ogValidCode, ogInvalidCode, ogPastEndDate, ogDayCountUsed, ogRunCountUsed, ogNetCountUsed, ogCodeExpired };

class PASCALIMPLEMENTATION EOnGuardException : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EOnGuardException(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EOnGuardException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EOnGuardException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EOnGuardException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EOnGuardException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EOnGuardException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EOnGuardException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EOnGuardException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOnGuardException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOnGuardException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOnGuardException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOnGuardException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EOnGuardException(void) { }
	
};


class PASCALIMPLEMENTATION EOnGuardBadDateException : public EOnGuardException
{
	typedef EOnGuardException inherited;
	
public:
	/* Exception.Create */ inline __fastcall EOnGuardBadDateException(const System::UnicodeString Msg) : EOnGuardException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EOnGuardBadDateException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EOnGuardException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EOnGuardBadDateException(NativeUInt Ident)/* overload */ : EOnGuardException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EOnGuardBadDateException(System::PResStringRec ResStringRec)/* overload */ : EOnGuardException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EOnGuardBadDateException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EOnGuardException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EOnGuardBadDateException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EOnGuardException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EOnGuardBadDateException(const System::UnicodeString Msg, int AHelpContext) : EOnGuardException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EOnGuardBadDateException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EOnGuardException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOnGuardBadDateException(NativeUInt Ident, int AHelpContext)/* overload */ : EOnGuardException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOnGuardBadDateException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EOnGuardException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOnGuardBadDateException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EOnGuardException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOnGuardBadDateException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EOnGuardException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EOnGuardBadDateException(void) { }
	
};


class PASCALIMPLEMENTATION EOnGuardClockIssueException : public EOnGuardException
{
	typedef EOnGuardException inherited;
	
public:
	/* Exception.Create */ inline __fastcall EOnGuardClockIssueException(const System::UnicodeString Msg) : EOnGuardException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EOnGuardClockIssueException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EOnGuardException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EOnGuardClockIssueException(NativeUInt Ident)/* overload */ : EOnGuardException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EOnGuardClockIssueException(System::PResStringRec ResStringRec)/* overload */ : EOnGuardException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EOnGuardClockIssueException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EOnGuardException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EOnGuardClockIssueException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EOnGuardException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EOnGuardClockIssueException(const System::UnicodeString Msg, int AHelpContext) : EOnGuardException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EOnGuardClockIssueException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EOnGuardException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOnGuardClockIssueException(NativeUInt Ident, int AHelpContext)/* overload */ : EOnGuardException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOnGuardClockIssueException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EOnGuardException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOnGuardClockIssueException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EOnGuardException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOnGuardClockIssueException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EOnGuardException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EOnGuardClockIssueException(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const bool DefAutoCheck = true;
static const bool DefAutoDecrease = true;
static const bool DefCheckSize = true;
static const bool DefStoreCode = false;
static const bool DefStoreModifier = false;
static const bool DefStoreRegString = false;
#define OgVersionStr L"1.15"
static const int MaxStructSize = int(0x7a120000);
static const System::Word DaysCheckCode = System::Word(0x649b);
static const System::Word DateCheckCode = System::Word(0xa4cb);
static const System::Word NetCheckCode = System::Word(0x9341);
static const System::Word RegCheckCode = System::Word(0xd9f6);
static const System::Word SerialCheckCode = System::Word(0x3c69);
static const System::Word UsageCheckCode = System::Word(0xf3d5);
static const System::Word SpecialCheckCode = System::Word(0x9c5b);
static const TCodeType DefCodeType = (TCodeType)(0);
static const TKeyType DefKeyType = (TKeyType)(0);
extern DELPHI_PACKAGE int BaseDate;
extern DELPHI_PACKAGE void __fastcall MixBlock(const T128Bit &Matrix, void *Block, bool Encrypt);
extern DELPHI_PACKAGE int __fastcall StringHashElf(const System::UnicodeString Str);
extern DELPHI_PACKAGE int __fastcall CreateMachineID(TEsMachineInfoSet MachineInfo, bool Ansi = true, bool Win32AsWin64 = false);
extern DELPHI_PACKAGE void __fastcall GenerateRandomKeyPrim(void *Key, unsigned KeySize);
extern DELPHI_PACKAGE void __fastcall GenerateTMDKeyPrim(void *Key, unsigned KeySize, const System::UnicodeString Str);
extern DELPHI_PACKAGE void __fastcall GenerateMD5KeyPrim(TKey &Key, const System::UnicodeString Str);
extern DELPHI_PACKAGE int __fastcall GenerateStringModifierPrim(const System::UnicodeString S);
extern DELPHI_PACKAGE int __fastcall GenerateUniqueModifierPrim(void);
extern DELPHI_PACKAGE int __fastcall GenerateMachineModifierPrim(void);
extern DELPHI_PACKAGE int __fastcall GenerateDateModifierPrim(System::TDateTime D);
extern DELPHI_PACKAGE void __fastcall ApplyModifierToKeyPrim(int Modifier, void *Key, unsigned KeySize);
extern DELPHI_PACKAGE TCodeType __fastcall GetCodeType(const TKey &Key, const TCode Code);
extern DELPHI_PACKAGE System::TDateTime __fastcall ExpandDate(System::Word D);
extern DELPHI_PACKAGE System::Word __fastcall ShrinkDate(System::TDateTime D);
extern DELPHI_PACKAGE System::TDateTime __fastcall GetExpirationDate(const TKey &Key, const TCode Code);
extern DELPHI_PACKAGE void __fastcall InitDateCode(const TKey &Key, System::TDateTime StartDate, System::TDateTime EndDate, TCode &Code);
extern DELPHI_PACKAGE void __fastcall InitDateCodeEx(const TKey &Key, System::TDateTime StartDate, System::TDateTime EndDate, System::TDateTime Expires, TCode &Code);
extern DELPHI_PACKAGE bool __fastcall IsDateCodeValid(const TKey &Key, const TCode Code);
extern DELPHI_PACKAGE System::TDateTime __fastcall GetDateCodeValue(const TKey &Key, const TCode Code);
extern DELPHI_PACKAGE bool __fastcall IsDateCodeExpired(const TKey &Key, const TCode Code);
extern DELPHI_PACKAGE System::TDateTime __fastcall GetDateCodeStart(const TKey &Key, const TCode Code);
extern DELPHI_PACKAGE System::TDateTime __fastcall GetDateCodeEnd(const TKey &Key, const TCode Code);
extern DELPHI_PACKAGE void __fastcall InitDaysCode(const TKey &Key, System::Word Days, System::TDateTime Expires, TCode &Code);
extern DELPHI_PACKAGE bool __fastcall IsDaysCodeValid(const TKey &Key, const TCode Code);
extern DELPHI_PACKAGE void __fastcall DecDaysCode(const TKey &Key, TCode &Code);
extern DELPHI_PACKAGE int __fastcall GetDaysCodeValue(const TKey &Key, const TCode Code);
extern DELPHI_PACKAGE bool __fastcall IsDaysCodeExpired(const TKey &Key, const TCode Code);
extern DELPHI_PACKAGE void __fastcall InitRegCode(const TKey &Key, const System::UnicodeString RegStr, System::TDateTime Expires, TCode &Code);
extern DELPHI_PACKAGE bool __fastcall IsRegCodeValid(const TKey &Key, const TCode Code);
extern DELPHI_PACKAGE bool __fastcall IsRegCodeExpired(const TKey &Key, const TCode Code);
extern DELPHI_PACKAGE bool __fastcall IsRegCodeRegisteredTo(const TKey &Key, const TCode Code, const System::UnicodeString RegStr);
extern DELPHI_PACKAGE void __fastcall InitSerialNumberCode(const TKey &Key, int Serial, System::TDateTime Expires, TCode &Code);
extern DELPHI_PACKAGE bool __fastcall IsSerialNumberCodeValid(const TKey &Key, const TCode Code);
extern DELPHI_PACKAGE int __fastcall GetSerialNumberCodeValue(const TKey &Key, const TCode Code);
extern DELPHI_PACKAGE bool __fastcall IsSerialNumberCodeExpired(const TKey &Key, const TCode Code);
extern DELPHI_PACKAGE bool __fastcall IsSerialNumberCodeValidFor(const TKey &Key, const TCode Code, const int Serial);
extern DELPHI_PACKAGE void __fastcall InitSpecialCode(const TKey &Key, int Value, System::TDateTime Expires, TCode &Code);
extern DELPHI_PACKAGE bool __fastcall IsSpecialCodeValid(const TKey &Key, const TCode Code);
extern DELPHI_PACKAGE int __fastcall GetSpecialCodeValue(const TKey &Key, const TCode Code);
extern DELPHI_PACKAGE bool __fastcall IsSpecialCodeExpired(const TKey &Key, const TCode Code);
extern DELPHI_PACKAGE bool __fastcall IsSpecialCodeValidFor(const TKey &Key, const TCode Code, const int Value);
extern DELPHI_PACKAGE void __fastcall InitUsageCode(const TKey &Key, System::Word Count, System::TDateTime Expires, TCode &Code);
extern DELPHI_PACKAGE bool __fastcall IsUsageCodeValid(const TKey &Key, const TCode Code);
extern DELPHI_PACKAGE void __fastcall DecUsageCode(const TKey &Key, TCode &Code);
extern DELPHI_PACKAGE int __fastcall GetUsageCodeValue(const TKey &Key, const TCode Code);
extern DELPHI_PACKAGE bool __fastcall IsUsageCodeExpired(const TKey &Key, const TCode Code);
extern DELPHI_PACKAGE System::UnicodeString __fastcall BufferToHex(const void *Buf, unsigned BufSize);
extern DELPHI_PACKAGE System::UnicodeString __fastcall BufferToHexBytes(const void *Buf, unsigned BufSize);
extern DELPHI_PACKAGE bool __fastcall HexStringIsZero(const System::UnicodeString Hex);
extern DELPHI_PACKAGE bool __fastcall HexToBuffer(const System::UnicodeString Hex, void *Buf, unsigned BufSize);
extern DELPHI_PACKAGE int __fastcall Max(int A, int B);
extern DELPHI_PACKAGE int __fastcall Min(int A, int B);
extern DELPHI_PACKAGE void __fastcall XorMem(void *Mem1, const void *Mem2, unsigned Count);
extern DELPHI_PACKAGE System::UnicodeString __fastcall OgFormatDate(System::TDateTime Value);
}	/* namespace Ogutil */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_OGUTIL)
using namespace Vcl::Ogutil;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_OgutilHPP
