#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CLinearRingPropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CLinearRingPropertyType



namespace indoorgmlcore
{

namespace gml
{	

class CLinearRingPropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CLinearRingPropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CLinearRingPropertyType(CLinearRingPropertyType const& init);
	void operator=(CLinearRingPropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CLinearRingPropertyType); }
	MemberElement<gml::CLinearRingType, _altova_mi_gml_altova_CLinearRingPropertyType_altova_LinearRing> LinearRing;
	struct LinearRing { typedef Iterator<gml::CLinearRingType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CLinearRingPropertyType
