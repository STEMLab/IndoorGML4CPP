#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAngleType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAngleType

#include "type_gml.CMeasureType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CAngleType : public ::indoorgmlcore::gml::CMeasureType
{
public:
	indoorgmlcore_EXPORT CAngleType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CAngleType(CAngleType const& init);
	void operator=(CAngleType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CAngleType); }
	indoorgmlcore_EXPORT void operator=(const double& value);
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAngleType
