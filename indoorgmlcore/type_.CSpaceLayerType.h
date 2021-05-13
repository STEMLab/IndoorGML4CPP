#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CSpaceLayerType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CSpaceLayerType

#include "type_gml.CAbstractFeatureType.h"


namespace indoorgmlcore
{

class CSpaceLayerType : public ::indoorgmlcore::gml::CAbstractFeatureType
{
public:
	indoorgmlcore_EXPORT CSpaceLayerType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CSpaceLayerType(CSpaceLayerType const& init);
	void operator=(CSpaceLayerType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CSpaceLayerType); }
	MemberElement<gml::CCodeType, _altova_mi_altova_CSpaceLayerType_altova_usage> usage;
	struct usage { typedef Iterator<gml::CCodeType> iterator; };
	MemberElement<xs::CdateTimeType, _altova_mi_altova_CSpaceLayerType_altova_terminationDate> terminationDate;
	struct terminationDate { typedef Iterator<xs::CdateTimeType> iterator; };
	MemberElement<gml::CCodeType, _altova_mi_altova_CSpaceLayerType_altova_function> function;
	struct function { typedef Iterator<gml::CCodeType> iterator; };
	MemberElement<xs::CdateTimeType, _altova_mi_altova_CSpaceLayerType_altova_creationDate> creationDate;
	struct creationDate { typedef Iterator<xs::CdateTimeType> iterator; };
	MemberElement<CSpaceLayerClassTypeTypeType, _altova_mi_altova_CSpaceLayerType_altova_class2> class2;
	struct class2 { typedef Iterator<CSpaceLayerClassTypeTypeType> iterator; };
	MemberElement<CNodesType, _altova_mi_altova_CSpaceLayerType_altova_nodes> nodes;
	struct nodes { typedef Iterator<CNodesType> iterator; };
	MemberElement<CEdgesType, _altova_mi_altova_CSpaceLayerType_altova_edges> edges;
	struct edges { typedef Iterator<CEdgesType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};


}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CSpaceLayerType
