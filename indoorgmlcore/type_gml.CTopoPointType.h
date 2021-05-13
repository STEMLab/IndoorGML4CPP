#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTopoPointType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTopoPointType

#include "type_gml.CAbstractTopologyType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CTopoPointType : public ::indoorgmlcore::gml::CAbstractTopologyType
{
public:
	indoorgmlcore_EXPORT CTopoPointType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CTopoPointType(CTopoPointType const& init);
	void operator=(CTopoPointType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CTopoPointType); }
	MemberElement<gml::CDirectedNodePropertyType, _altova_mi_gml_altova_CTopoPointType_altova_directedNode> directedNode;
	struct directedNode { typedef Iterator<gml::CDirectedNodePropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTopoPointType
