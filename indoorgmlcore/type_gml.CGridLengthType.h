#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CGridLengthType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CGridLengthType

#include "type_gml.CMeasureType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CGridLengthType : public ::indoorgmlcore::gml::CMeasureType
{
public:
	indoorgmlcore_EXPORT CGridLengthType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CGridLengthType(CGridLengthType const& init);
	void operator=(CGridLengthType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CGridLengthType); }
	indoorgmlcore_EXPORT void operator=(const double& value);
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CGridLengthType
