//------------ kuvbur 2022 ------------
#pragma once
#if !defined (ADDON_HPP)
#define	ADDON_HPP
#include "Helpers.hpp"

#define	 Menu_MonAll		1
#define	 Menu_SyncAll		2
#define	 Menu_SyncSelect	3
#define	 Menu_wallS			4
#define	 Menu_widoS			5
#define	 Menu_objS			6
#define	 Menu_cwallS		7
#define	 Menu_ReNum			8
#define	 Menu_Sum			9
#define	 Menu_RunParam		10
//#define	 Menu_Log			10
//#define	 Menu_LogShow		11
//#define	 Menu_AddHole		13

static const Int32 MonAll_CommandID = 1;
static const Int32 SyncAll_CommandID = 2;
static const Int32 SyncSelect_CommandID = 3;
static const Int32 wallS_CommandID = 4;
static const Int32 widoS_CommandID = 5;
static const Int32 objS_CommandID = 6;
static const Int32 cwallS_CommandID = 7;
static const Int32 ReNum_CommandID = 8;
static const Int32 Sum_CommandID = 9;
static const Int32 RunParam_CommandID = 10;
//static const Int32 AddHole_CommandID = 13;
//static const Int32 Log_CommandID = 10;
//static const Int32 LogShow_CommandID = 11;

GSErrCode __ACENV_CALL	ElementEventHandlerProc(const API_NotifyElementType* elemType);

static GSErrCode __ACENV_CALL ProjectEventHandlerProc(API_NotifyEventID notifID, Int32 param);

// -----------------------------------------------------------------------------
// ��������� ������������ ����� � ������������� ���������
// -----------------------------------------------------------------------------
void Do_ElementMonitor(bool& syncMon);

// -----------------------------------------------------------------------------
// ���������� ���������� � ���� �������
// -----------------------------------------------------------------------------
void MenuSetState(SyncSettings& syncSettings);

static GSErrCode MenuCommandHandler(const API_MenuParams* menuParams);
#endif