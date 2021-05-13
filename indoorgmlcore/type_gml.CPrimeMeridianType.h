#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CPrimeMeridianType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CPrimeMeridianType

#include "type_gml.CIdentifiedObjectType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CPrimeMeridianType : public ::indoorgmlcore::gml::CIdentifiedObjectType
{
public:
	indoorgmlcore_EXPORT CPrimeMeridianType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CPrimeMeridianType(CPrimeMeridianType const& init);
	void operator=(CPrimeMeridianType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CPrimeMeridianType); }
	MemberElement<gml::CAngleType, _altova_mi_gml_altova_CPrimeMeridianType_altova_greenwichLongitude> greenwichLongitude;
	struct greenwichLongitude { typedef Iterator<gml::CAngleType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CPrimeMeridianType
