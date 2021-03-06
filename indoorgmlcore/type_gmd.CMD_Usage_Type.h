#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_Usage_Type
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_Usage_Type

#include "type_gco.CAbstractObject_Type.h"


namespace indoorgmlcore
{

namespace gmd
{	

class CMD_Usage_Type : public ::indoorgmlcore::gco::CAbstractObject_Type
{
public:
	indoorgmlcore_EXPORT CMD_Usage_Type(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMD_Usage_Type(CMD_Usage_Type const& init);
	void operator=(CMD_Usage_Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CMD_Usage_Type); }
	MemberElement<gco::CCharacterString_PropertyType, _altova_mi_gmd_altova_CMD_Usage_Type_altova_specificUsage> specificUsage;
	struct specificUsage { typedef Iterator<gco::CCharacterString_PropertyType> iterator; };
	MemberElement<gco::CDateTime_PropertyType, _altova_mi_gmd_altova_CMD_Usage_Type_altova_usageDateTime> usageDateTime;
	struct usageDateTime { typedef Iterator<gco::CDateTime_PropertyType> iterator; };
	MemberElement<gco::CCharacterString_PropertyType, _altova_mi_gmd_altova_CMD_Usage_Type_altova_userDeterminedLimitations> userDeterminedLimitations;
	struct userDeterminedLimitations { typedef Iterator<gco::CCharacterString_PropertyType> iterator; };
	MemberElement<gmd::CCI_ResponsibleParty_PropertyType, _altova_mi_gmd_altova_CMD_Usage_Type_altova_userContactInfo> userContactInfo;
	struct userContactInfo { typedef Iterator<gmd::CCI_ResponsibleParty_PropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_Usage_Type
