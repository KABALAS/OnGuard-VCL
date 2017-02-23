﻿// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.ognetwrk.pas' rev: 32.00 (Windows)

#ifndef Vcl_OgnetwrkHPP
#define Vcl_OgnetwrkHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.ogutil.hpp>
#include <Vcl.onguard.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Ognetwrk
{
//-- forward type declarations -----------------------------------------------
struct TNetAccess;
struct TNetAccessInfo;
class DELPHICLASS TOgNetCode;
//-- type declarations -------------------------------------------------------
#pragma pack(push,1)
struct DECLSPEC_DRECORD TNetAccess
{
public:
	int Fh;
	Vcl::Ogutil::TKey Key;
	System::Word CheckValue;
	System::Word Index;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TNetAccessInfo
{
public:
	unsigned Total;
	unsigned Locked;
	unsigned Invalid;
};
#pragma pack(pop)


typedef void __fastcall (__closure *TGetFileNameEvent)(System::TObject* Sender, System::UnicodeString &Value);

class PASCALIMPLEMENTATION TOgNetCode : public Vcl::Onguard::TOgCodeBase
{
	typedef Vcl::Onguard::TOgCodeBase inherited;
	
protected:
	System::UnicodeString FFileName;
	TGetFileNameEvent FOnGetFileName;
	TNetAccess nacNetAccess;
	TNetAccessInfo nacNetAccessInfo;
	int __fastcall GetActiveUsers(void);
	int __fastcall GetInvalidUsers(void);
	int __fastcall GetMaxUsers(void);
	virtual void __fastcall Loaded(void);
	DYNAMIC System::UnicodeString __fastcall DoOnGetFileName(void);
	
public:
	__fastcall virtual TOgNetCode(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TOgNetCode(void);
	virtual Vcl::Ogutil::TCodeStatus __fastcall CheckCode(bool Report);
	bool __fastcall CreateAccessFile(void);
	bool __fastcall IsRemoteDrive(const System::UnicodeString ExePath);
	bool __fastcall ResetAccessFile(void);
	__property int ActiveUsers = {read=GetActiveUsers, nodefault};
	__property int InvalidUsers = {read=GetInvalidUsers, nodefault};
	__property int MaxUsers = {read=GetMaxUsers, nodefault};
	
__published:
	__property Code = {stored=FStoreCode, default=0};
	__property System::UnicodeString FileName = {read=FFileName, write=FFileName};
	__property StoreCode = {default=0};
	__property TGetFileNameEvent OnGetFileName = {read=FOnGetFileName, write=FOnGetFileName};
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool __fastcall CheckNetAccessFile(const TNetAccess &NetAccess);
extern DELPHI_PACKAGE bool __fastcall CreateNetAccessFile(const System::UnicodeString FileName, const Vcl::Ogutil::TKey &Key, System::Word Count);
extern DELPHI_PACKAGE bool __fastcall CreateNetAccessFileEx(const System::UnicodeString FileName, const Vcl::Ogutil::TKey &Key, const Vcl::Ogutil::TCode Code);
extern DELPHI_PACKAGE int __fastcall DecodeNAFCountCode(const Vcl::Ogutil::TKey &Key, const Vcl::Ogutil::TCode Code);
extern DELPHI_PACKAGE void __fastcall EncodeNAFCountCode(const Vcl::Ogutil::TKey &Key, unsigned Count, Vcl::Ogutil::TCode &Code);
extern DELPHI_PACKAGE bool __fastcall GetNetAccessFileInfo(const System::UnicodeString FileName, const Vcl::Ogutil::TKey &Key, TNetAccessInfo &NetAccessInfo);
extern DELPHI_PACKAGE bool __fastcall IsAppOnNetwork(const System::UnicodeString ExePath);
extern DELPHI_PACKAGE bool __fastcall LockNetAccessFile(const System::UnicodeString FileName, const Vcl::Ogutil::TKey &Key, TNetAccess &NetAccess);
extern DELPHI_PACKAGE bool __fastcall ResetNetAccessFile(const System::UnicodeString FileName, const Vcl::Ogutil::TKey &Key);
extern DELPHI_PACKAGE bool __fastcall UnlockNetAccessFile(TNetAccess &NetAccess);
}	/* namespace Ognetwrk */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_OGNETWRK)
using namespace Vcl::Ognetwrk;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_OgnetwrkHPP
