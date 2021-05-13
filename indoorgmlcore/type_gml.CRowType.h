#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CRowType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CRowType



namespace indoorgmlcore
{

namespace gml
{	

class CRowType : public ElementType
{
public:
	indoorgmlcore_EXPORT CRowType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CRowType(CRowType const& init);
	void operator=(CRowType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CRowType); }
	MemberElement<gml::CDirectPositionListType, _altova_mi_gml_altova_CRowType_altova_posList> posList;
	struct posList { typedef Iterator<gml::CDirectPositionListType> iterator; };
	MemberElement<gml::CDirectPositionType, _altova_mi_gml_altova_CRowType_altova_pos> pos;
	struct pos { typedef Iterator<gml::CDirectPositionType> iterator; };
	MemberElement<gml::CPointPropertyType, _altova_mi_gml_altova_CRowType_altova_pointProperty> pointProperty;
	struct pointProperty { typedef Iterator<gml::CPointPropertyType> iterator; };
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CRowType
