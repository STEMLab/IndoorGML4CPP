#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CDS_AssociationTypeCode_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CDS_AssociationTypeCode_PropertyType



namespace indoorgmlcore
{

namespace gmd
{	

class CDS_AssociationTypeCode_PropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CDS_AssociationTypeCode_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CDS_AssociationTypeCode_PropertyType(CDS_AssociationTypeCode_PropertyType const& init);
	void operator=(CDS_AssociationTypeCode_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CDS_AssociationTypeCode_PropertyType); }

	MemberAttribute<string_type,_altova_mi_gmd_altova_CDS_AssociationTypeCode_PropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	MemberElement<gco::CCodeListValue_Type, _altova_mi_gmd_altova_CDS_AssociationTypeCode_PropertyType_altova_DS_AssociationTypeCode> DS_AssociationTypeCode;
	struct DS_AssociationTypeCode { typedef Iterator<gco::CCodeListValue_Type> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CDS_AssociationTypeCode_PropertyType
