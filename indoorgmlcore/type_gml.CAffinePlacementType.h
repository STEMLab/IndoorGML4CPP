#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAffinePlacementType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAffinePlacementType



namespace indoorgmlcore
{

namespace gml
{	

class CAffinePlacementType : public ElementType
{
public:
	indoorgmlcore_EXPORT CAffinePlacementType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CAffinePlacementType(CAffinePlacementType const& init);
	void operator=(CAffinePlacementType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CAffinePlacementType); }
	MemberElement<gml::CDirectPositionType, _altova_mi_gml_altova_CAffinePlacementType_altova_location> location;
	struct location { typedef Iterator<gml::CDirectPositionType> iterator; };
	MemberElement<gml::CVectorType, _altova_mi_gml_altova_CAffinePlacementType_altova_refDirection> refDirection;
	struct refDirection { typedef Iterator<gml::CVectorType> iterator; };
	MemberElement<xs::CpositiveIntegerType, _altova_mi_gml_altova_CAffinePlacementType_altova_inDimension> inDimension;
	struct inDimension { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	MemberElement<xs::CpositiveIntegerType, _altova_mi_gml_altova_CAffinePlacementType_altova_outDimension> outDimension;
	struct outDimension { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAffinePlacementType
