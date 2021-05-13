#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CEllipsoidType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CEllipsoidType

#include "type_gml.CIdentifiedObjectType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CEllipsoidType : public ::indoorgmlcore::gml::CIdentifiedObjectType
{
public:
	indoorgmlcore_EXPORT CEllipsoidType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CEllipsoidType(CEllipsoidType const& init);
	void operator=(CEllipsoidType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CEllipsoidType); }
	MemberElement<gml::CMeasureType, _altova_mi_gml_altova_CEllipsoidType_altova_semiMajorAxis> semiMajorAxis;
	struct semiMajorAxis { typedef Iterator<gml::CMeasureType> iterator; };
	MemberElement<CsecondDefiningParameterType2, _altova_mi_gml_altova_CEllipsoidType_altova_secondDefiningParameter> secondDefiningParameter;
	struct secondDefiningParameter { typedef Iterator<CsecondDefiningParameterType2> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CEllipsoidType
