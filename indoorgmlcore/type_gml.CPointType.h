#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CPointType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CPointType

#include "type_gml.CAbstractGeometricPrimitiveType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CPointType : public ::indoorgmlcore::gml::CAbstractGeometricPrimitiveType
{
public:
	indoorgmlcore_EXPORT CPointType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CPointType(CPointType const& init);
	void operator=(CPointType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CPointType); }
	MemberElement<gml::CDirectPositionType, _altova_mi_gml_altova_CPointType_altova_pos> pos;
	struct pos { typedef Iterator<gml::CDirectPositionType> iterator; };
	MemberElement<gml::CCoordinatesType, _altova_mi_gml_altova_CPointType_altova_coordinates> coordinates;
	struct coordinates { typedef Iterator<gml::CCoordinatesType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CPointType
