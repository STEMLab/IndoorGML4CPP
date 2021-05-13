#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_RepresentativeFraction_Type
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_RepresentativeFraction_Type

#include "type_gco.CAbstractObject_Type.h"


namespace indoorgmlcore
{

namespace gmd
{	

class CMD_RepresentativeFraction_Type : public ::indoorgmlcore::gco::CAbstractObject_Type
{
public:
	indoorgmlcore_EXPORT CMD_RepresentativeFraction_Type(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMD_RepresentativeFraction_Type(CMD_RepresentativeFraction_Type const& init);
	void operator=(CMD_RepresentativeFraction_Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CMD_RepresentativeFraction_Type); }
	MemberElement<gco::CInteger_PropertyType, _altova_mi_gmd_altova_CMD_RepresentativeFraction_Type_altova_denominator> denominator;
	struct denominator { typedef Iterator<gco::CInteger_PropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CMD_RepresentativeFraction_Type
