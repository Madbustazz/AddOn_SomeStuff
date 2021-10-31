
#if !defined (RENUM_HPP)
#pragma once
#define	RENUM_HPP
#include	"APICommon.h"
#include	"DG.h"

// ���� ��������� (��. RenumElement.state)
#define RENUM_IGNORE 0	// ������������, �� ������ � �� ���������� � ������� ���������� �������. 
#define RENUM_ADD 1		// ������� �� ������, �������� ������ �������� ��� ���������� ��������
#define RENUM_NORMAL 2	// ������� ���������/�������������

// ���� ����������� ����� ��� ���������� (API_PropertyStringValueType) �������� (��. RenumRule.nulltype)
#define NOZEROS 0		// �� ��������� ���� � ��������� ��������
#define ADDZEROS 1		// ��������� ���� � ������ ��������
#define ADDMAXZEROS 2	// ��������� ���� �� ������������� ���������� ��� ����� ��������

typedef struct {
	API_Guid		guid;		// ��, �� �������
	std::string		criteria;	// �������� ��������-��������
	std::string		delimetr;	// �������� �������� - ��������
	UInt32			state;		// ��� ��������� �������� (������������, ����������, �������������)
} RenumElement;

typedef struct {
	bool						state;		// ������������ �������
	API_PropertyDefinition		position;	// �������� ��������, � ������� ������ �������
	API_PropertyDefinition		criteria;	// �������� ��������-��������
	API_PropertyDefinition		delimetr;	// �������� ��������-��������
	short						nulltype;	// ��� ���������� ����� � �������
	GS::Array <RenumElement>	elemts;		// ������ ���������
} RenumRule;

typedef GS::HashTable<API_Guid, RenumRule> Rules;	// ������� ������

GSErrCode ReNumSelected(void);
bool ReNumRule(const API_Guid& elemGuid, const GS::UniString& description_string, RenumRule& paramtype);
UInt32 ReNumGetRule(const API_PropertyDefinition definitionflag, const API_Guid& elemGuid, API_PropertyDefinition& propertdefyrule, short& nulltype);
GSErrCode ReNum_GetElement(const API_Guid& elemGuid, Rules& rules);
GSErrCode ReNumOneRule(const RenumRule& rule);
GSErrCode ReNum_GetElement(const API_Guid& elemGuid, Rules& rules);

#endif