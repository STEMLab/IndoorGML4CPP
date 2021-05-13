#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractTimeSliceType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractTimeSliceType

#include "type_gml.CAbstractGMLType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CAbstractTimeSliceType : public ::indoorgmlcore::gml::CAbstractGMLType
{
public:
	indoorgmlcore_EXPORT CAbstractTimeSliceType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CAbstractTimeSliceType(CAbstractTimeSliceType const& init);
	void operator=(CAbstractTimeSliceType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CAbstractTimeSliceType); }
	MemberElement<gml::CTimePrimitivePropertyType, _altova_mi_gml_altova_CAbstractTimeSliceType_altova_validTime> validTime;
	struct validTime { typedef Iterator<gml::CTimePrimitivePropertyType> iterator; };
	MemberElement<gml::CStringOrRefType, _altova_mi_gml_altova_CAbstractTimeSliceType_altova_dataSource> dataSource;
	struct dataSource { typedef Iterator<gml::CStringOrRefType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractTimeSliceType
