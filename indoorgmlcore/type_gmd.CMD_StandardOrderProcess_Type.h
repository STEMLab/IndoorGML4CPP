#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_StandardOrderProcess_Type
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_StandardOrderProcess_Type

#include "type_gco.CAbstractObject_Type.h"


namespace indoorgmlcore
{

namespace gmd
{	

class CMD_StandardOrderProcess_Type : public ::indoorgmlcore::gco::CAbstractObject_Type
{
public:
	indoorgmlcore_EXPORT CMD_StandardOrderProcess_Type(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMD_StandardOrderProcess_Type(CMD_StandardOrderProcess_Type const& init);
	void operator=(CMD_StandardOrderProcess_Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CMD_StandardOrderProcess_Type); }
	MemberElement<gco::CCharacterString_PropertyType, _altova_mi_gmd_altova_CMD_StandardOrderProcess_Type_altova_fees> fees;
	struct fees { typedef Iterator<gco::CCharacterString_PropertyType> iterator; };
	MemberElement<gco::CDateTime_PropertyType, _altova_mi_gmd_altova_CMD_StandardOrderProcess_Type_altova_plannedAvailableDateTime> plannedAvailableDateTime;
	struct plannedAvailableDateTime { typedef Iterator<gco::CDateTime_PropertyType> iterator; };
	MemberElement<gco::CCharacterString_PropertyType, _altova_mi_gmd_altova_CMD_StandardOrderProcess_Type_altova_orderingInstructions> orderingInstructions;
	struct orderingInstructions { typedef Iterator<gco::CCharacterString_PropertyType> iterator; };
	MemberElement<gco::CCharacterString_PropertyType, _altova_mi_gmd_altova_CMD_StandardOrderProcess_Type_altova_turnaround> turnaround;
	struct turnaround { typedef Iterator<gco::CCharacterString_PropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_StandardOrderProcess_Type
