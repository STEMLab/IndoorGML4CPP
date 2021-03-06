#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CEX_BoundingPolygon_Type
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CEX_BoundingPolygon_Type

#include "type_gmd.CAbstractEX_GeographicExtent_Type.h"


namespace indoorgmlcore
{

namespace gmd
{	

class CEX_BoundingPolygon_Type : public ::indoorgmlcore::gmd::CAbstractEX_GeographicExtent_Type
{
public:
	indoorgmlcore_EXPORT CEX_BoundingPolygon_Type(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CEX_BoundingPolygon_Type(CEX_BoundingPolygon_Type const& init);
	void operator=(CEX_BoundingPolygon_Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CEX_BoundingPolygon_Type); }
	MemberElement<gss::CGM_Object_PropertyType, _altova_mi_gmd_altova_CEX_BoundingPolygon_Type_altova_polygon> polygon;
	struct polygon { typedef Iterator<gss::CGM_Object_PropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CEX_BoundingPolygon_Type
