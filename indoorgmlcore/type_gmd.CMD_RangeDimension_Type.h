#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_RangeDimension_Type
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_RangeDimension_Type

#include "type_gco.CAbstractObject_Type.h"


namespace indoorgmlcore
{

namespace gmd
{	

class CMD_RangeDimension_Type : public ::indoorgmlcore::gco::CAbstractObject_Type
{
public:
	indoorgmlcore_EXPORT CMD_RangeDimension_Type(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMD_RangeDimension_Type(CMD_RangeDimension_Type const& init);
	void operator=(CMD_RangeDimension_Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CMD_RangeDimension_Type); }
	MemberElement<gco::CMemberName_PropertyType, _altova_mi_gmd_altova_CMD_RangeDimension_Type_altova_sequenceIdentifier> sequenceIdentifier;
	struct sequenceIdentifier { typedef Iterator<gco::CMemberName_PropertyType> iterator; };
	MemberElement<gco::CCharacterString_PropertyType, _altova_mi_gmd_altova_CMD_RangeDimension_Type_altova_descriptor> descriptor;
	struct descriptor { typedef Iterator<gco::CCharacterString_PropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_RangeDimension_Type
