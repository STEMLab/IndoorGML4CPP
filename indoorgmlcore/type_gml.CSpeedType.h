#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CSpeedType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CSpeedType

#include "type_gml.CMeasureType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CSpeedType : public ::indoorgmlcore::gml::CMeasureType
{
public:
	indoorgmlcore_EXPORT CSpeedType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CSpeedType(CSpeedType const& init);
	void operator=(CSpeedType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CSpeedType); }
	indoorgmlcore_EXPORT void operator=(const double& value);
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CSpeedType
