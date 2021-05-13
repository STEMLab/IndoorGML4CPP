#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CLineStringSegmentArrayPropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CLineStringSegmentArrayPropertyType



namespace indoorgmlcore
{

namespace gml
{	

class CLineStringSegmentArrayPropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CLineStringSegmentArrayPropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CLineStringSegmentArrayPropertyType(CLineStringSegmentArrayPropertyType const& init);
	void operator=(CLineStringSegmentArrayPropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CLineStringSegmentArrayPropertyType); }
	MemberElement<gml::CLineStringSegmentType, _altova_mi_gml_altova_CLineStringSegmentArrayPropertyType_altova_LineStringSegment> LineStringSegment;
	struct LineStringSegment { typedef Iterator<gml::CLineStringSegmentType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CLineStringSegmentArrayPropertyType
