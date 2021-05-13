#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CMemberName_Type
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CMemberName_Type

#include "type_gco.CAbstractObject_Type.h"


namespace indoorgmlcore
{

namespace gco
{	

class CMemberName_Type : public ::indoorgmlcore::gco::CAbstractObject_Type
{
public:
	indoorgmlcore_EXPORT CMemberName_Type(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMemberName_Type(CMemberName_Type const& init);
	void operator=(CMemberName_Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gco_altova_CMemberName_Type); }
	MemberElement<gco::CCharacterString_PropertyType, _altova_mi_gco_altova_CMemberName_Type_altova_aName> aName;
	struct aName { typedef Iterator<gco::CCharacterString_PropertyType> iterator; };
	MemberElement<gco::CTypeName_PropertyType, _altova_mi_gco_altova_CMemberName_Type_altova_attributeType> attributeType;
	struct attributeType { typedef Iterator<gco::CTypeName_PropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gco

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CMemberName_Type
