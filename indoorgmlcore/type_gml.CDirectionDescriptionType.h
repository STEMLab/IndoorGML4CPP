#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDirectionDescriptionType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDirectionDescriptionType



namespace indoorgmlcore
{

namespace gml
{	

class CDirectionDescriptionType : public ElementType
{
public:
	indoorgmlcore_EXPORT CDirectionDescriptionType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CDirectionDescriptionType(CDirectionDescriptionType const& init);
	void operator=(CDirectionDescriptionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CDirectionDescriptionType); }
	MemberElement<gml::CCompassPointEnumerationType, _altova_mi_gml_altova_CDirectionDescriptionType_altova_compassPoint> compassPoint;
	struct compassPoint { typedef Iterator<gml::CCompassPointEnumerationType> iterator; };
	MemberElement<gml::CCodeType, _altova_mi_gml_altova_CDirectionDescriptionType_altova_keyword> keyword;
	struct keyword { typedef Iterator<gml::CCodeType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_gml_altova_CDirectionDescriptionType_altova_description> description;
	struct description { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<gml::CReferenceType, _altova_mi_gml_altova_CDirectionDescriptionType_altova_reference> reference;
	struct reference { typedef Iterator<gml::CReferenceType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDirectionDescriptionType
