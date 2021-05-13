#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractGeneralTransformationType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractGeneralTransformationType



namespace indoorgmlcore
{

namespace gml
{	

class CAbstractGeneralTransformationType : public ElementType
{
public:
	indoorgmlcore_EXPORT CAbstractGeneralTransformationType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CAbstractGeneralTransformationType(CAbstractGeneralTransformationType const& init);
	void operator=(CAbstractGeneralTransformationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CAbstractGeneralTransformationType); }

	MemberAttribute<string_type,_altova_mi_gml_altova_CAbstractGeneralTransformationType_altova_id, 0, 0> id;	// id CID
	MemberElement<gml::CMetaDataPropertyType, _altova_mi_gml_altova_CAbstractGeneralTransformationType_altova_metaDataProperty> metaDataProperty;
	struct metaDataProperty { typedef Iterator<gml::CMetaDataPropertyType> iterator; };
	MemberElement<gml::CStringOrRefType, _altova_mi_gml_altova_CAbstractGeneralTransformationType_altova_description> description;
	struct description { typedef Iterator<gml::CStringOrRefType> iterator; };
	MemberElement<gml::CReferenceType, _altova_mi_gml_altova_CAbstractGeneralTransformationType_altova_descriptionReference> descriptionReference;
	struct descriptionReference { typedef Iterator<gml::CReferenceType> iterator; };
	MemberElement<gml::CCodeWithAuthorityType, _altova_mi_gml_altova_CAbstractGeneralTransformationType_altova_identifier> identifier;
	struct identifier { typedef Iterator<gml::CCodeWithAuthorityType> iterator; };
	MemberElement<gml::CCodeType, _altova_mi_gml_altova_CAbstractGeneralTransformationType_altova_name> name;
	struct name { typedef Iterator<gml::CCodeType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_gml_altova_CAbstractGeneralTransformationType_altova_remarks> remarks;
	struct remarks { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<CdomainOfValidityType, _altova_mi_gml_altova_CAbstractGeneralTransformationType_altova_domainOfValidity> domainOfValidity;
	struct domainOfValidity { typedef Iterator<CdomainOfValidityType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_gml_altova_CAbstractGeneralTransformationType_altova_scope> scope;
	struct scope { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_gml_altova_CAbstractGeneralTransformationType_altova_operationVersion> operationVersion;
	struct operationVersion { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<CcoordinateOperationAccuracyType, _altova_mi_gml_altova_CAbstractGeneralTransformationType_altova_coordinateOperationAccuracy> coordinateOperationAccuracy;
	struct coordinateOperationAccuracy { typedef Iterator<CcoordinateOperationAccuracyType> iterator; };
	MemberElement<gml::CCRSPropertyType, _altova_mi_gml_altova_CAbstractGeneralTransformationType_altova_sourceCRS> sourceCRS;
	struct sourceCRS { typedef Iterator<gml::CCRSPropertyType> iterator; };
	MemberElement<gml::CCRSPropertyType, _altova_mi_gml_altova_CAbstractGeneralTransformationType_altova_targetCRS> targetCRS;
	struct targetCRS { typedef Iterator<gml::CCRSPropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractGeneralTransformationType
