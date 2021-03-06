#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CLI_ProcessStep_Type
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CLI_ProcessStep_Type

#include "type_gco.CAbstractObject_Type.h"


namespace indoorgmlcore
{

namespace gmd
{	

class CLI_ProcessStep_Type : public ::indoorgmlcore::gco::CAbstractObject_Type
{
public:
	indoorgmlcore_EXPORT CLI_ProcessStep_Type(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CLI_ProcessStep_Type(CLI_ProcessStep_Type const& init);
	void operator=(CLI_ProcessStep_Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CLI_ProcessStep_Type); }
	MemberElement<gco::CCharacterString_PropertyType, _altova_mi_gmd_altova_CLI_ProcessStep_Type_altova_description> description;
	struct description { typedef Iterator<gco::CCharacterString_PropertyType> iterator; };
	MemberElement<gco::CCharacterString_PropertyType, _altova_mi_gmd_altova_CLI_ProcessStep_Type_altova_rationale> rationale;
	struct rationale { typedef Iterator<gco::CCharacterString_PropertyType> iterator; };
	MemberElement<gco::CDateTime_PropertyType, _altova_mi_gmd_altova_CLI_ProcessStep_Type_altova_dateTime> dateTime;
	struct dateTime { typedef Iterator<gco::CDateTime_PropertyType> iterator; };
	MemberElement<gmd::CCI_ResponsibleParty_PropertyType, _altova_mi_gmd_altova_CLI_ProcessStep_Type_altova_processor> processor;
	struct processor { typedef Iterator<gmd::CCI_ResponsibleParty_PropertyType> iterator; };
	MemberElement<gmd::CLI_Source_PropertyType, _altova_mi_gmd_altova_CLI_ProcessStep_Type_altova_source> source;
	struct source { typedef Iterator<gmd::CLI_Source_PropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CLI_ProcessStep_Type
