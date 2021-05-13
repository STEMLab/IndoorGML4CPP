#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CrefLocationType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CrefLocationType



namespace indoorgmlcore
{

namespace gml
{	

class CrefLocationType : public ElementType
{
public:
	indoorgmlcore_EXPORT CrefLocationType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CrefLocationType(CrefLocationType const& init);
	void operator=(CrefLocationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CrefLocationType); }
	MemberElement<gml::CAffinePlacementType, _altova_mi_gml_altova_CrefLocationType_altova_AffinePlacement> AffinePlacement;
	struct AffinePlacement { typedef Iterator<gml::CAffinePlacementType> iterator; };
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CrefLocationType
