#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CScaleType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CScaleType

#include "type_gml.CMeasureType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CScaleType : public ::indoorgmlcore::gml::CMeasureType
{
public:
	indoorgmlcore_EXPORT CScaleType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CScaleType(CScaleType const& init);
	void operator=(CScaleType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CScaleType); }
	indoorgmlcore_EXPORT void operator=(const double& value);
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CScaleType
