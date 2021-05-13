#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CGridLimitsType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CGridLimitsType



namespace indoorgmlcore
{

namespace gml
{	

class CGridLimitsType : public ElementType
{
public:
	indoorgmlcore_EXPORT CGridLimitsType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CGridLimitsType(CGridLimitsType const& init);
	void operator=(CGridLimitsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CGridLimitsType); }
	MemberElement<gml::CGridEnvelopeType, _altova_mi_gml_altova_CGridLimitsType_altova_GridEnvelope> GridEnvelope;
	struct GridEnvelope { typedef Iterator<gml::CGridEnvelopeType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CGridLimitsType
