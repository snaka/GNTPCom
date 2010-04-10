

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Sun Apr 11 04:27:36 2010
 */
/* Compiler settings for .\GNTPCom.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#if !defined(_M_IA64) && !defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif // __RPCPROXY_H_VERSION__


#include "GNTPCom_i.h"

#define TYPE_FORMAT_STRING_SIZE   1081                              
#define PROC_FORMAT_STRING_SIZE   235                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   2            

typedef struct _GNTPCom_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } GNTPCom_MIDL_TYPE_FORMAT_STRING;

typedef struct _GNTPCom_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } GNTPCom_MIDL_PROC_FORMAT_STRING;

typedef struct _GNTPCom_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } GNTPCom_MIDL_EXPR_FORMAT_STRING;


static RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const GNTPCom_MIDL_TYPE_FORMAT_STRING GNTPCom__MIDL_TypeFormatString;
extern const GNTPCom_MIDL_PROC_FORMAT_STRING GNTPCom__MIDL_ProcFormatString;
extern const GNTPCom_MIDL_EXPR_FORMAT_STRING GNTPCom__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IGrowler_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IGrowler_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need a Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const GNTPCom_MIDL_PROC_FORMAT_STRING GNTPCom__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure Init */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 16 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x20d ),	/* 525 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ApplicationName */

/* 24 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter Notifications */

/* 30 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	NdrFcShort( 0x40a ),	/* Type Offset=1034 */

	/* Parameter Password */

/* 36 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 38 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 40 */	NdrFcShort( 0x40a ),	/* Type Offset=1034 */

	/* Return value */

/* 42 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 44 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 46 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Notify */

/* 48 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 50 */	NdrFcLong( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0x8 ),	/* 8 */
/* 56 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */
/* 60 */	NdrFcShort( 0x8 ),	/* 8 */
/* 62 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 64 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x2e1 ),	/* 737 */
/* 70 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter NotificationType */

/* 72 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 74 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 76 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter Title */

/* 78 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 80 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 82 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter MessageText */

/* 84 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 86 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 88 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter Icon */

/* 90 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 92 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 94 */	NdrFcShort( 0x40a ),	/* Type Offset=1034 */

	/* Parameter Url */

/* 96 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 98 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 100 */	NdrFcShort( 0x40a ),	/* Type Offset=1034 */

	/* Return value */

/* 102 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 104 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ApplicationName */

/* 108 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 114 */	NdrFcShort( 0x9 ),	/* 9 */
/* 116 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0x8 ),	/* 8 */
/* 122 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 124 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 126 */	NdrFcShort( 0x1 ),	/* 1 */
/* 128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 132 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 134 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 136 */	NdrFcShort( 0x41c ),	/* Type Offset=1052 */

	/* Return value */

/* 138 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 140 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Notifications */

/* 144 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0xa ),	/* 10 */
/* 152 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 156 */	NdrFcShort( 0x8 ),	/* 8 */
/* 158 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 160 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 162 */	NdrFcShort( 0xbe ),	/* 190 */
/* 164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 166 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 168 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 170 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 172 */	NdrFcShort( 0x42e ),	/* Type Offset=1070 */

	/* Return value */

/* 174 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 176 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitWithAddress */

/* 180 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 186 */	NdrFcShort( 0xb ),	/* 11 */
/* 188 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 192 */	NdrFcShort( 0x8 ),	/* 8 */
/* 194 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 196 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 200 */	NdrFcShort( 0xed ),	/* 237 */
/* 202 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerAddress */

/* 204 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 206 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 208 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter Password */

/* 210 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 212 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 214 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ApplicationName */

/* 216 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 218 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 220 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter Notifications */

/* 222 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 224 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 226 */	NdrFcShort( 0x40a ),	/* Type Offset=1034 */

	/* Return value */

/* 228 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 230 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const GNTPCom_MIDL_TYPE_FORMAT_STRING GNTPCom__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x12, 0x0,	/* FC_UP */
/*  4 */	NdrFcShort( 0xe ),	/* Offset= 14 (18) */
/*  6 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/*  8 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 12 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 14 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 16 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 18 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 20 */	NdrFcShort( 0x8 ),	/* 8 */
/* 22 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (6) */
/* 24 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 26 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 28 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 30 */	NdrFcShort( 0x0 ),	/* 0 */
/* 32 */	NdrFcShort( 0x4 ),	/* 4 */
/* 34 */	NdrFcShort( 0x0 ),	/* 0 */
/* 36 */	NdrFcShort( 0xffde ),	/* Offset= -34 (2) */
/* 38 */	
			0x12, 0x0,	/* FC_UP */
/* 40 */	NdrFcShort( 0x3ce ),	/* Offset= 974 (1014) */
/* 42 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 44 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 46 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 48 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 50 */	NdrFcShort( 0x2 ),	/* Offset= 2 (52) */
/* 52 */	NdrFcShort( 0x10 ),	/* 16 */
/* 54 */	NdrFcShort( 0x2f ),	/* 47 */
/* 56 */	NdrFcLong( 0x14 ),	/* 20 */
/* 60 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 62 */	NdrFcLong( 0x3 ),	/* 3 */
/* 66 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 68 */	NdrFcLong( 0x11 ),	/* 17 */
/* 72 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 74 */	NdrFcLong( 0x2 ),	/* 2 */
/* 78 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 80 */	NdrFcLong( 0x4 ),	/* 4 */
/* 84 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 86 */	NdrFcLong( 0x5 ),	/* 5 */
/* 90 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 92 */	NdrFcLong( 0xb ),	/* 11 */
/* 96 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 98 */	NdrFcLong( 0xa ),	/* 10 */
/* 102 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 104 */	NdrFcLong( 0x6 ),	/* 6 */
/* 108 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (340) */
/* 110 */	NdrFcLong( 0x7 ),	/* 7 */
/* 114 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 116 */	NdrFcLong( 0x8 ),	/* 8 */
/* 120 */	NdrFcShort( 0xff8a ),	/* Offset= -118 (2) */
/* 122 */	NdrFcLong( 0xd ),	/* 13 */
/* 126 */	NdrFcShort( 0xdc ),	/* Offset= 220 (346) */
/* 128 */	NdrFcLong( 0x9 ),	/* 9 */
/* 132 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (364) */
/* 134 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 138 */	NdrFcShort( 0xf4 ),	/* Offset= 244 (382) */
/* 140 */	NdrFcLong( 0x24 ),	/* 36 */
/* 144 */	NdrFcShort( 0x31c ),	/* Offset= 796 (940) */
/* 146 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 150 */	NdrFcShort( 0x316 ),	/* Offset= 790 (940) */
/* 152 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 156 */	NdrFcShort( 0x314 ),	/* Offset= 788 (944) */
/* 158 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 162 */	NdrFcShort( 0x312 ),	/* Offset= 786 (948) */
/* 164 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 168 */	NdrFcShort( 0x310 ),	/* Offset= 784 (952) */
/* 170 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 174 */	NdrFcShort( 0x30e ),	/* Offset= 782 (956) */
/* 176 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 180 */	NdrFcShort( 0x30c ),	/* Offset= 780 (960) */
/* 182 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 186 */	NdrFcShort( 0x30a ),	/* Offset= 778 (964) */
/* 188 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 192 */	NdrFcShort( 0x2f4 ),	/* Offset= 756 (948) */
/* 194 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 198 */	NdrFcShort( 0x2f2 ),	/* Offset= 754 (952) */
/* 200 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 204 */	NdrFcShort( 0x2fc ),	/* Offset= 764 (968) */
/* 206 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 210 */	NdrFcShort( 0x2f2 ),	/* Offset= 754 (964) */
/* 212 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 216 */	NdrFcShort( 0x2f4 ),	/* Offset= 756 (972) */
/* 218 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 222 */	NdrFcShort( 0x2f2 ),	/* Offset= 754 (976) */
/* 224 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 228 */	NdrFcShort( 0x2f0 ),	/* Offset= 752 (980) */
/* 230 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 234 */	NdrFcShort( 0x2ee ),	/* Offset= 750 (984) */
/* 236 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 240 */	NdrFcShort( 0x2ec ),	/* Offset= 748 (988) */
/* 242 */	NdrFcLong( 0x10 ),	/* 16 */
/* 246 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 248 */	NdrFcLong( 0x12 ),	/* 18 */
/* 252 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 254 */	NdrFcLong( 0x13 ),	/* 19 */
/* 258 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 260 */	NdrFcLong( 0x15 ),	/* 21 */
/* 264 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 266 */	NdrFcLong( 0x16 ),	/* 22 */
/* 270 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 272 */	NdrFcLong( 0x17 ),	/* 23 */
/* 276 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 278 */	NdrFcLong( 0xe ),	/* 14 */
/* 282 */	NdrFcShort( 0x2ca ),	/* Offset= 714 (996) */
/* 284 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 288 */	NdrFcShort( 0x2ce ),	/* Offset= 718 (1006) */
/* 290 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 294 */	NdrFcShort( 0x2cc ),	/* Offset= 716 (1010) */
/* 296 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 300 */	NdrFcShort( 0x288 ),	/* Offset= 648 (948) */
/* 302 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 306 */	NdrFcShort( 0x286 ),	/* Offset= 646 (952) */
/* 308 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 312 */	NdrFcShort( 0x284 ),	/* Offset= 644 (956) */
/* 314 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 318 */	NdrFcShort( 0x27a ),	/* Offset= 634 (952) */
/* 320 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 324 */	NdrFcShort( 0x274 ),	/* Offset= 628 (952) */
/* 326 */	NdrFcLong( 0x0 ),	/* 0 */
/* 330 */	NdrFcShort( 0x0 ),	/* Offset= 0 (330) */
/* 332 */	NdrFcLong( 0x1 ),	/* 1 */
/* 336 */	NdrFcShort( 0x0 ),	/* Offset= 0 (336) */
/* 338 */	NdrFcShort( 0xffff ),	/* Offset= -1 (337) */
/* 340 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 342 */	NdrFcShort( 0x8 ),	/* 8 */
/* 344 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 346 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 348 */	NdrFcLong( 0x0 ),	/* 0 */
/* 352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 356 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 358 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 360 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 362 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 364 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 366 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 374 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 376 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 378 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 380 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 382 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 384 */	NdrFcShort( 0x2 ),	/* Offset= 2 (386) */
/* 386 */	
			0x12, 0x0,	/* FC_UP */
/* 388 */	NdrFcShort( 0x216 ),	/* Offset= 534 (922) */
/* 390 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 392 */	NdrFcShort( 0x18 ),	/* 24 */
/* 394 */	NdrFcShort( 0xa ),	/* 10 */
/* 396 */	NdrFcLong( 0x8 ),	/* 8 */
/* 400 */	NdrFcShort( 0x5a ),	/* Offset= 90 (490) */
/* 402 */	NdrFcLong( 0xd ),	/* 13 */
/* 406 */	NdrFcShort( 0x7e ),	/* Offset= 126 (532) */
/* 408 */	NdrFcLong( 0x9 ),	/* 9 */
/* 412 */	NdrFcShort( 0x9e ),	/* Offset= 158 (570) */
/* 414 */	NdrFcLong( 0xc ),	/* 12 */
/* 418 */	NdrFcShort( 0xc8 ),	/* Offset= 200 (618) */
/* 420 */	NdrFcLong( 0x24 ),	/* 36 */
/* 424 */	NdrFcShort( 0x124 ),	/* Offset= 292 (716) */
/* 426 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 430 */	NdrFcShort( 0x140 ),	/* Offset= 320 (750) */
/* 432 */	NdrFcLong( 0x10 ),	/* 16 */
/* 436 */	NdrFcShort( 0x15a ),	/* Offset= 346 (782) */
/* 438 */	NdrFcLong( 0x2 ),	/* 2 */
/* 442 */	NdrFcShort( 0x174 ),	/* Offset= 372 (814) */
/* 444 */	NdrFcLong( 0x3 ),	/* 3 */
/* 448 */	NdrFcShort( 0x18e ),	/* Offset= 398 (846) */
/* 450 */	NdrFcLong( 0x14 ),	/* 20 */
/* 454 */	NdrFcShort( 0x1a8 ),	/* Offset= 424 (878) */
/* 456 */	NdrFcShort( 0xffff ),	/* Offset= -1 (455) */
/* 458 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 460 */	NdrFcShort( 0x4 ),	/* 4 */
/* 462 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 466 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 468 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 470 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 472 */	NdrFcShort( 0x4 ),	/* 4 */
/* 474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 476 */	NdrFcShort( 0x1 ),	/* 1 */
/* 478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 482 */	0x12, 0x0,	/* FC_UP */
/* 484 */	NdrFcShort( 0xfe2e ),	/* Offset= -466 (18) */
/* 486 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 488 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 490 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 492 */	NdrFcShort( 0x8 ),	/* 8 */
/* 494 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 496 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 498 */	NdrFcShort( 0x4 ),	/* 4 */
/* 500 */	NdrFcShort( 0x4 ),	/* 4 */
/* 502 */	0x11, 0x0,	/* FC_RP */
/* 504 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (458) */
/* 506 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 508 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 510 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 514 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 518 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 520 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 524 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 526 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 528 */	NdrFcShort( 0xff4a ),	/* Offset= -182 (346) */
/* 530 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 532 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 534 */	NdrFcShort( 0x8 ),	/* 8 */
/* 536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 538 */	NdrFcShort( 0x6 ),	/* Offset= 6 (544) */
/* 540 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 542 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 544 */	
			0x11, 0x0,	/* FC_RP */
/* 546 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (510) */
/* 548 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 552 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 556 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 558 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 562 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 564 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 566 */	NdrFcShort( 0xff36 ),	/* Offset= -202 (364) */
/* 568 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 570 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 572 */	NdrFcShort( 0x8 ),	/* 8 */
/* 574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 576 */	NdrFcShort( 0x6 ),	/* Offset= 6 (582) */
/* 578 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 580 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 582 */	
			0x11, 0x0,	/* FC_RP */
/* 584 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (548) */
/* 586 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 588 */	NdrFcShort( 0x4 ),	/* 4 */
/* 590 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 594 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 596 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 598 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 600 */	NdrFcShort( 0x4 ),	/* 4 */
/* 602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 604 */	NdrFcShort( 0x1 ),	/* 1 */
/* 606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 610 */	0x12, 0x0,	/* FC_UP */
/* 612 */	NdrFcShort( 0x192 ),	/* Offset= 402 (1014) */
/* 614 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 616 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 618 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 620 */	NdrFcShort( 0x8 ),	/* 8 */
/* 622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 624 */	NdrFcShort( 0x6 ),	/* Offset= 6 (630) */
/* 626 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 628 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 630 */	
			0x11, 0x0,	/* FC_RP */
/* 632 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (586) */
/* 634 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 636 */	NdrFcLong( 0x2f ),	/* 47 */
/* 640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 644 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 646 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 648 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 650 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 652 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 654 */	NdrFcShort( 0x1 ),	/* 1 */
/* 656 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 658 */	NdrFcShort( 0x4 ),	/* 4 */
/* 660 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 662 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 664 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 666 */	NdrFcShort( 0x10 ),	/* 16 */
/* 668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 670 */	NdrFcShort( 0xa ),	/* Offset= 10 (680) */
/* 672 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 674 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 676 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (634) */
/* 678 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 680 */	
			0x12, 0x0,	/* FC_UP */
/* 682 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (652) */
/* 684 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 686 */	NdrFcShort( 0x4 ),	/* 4 */
/* 688 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 692 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 694 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 696 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 698 */	NdrFcShort( 0x4 ),	/* 4 */
/* 700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 702 */	NdrFcShort( 0x1 ),	/* 1 */
/* 704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 708 */	0x12, 0x0,	/* FC_UP */
/* 710 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (664) */
/* 712 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 714 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 716 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 718 */	NdrFcShort( 0x8 ),	/* 8 */
/* 720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 722 */	NdrFcShort( 0x6 ),	/* Offset= 6 (728) */
/* 724 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 726 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 728 */	
			0x11, 0x0,	/* FC_RP */
/* 730 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (684) */
/* 732 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 734 */	NdrFcShort( 0x8 ),	/* 8 */
/* 736 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 738 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 740 */	NdrFcShort( 0x10 ),	/* 16 */
/* 742 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 744 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 746 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (732) */
			0x5b,		/* FC_END */
/* 750 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 752 */	NdrFcShort( 0x18 ),	/* 24 */
/* 754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 756 */	NdrFcShort( 0xa ),	/* Offset= 10 (766) */
/* 758 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 760 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 762 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (738) */
/* 764 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 766 */	
			0x11, 0x0,	/* FC_RP */
/* 768 */	NdrFcShort( 0xfefe ),	/* Offset= -258 (510) */
/* 770 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 772 */	NdrFcShort( 0x1 ),	/* 1 */
/* 774 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 778 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 780 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 782 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 784 */	NdrFcShort( 0x8 ),	/* 8 */
/* 786 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 788 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 790 */	NdrFcShort( 0x4 ),	/* 4 */
/* 792 */	NdrFcShort( 0x4 ),	/* 4 */
/* 794 */	0x12, 0x0,	/* FC_UP */
/* 796 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (770) */
/* 798 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 800 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 802 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 804 */	NdrFcShort( 0x2 ),	/* 2 */
/* 806 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 810 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 812 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 814 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 816 */	NdrFcShort( 0x8 ),	/* 8 */
/* 818 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 820 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 822 */	NdrFcShort( 0x4 ),	/* 4 */
/* 824 */	NdrFcShort( 0x4 ),	/* 4 */
/* 826 */	0x12, 0x0,	/* FC_UP */
/* 828 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (802) */
/* 830 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 832 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 834 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 836 */	NdrFcShort( 0x4 ),	/* 4 */
/* 838 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 842 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 844 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 846 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 848 */	NdrFcShort( 0x8 ),	/* 8 */
/* 850 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 852 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 854 */	NdrFcShort( 0x4 ),	/* 4 */
/* 856 */	NdrFcShort( 0x4 ),	/* 4 */
/* 858 */	0x12, 0x0,	/* FC_UP */
/* 860 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (834) */
/* 862 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 864 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 866 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 868 */	NdrFcShort( 0x8 ),	/* 8 */
/* 870 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 874 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 876 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 878 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 880 */	NdrFcShort( 0x8 ),	/* 8 */
/* 882 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 884 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 886 */	NdrFcShort( 0x4 ),	/* 4 */
/* 888 */	NdrFcShort( 0x4 ),	/* 4 */
/* 890 */	0x12, 0x0,	/* FC_UP */
/* 892 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (866) */
/* 894 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 896 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 898 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 900 */	NdrFcShort( 0x8 ),	/* 8 */
/* 902 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 904 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 906 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 908 */	NdrFcShort( 0x8 ),	/* 8 */
/* 910 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 912 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 914 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 916 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 918 */	NdrFcShort( 0xffec ),	/* Offset= -20 (898) */
/* 920 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 922 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 924 */	NdrFcShort( 0x28 ),	/* 40 */
/* 926 */	NdrFcShort( 0xffec ),	/* Offset= -20 (906) */
/* 928 */	NdrFcShort( 0x0 ),	/* Offset= 0 (928) */
/* 930 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 932 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 934 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 936 */	NdrFcShort( 0xfdde ),	/* Offset= -546 (390) */
/* 938 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 940 */	
			0x12, 0x0,	/* FC_UP */
/* 942 */	NdrFcShort( 0xfeea ),	/* Offset= -278 (664) */
/* 944 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 946 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 948 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 950 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 952 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 954 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 956 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 958 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 960 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 962 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 964 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 966 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 968 */	
			0x12, 0x0,	/* FC_UP */
/* 970 */	NdrFcShort( 0xfd8a ),	/* Offset= -630 (340) */
/* 972 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 974 */	NdrFcShort( 0xfc34 ),	/* Offset= -972 (2) */
/* 976 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 978 */	NdrFcShort( 0xfd88 ),	/* Offset= -632 (346) */
/* 980 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 982 */	NdrFcShort( 0xfd96 ),	/* Offset= -618 (364) */
/* 984 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 986 */	NdrFcShort( 0xfda4 ),	/* Offset= -604 (382) */
/* 988 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 990 */	NdrFcShort( 0x2 ),	/* Offset= 2 (992) */
/* 992 */	
			0x12, 0x0,	/* FC_UP */
/* 994 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1014) */
/* 996 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 998 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1000 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 1002 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 1004 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1006 */	
			0x12, 0x0,	/* FC_UP */
/* 1008 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (996) */
/* 1010 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1012 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1014 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1016 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1020 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1020) */
/* 1022 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1024 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1026 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1028 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1030 */	NdrFcShort( 0xfc24 ),	/* Offset= -988 (42) */
/* 1032 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1034 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1036 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1038 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1042 */	NdrFcShort( 0xfc14 ),	/* Offset= -1004 (38) */
/* 1044 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1046 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1052) */
/* 1048 */	
			0x13, 0x0,	/* FC_OP */
/* 1050 */	NdrFcShort( 0xfbf8 ),	/* Offset= -1032 (18) */
/* 1052 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1056 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1060 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1048) */
/* 1062 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1064 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1070) */
/* 1066 */	
			0x13, 0x0,	/* FC_OP */
/* 1068 */	NdrFcShort( 0xffca ),	/* Offset= -54 (1014) */
/* 1070 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1072 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1074 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1078 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1066) */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            },
            {
            VARIANT_UserSize
            ,VARIANT_UserMarshal
            ,VARIANT_UserUnmarshal
            ,VARIANT_UserFree
            }

        };



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IGrowler, ver. 0.0,
   GUID={0x3241832B,0x2158,0x459A,{0x9E,0x6B,0x46,0x92,0x58,0x70,0x66,0xF5}} */

#pragma code_seg(".orpc")
static const unsigned short IGrowler_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    48,
    108,
    144,
    180
    };

static const MIDL_STUBLESS_PROXY_INFO IGrowler_ProxyInfo =
    {
    &Object_StubDesc,
    GNTPCom__MIDL_ProcFormatString.Format,
    &IGrowler_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IGrowler_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    GNTPCom__MIDL_ProcFormatString.Format,
    &IGrowler_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) _IGrowlerProxyVtbl = 
{
    &IGrowler_ProxyInfo,
    &IID_IGrowler,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IGrowler::Init */ ,
    (void *) (INT_PTR) -1 /* IGrowler::Notify */ ,
    (void *) (INT_PTR) -1 /* IGrowler::get_ApplicationName */ ,
    (void *) (INT_PTR) -1 /* IGrowler::get_Notifications */ ,
    (void *) (INT_PTR) -1 /* IGrowler::InitWithAddress */
};


static const PRPC_STUB_FUNCTION IGrowler_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IGrowlerStubVtbl =
{
    &IID_IGrowler,
    &IGrowler_ServerInfo,
    12,
    &IGrowler_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    GNTPCom__MIDL_TypeFormatString.Format,
    0, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x70001f4, /* MIDL Version 7.0.500 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * _GNTPCom_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IGrowlerProxyVtbl,
    0
};

const CInterfaceStubVtbl * _GNTPCom_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IGrowlerStubVtbl,
    0
};

PCInterfaceName const _GNTPCom_InterfaceNamesList[] = 
{
    "IGrowler",
    0
};

const IID *  _GNTPCom_BaseIIDList[] = 
{
    &IID_IDispatch,
    0
};


#define _GNTPCom_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _GNTPCom, pIID, n)

int __stdcall _GNTPCom_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_GNTPCom_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

const ExtendedProxyFileInfo GNTPCom_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _GNTPCom_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _GNTPCom_StubVtblList,
    (const PCInterfaceName * ) & _GNTPCom_InterfaceNamesList,
    (const IID ** ) & _GNTPCom_BaseIIDList,
    & _GNTPCom_IID_Lookup, 
    1,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/

