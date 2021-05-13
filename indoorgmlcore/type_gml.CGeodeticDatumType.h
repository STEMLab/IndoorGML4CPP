#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CGeodeticDatumType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CGeodeticDatumType

#include "type_gml.CAbstractDatumType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CGeodeticDatumType : public ::indoorgmlcore::gml::CAbstractDatumType
{
public:
	indoorgmlcore_EXPORT CGeodeticDatumType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CGeodeticDatumType(CGeodeticDatumType const& init);
	void operator=(CGeodeticDatumType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CGeodeticDatumType); }
	MemberElement<gml::CPrimeMeridianPropertyType, _altova_mi_gml_altova_CGeodeticDatumType_altova_primeMeridian> primeMeridian;
	struct primeMeridian { typedef Iterator<gml::CPrimeMeridianPropertyType> iterator; };
	MemberElement<gml::CPrimeMeridianPropertyType, _altova_mi_gml_altova_CGeodeticDatumType_altova_usesPrimeMeridian> usesPrimeMeridian;
	struct usesPrimeMeridian { typedef Iterator<gml::CPrimeMeridianPropertyType> iterator; };
	MemberElement<gml::CEllipsoidPropertyType, _altova_mi_gml_altova_CGeodeticDatumType_altova_ellipsoid> ellipsoid;
	struct ellipsoid { typedef Iterator<gml::CEllipsoidPropertyType> iterator; };
	MemberElement<gml::CEllipsoidPropertyType, _altova_mi_gml_altova_CGeodeticDatumType_altova_usesEllipsoid> usesEllipsoid;
	struct usesEllipsoid { typedef Iterator<gml::CEllipsoidPropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CGeodeticDatumType
