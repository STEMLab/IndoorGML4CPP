#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractCoordinateSystemType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractCoordinateSystemType

#include "type_gml.CIdentifiedObjectType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CAbstractCoordinateSystemType : public ::indoorgmlcore::gml::CIdentifiedObjectType
{
public:
	indoorgmlcore_EXPORT CAbstractCoordinateSystemType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CAbstractCoordinateSystemType(CAbstractCoordinateSystemType const& init);
	void operator=(CAbstractCoordinateSystemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CAbstractCoordinateSystemType); }
	MemberAttribute<string_type,_altova_mi_gml_altova_CAbstractCoordinateSystemType_altova_aggregationType, 1, 6> aggregationType;	// aggregationType CAggregationType
	MemberElement<gml::CCoordinateSystemAxisPropertyType, _altova_mi_gml_altova_CAbstractCoordinateSystemType_altova_axis> axis;
	struct axis { typedef Iterator<gml::CCoordinateSystemAxisPropertyType> iterator; };
	MemberElement<gml::CCoordinateSystemAxisPropertyType, _altova_mi_gml_altova_CAbstractCoordinateSystemType_altova_usesAxis> usesAxis;
	struct usesAxis { typedef Iterator<gml::CCoordinateSystemAxisPropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractCoordinateSystemType
