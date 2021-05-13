#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CRecordType_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CRecordType_PropertyType



namespace indoorgmlcore
{

namespace gco
{	

class CRecordType_PropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CRecordType_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CRecordType_PropertyType(CRecordType_PropertyType const& init);
	void operator=(CRecordType_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gco_altova_CRecordType_PropertyType); }

	MemberAttribute<string_type,_altova_mi_gco_altova_CRecordType_PropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType
	MemberElement<gco::CRecordType_Type, _altova_mi_gco_altova_CRecordType_PropertyType_altova_RecordType> RecordType;
	struct RecordType { typedef Iterator<gco::CRecordType_Type> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gco

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CRecordType_PropertyType
