#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDefinitionBaseType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDefinitionBaseType



namespace indoorgmlcore
{

namespace gml
{	

class CDefinitionBaseType : public ElementType
{
public:
	indoorgmlcore_EXPORT CDefinitionBaseType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CDefinitionBaseType(CDefinitionBaseType const& init);
	void operator=(CDefinitionBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CDefinitionBaseType); }

	MemberAttribute<string_type,_altova_mi_gml_altova_CDefinitionBaseType_altova_id, 0, 0> id;	// id CID
	MemberElement<gml::CMetaDataPropertyType, _altova_mi_gml_altova_CDefinitionBaseType_altova_metaDataProperty> metaDataProperty;
	struct metaDataProperty { typedef Iterator<gml::CMetaDataPropertyType> iterator; };
	MemberElement<gml::CStringOrRefType, _altova_mi_gml_altova_CDefinitionBaseType_altova_description> description;
	struct description { typedef Iterator<gml::CStringOrRefType> iterator; };
	MemberElement<gml::CReferenceType, _altova_mi_gml_altova_CDefinitionBaseType_altova_descriptionReference> descriptionReference;
	struct descriptionReference { typedef Iterator<gml::CReferenceType> iterator; };
	MemberElement<gml::CCodeWithAuthorityType, _altova_mi_gml_altova_CDefinitionBaseType_altova_identifier> identifier;
	struct identifier { typedef Iterator<gml::CCodeWithAuthorityType> iterator; };
	MemberElement<gml::CCodeType, _altova_mi_gml_altova_CDefinitionBaseType_altova_name> name;
	struct name { typedef Iterator<gml::CCodeType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDefinitionBaseType
