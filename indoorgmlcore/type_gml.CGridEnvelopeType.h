#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CGridEnvelopeType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CGridEnvelopeType



namespace indoorgmlcore
{

namespace gml
{	

class CGridEnvelopeType : public ElementType
{
public:
	indoorgmlcore_EXPORT CGridEnvelopeType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CGridEnvelopeType(CGridEnvelopeType const& init);
	void operator=(CGridEnvelopeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CGridEnvelopeType); }
	MemberElement<gml::CintegerListType, _altova_mi_gml_altova_CGridEnvelopeType_altova_low> low;
	struct low { typedef Iterator<gml::CintegerListType> iterator; };
	MemberElement<gml::CintegerListType, _altova_mi_gml_altova_CGridEnvelopeType_altova_high> high;
	struct high { typedef Iterator<gml::CintegerListType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CGridEnvelopeType
